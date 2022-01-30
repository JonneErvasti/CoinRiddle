/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:34:02 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/30 16:38:04 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
	Makefile
		resize -s 50 62
	Tekemättä:
		R
		Q
		Itse kolikkojen sijoittaminen
		Ohjeet kolikkojen sijoittamiselle
			separate by space?
			kaikki yhteen rimpsuun vai ensin toinen kuppi?
		Animaatio vaa'alle?
		Laita vaaka ja ohjeet keskelle.
		Onko Scale symbols tarvittava
			laitetaanko edellinen otanta näkyviin laidoille?
		make random random again
		E
*/
void	output(char *symb);

int	rng(int big, int small)
{
	int	result;

	result = (rand() % (big - small + 1));
	return (result);
}

int	main(void)
{
	char	coin[13];
	char	symb[13];
	char	input[100];
	int		i = 0;
	int		random;
	int		fake = 1;

	// Making coins neutral and adding 0 as symbol
	while (i < 12)
	{
		coin[i] = 1;
		symb[i] = '0';
		i++;
	}
	coin[i] = '\0';
	symb[i] = '\0';

	//Creating randomly the false coin and its weight
	random = rng(11, 0);
	while (fake == 1)
		fake =  rng(2, 0);
	coin[random] = fake;
	

	output(symb);
	printf("What is thy command, master: ");
	fgets(input);
	printf("\nYou've entered: %s", input);
	getch();
	printf("i: %d\nsymb: %s\n", i, symb);
	for (i = 0; i < 12; i++)
		printf("%d", coin[i]);
	return (0);
}
