/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:21:15 by joaoleote         #+#    #+#             */
/*   Updated: 2025/03/08 13:55:41 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void exec(char *cmd, char **env)
{
    char **s_cmd;
    char *path;

    s_cmd = ft_split(cmd, ' ');
    if (!s_cmd)
    {
        perror("Failed to split command");
        exit(EXIT_FAILURE);
    }
    path = find_path(s_cmd[0], env);
    if (execve(path, s_cmd, env) == -1)
    {
        perror("execve");
        ft_free(s_cmd);
        exit(EXIT_FAILURE);
    }
}

void	child(char **av, int *p_fd, char **env)
{
	int	fd;

	fd = open_file(av[1], 0);
	if (fd == -1)
		error_open(p_fd);
	dup2(fd, STDIN_FILENO);
	dup2(p_fd[1], STDOUT_FILENO);
	close(fd);
	close(p_fd[0]);
	close(p_fd[1]);
	exec(av[2], env);
}

void	parent(char **av, int *p_fd, char **env)
{
    int	fd;

	fd = open_file(av[4], 1);
	if (fd == -1)
		error_open(p_fd);
	dup2(p_fd[0], STDIN_FILENO);
	dup2(fd, STDOUT_FILENO);
	close(p_fd[0]);
	close(p_fd[1]);
	close(fd);
	exec(av[3], env);
}

void	finish_main(int *p_fd)
{
	close(p_fd[0]);
	close(p_fd[1]);
	wait(NULL);
	wait(NULL);
}

int	main(int ac, char **av, char **env)
{
	int		p_fd[2];
	pid_t	pid;
	char	*path;

	if (ac != 5)
		error_args(1);
	if (empty_word(av) == 1)
		error_args(1);
	path = get_env(env);
	if (!path)
		error_path();
	if (pipe(p_fd) == -1)
		error_pipe(1);
	pid = fork();
	if (pid == -1)
		error_fork(1);
	else if (pid == 0)
		child(av, p_fd, env);
	pid = fork();
	if (pid == -1)
		error_fork(1);
	else if (pid == 0)
		parent(av, p_fd, env);
	finish_main(p_fd);
	return (0);
}
