/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:45:05 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/29 23:33:15 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	output(char *symb)
{
	printf("            WELCOME TO PLAY THE COIN RIDDLE\n");
	printf("\n");
	printf("     You have 12 coins and one of them is a fake.\n");
	printf("   The fake looks the same but the weight differs.\n");
	printf("     It can ge heavier or lighter than the rest.\n");
	printf("\n");
	printf("                 You also have a scale.             \n");
	printf("          You can use the scale three times.        \n");
	printf("         Can you figure out which coin is fake?         \n");
	printf("\n");
	printf("                          ()                      \n");
	printf("                         /||\\                      \n");
	printf("                        / || \\                     \n");
	printf("                ==========##==========           \n");
	printf("              __|__       ||         |                 \n");
	printf("              \\ L /       ||         |               \n");
	printf("               \\_/        ||       __|__     \n");
	printf("                          ||       \\ R /                  \n");
	printf("                          ||        \\_/                \n");
	printf("                         /  \\                        \n");
	printf("                        /    \\                         \n");
	printf("                       /______\\                       \n");
	printf("\n");
	printf("\n");
	printf(" _____________________________________________________________\n");
	printf(" |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 | 10 | 11 | 12 |\n");
	printf("\n");
	printf("  (%c)  (%c)  (%c)  (%c)", symb[0], symb[1], symb[2], symb[3]);
	printf("  (%c)  (%c)  (%c)  (%c)", symb[4], symb[5], symb[6], symb[7]);
	printf("  (%c)  (%c)  (%c)  (%c)\n",symb[8], symb[9], symb[10], symb[11]);
	printf("\n");
	printf("\n");
	printf(" Coin symbols:      Scale symbols:     Other commands:\n");
	printf("  0: Unknown         L: Left cup        R: Retry\n");
	printf("  +: Heavy           R: Right cup       E: Extra\n");
	printf("  -: Light                              Q: Quit\n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                 i\n");
}
