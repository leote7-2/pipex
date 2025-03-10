/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:21:18 by joaoleote         #+#    #+#             */
/*   Updated: 2025/03/08 12:49:40 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

int	empty_word(char **str)
{
	int	i;
	int	j;
	int	empty;

	i = 1;
	while (str[i])
	{
		j = 0;
		empty = 1;
		if (str[i][0] == '\0')
			return (1);
		while (str[i][j] != '\0')
		{
			if (str[i][j] != ' ' && str[i][j] != '\t')
			{
				empty = 0;
				break ;
			}
			j++;
		}
		if (empty == 1)
			return (1);
		i++;
	}
	return (0);
}

void	ft_free(char **tab)
{
	int	i;
	
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	open_file(char *file, int in_or_out)
{
	int	ret;
	
	if (in_or_out == 0)
		ret = open(file, O_RDONLY, 0777);
	if (in_or_out == 1)
		ret = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	return (ret);
}

char	*get_env(char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		if (ft_strncmp(env[i], "PATH=", 5) == 0)
			return (env[i] + 5);
		i++;
	}
	return (NULL);
}

char *find_path(char *cmd, char **env)
{
	int	i;
	char	*exec;
	char	**allpath;
	char	*path_part;
	char	*s_cmd;

	s_cmd = get_env(env);
	if (!s_cmd)
		return (cmd);
	i = -1;
	allpath = ft_split(get_env(env), ':');
	if (!allpath)
		return (cmd);
	while (allpath[++i])
	{
		path_part = ft_strjoin(allpath[i], "/");
		exec = ft_strjoin(path_part, cmd);
		free(path_part);
		if (access(exec, F_OK | X_OK) == 0)
			return (exec);
		free(exec);
	}
	ft_free(allpath);
	return (cmd);
}
