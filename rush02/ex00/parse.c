/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:28:20 by anunes-o          #+#    #+#             */
/*   Updated: 2025/05/04 15:28:23 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int	read_line(int fd, char *buffer, int size)
{
	char	c;
	int		i;
	int		ret;
	int		read_any;

	i = 0;
	while (i < size - 1)
	{
		ret = read(fd, &c, 1);
		if (ret <= 0)
			break ;
		read_any = 1;
		if (c == '\n')
			break ;
		buffer[i] = c;
		i++;
	}
	buffer[i] = '\0';
	return (ret > 0 || i > 0 || read_any);
}

int	skip_spaces(char *str, int i)
{
	while (str[i] == ' ')
		i++;
	return (i);
}

int	parse_line_to_dict(char *line, struct s_dict_entry *entry)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = skip_spaces(line, i);
	while (line[i] >= '0' && line[i] <= '9')
	{
		entry->key[j] = line[i];
		j++;
		i++;
	}
	entry->key[j] = '\0';
	i = skip_spaces(line, i);
	if (line[i] != ':')
		return (0);
	i++;
	i = skip_spaces(line, i);
	j = 0;
	while (line[i] && line[i] != '\n')
	{
		entry->value[j] = line[i];
		j++;
		i++;
	}
	entry->value[j] = '\0';
	return (1);
}
