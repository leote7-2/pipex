/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:49:41 by joaoleote         #+#    #+#             */
/*   Updated: 2025/03/07 17:39:33 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <stdbool.h>
# include "../Libft/libft.h"

//errors.c
void	error_fork(int num);
void	error_pipe(int num);
void	error_args(int num);
void	error_open(int *p_fd);
void	error_path(void);

//pipex.c
void    exec(char *cmd, char **env);
void	child(char **av, int *p_fd, char **env);
void	parent(char **av, int *p_fd, char **env);
void    finish_main(int *p_fd);

//utils.c
char    *find_path(char *cmd, char **env);
char	*get_env(char **env);
int	    open_file(char *file, int in_or_out);
void	ft_free(char **tab);
int	    empty_word(char **str);

#endif