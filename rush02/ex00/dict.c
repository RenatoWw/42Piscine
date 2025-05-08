/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:54:21 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/04 15:54:22 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

struct s_dict_entry	*init_dict(int dict_size)
{
	struct s_dict_entry	*dict;
	int					i;

	dict = malloc(sizeof(struct s_dict_entry) * dict_size);
	if (!dict)
	{
		ft_error();
		return (NULL);
	}
	i = 0;
	while (i < dict_size)
	{
		dict[i].key = malloc(128);
		dict[i].value = malloc(128);
		if (!dict[i].key || !dict[i].value)
		{
			ft_error();
			return (NULL);
		}
		i++;
	}
	return (dict);
}

void	print_dict(struct s_dict_entry *dict, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		write(1, "Key: ", 5);
		write(1, dict[j].key, ft_strlen(dict[j].key));
		write(1, " | Value: ", 10);
		write(1, dict[j].value, ft_strlen(dict[j].value));
		write(1, "\n", 1);
		j++;
	}	
}

void	free_dict(struct s_dict_entry *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
	free(dict);
}

int	load_dict(struct s_dict_entry *dict, char *filename, int dict_size)
{
	int		fd;
	int		i;
	char	buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Falha ao abrir arquivo\n", 23);
		return (1);
	}
	i = 0;
	while (read_line(fd, buffer, sizeof(buffer)) && i < dict_size)
	{
		if (buffer[0] == '\0')
			continue ;
		if (parse_line_to_dict(buffer, &dict[i]))
			i++;
	}
	close(fd);
	return (0);
}

char	*search_dict(struct s_dict_entry *dict, int dict_size, char *key)
{
	int	i;

	i = 0;
	while (i < dict_size)
	{
		if (ft_strcmp(dict[i].key, key) == 0)
			return (dict[i].value);
			i++;
	}
	return (NULL);
}
