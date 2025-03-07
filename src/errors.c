/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:41:53 by joaoleote         #+#    #+#             */
/*   Updated: 2025/03/07 18:41:56 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	error_fork(int num)
{
	if (num == 1)
		perror("fork");
	exit(EXIT_FAILURE);
}

void	error_pipe(int num)
{
	if (num == 1)
		perror("pipe");
	exit(EXIT_FAILURE);
}

void	error_args(int num)
{
	if (num == 1)
		perror("args");
	exit(EXIT_FAILURE);
}

void	error_open(int *p_fd)
{
	close(p_fd[0]);
	close(p_fd[1]);
	perror("open");
	exit(EXIT_FAILURE);
}

void	error_path(void)
{
	perror("command not found");
	exit(EXIT_FAILURE);
}
