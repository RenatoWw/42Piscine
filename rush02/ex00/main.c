/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:03:04 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/03 11:03:11 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int	main(int argc, char **argv)
{

	// int		file;
	char	*line;
	struct	s_dict_entry	*dict;
	// int		i;
	int		dict_size;
	// int		j;

	// parsear o argc
	if (argc != 2)
	{
		ft_error();
		return (1);
	}

	if(!validate_input(argv[1]))
	{
		ft_error();
		return(1);
	}

	dict_size = 41;
	dict = init_dict(dict_size);

	// load_dict(dict, argv[1], dict_size);

	if (load_dict(dict, "numbers.dict", dict_size) != 0)
	{
		free_dict(dict, dict_size);
		return(1);
	}
	
	// Teste: imprime o dicionário
	print_number_words(argv[1], dict, dict_size);

	free_dict(dict, dict_size);
	return (0);
}

void	print_number_words(char *num_str, struct s_dict_entry *dict, int dict_size)
{
	char	*word;

	// Tenta achar o número diretamente no dicionário
	word = search_dict(dict, dict_size, num_str);
	if (word)
	{
		write(1, word, ft_strlen(word));
		write(1, "\n", 1);
	}
	else
		write(1, "Dict Error\n", 11);
}
