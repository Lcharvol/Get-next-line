/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharvol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:12:08 by lcharvol          #+#    #+#             */
/*   Updated: 2016/11/14 03:33:37 by lcharvol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 4096
# include <fcntl.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct				s_files
{
	int						fd;
	char					*new;
}							t_files;

int							get_next_line(const int fd, char **line);

#endif
