/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:12:52 by guigarri          #+#    #+#             */
/*   Updated: 2024/04/24 12:26:57 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main()
{
	const char* filename = "arch.txt";
	FILE* file = fopen(filename, "r");

	if (file == NULL)
	{
		printf(" ERROR %s\n", filename);
		return (1);
	}

	char	line[260];
	while (fgets(line, sizeof(line), file))
	{
		printf("- %s", line);
	}

	fclose(file);
	return (0);
}
