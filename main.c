/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:49:19 by rlins             #+#    #+#             */
/*   Updated: 2022/05/31 03:41:15 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _CRTDBG_MAP_ALLOC // Will show the file where memoryLeak is
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#include <crtdbg.h> // Include of VStudio - Debug

//gcc -Wall -Werror -Wextra *.c && ./a.out
//valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./a.out

int	main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	
	/***********%**********/
	//ft_printf("%%"); // OK
	/***********%**********/

	/***********%X**********/
	//int no = 150;
	//unsigned int nbrH = 2545; //9F1
	//printf("Orig: Hexadecimal value is %X \n", no);
	//printf("Orig: Hexadecimal value is %X \n", nbrH);
	//ft_printf("Impl: Hexadecimal value is %X \n", no);
	//ft_printf("Impl: Hexadecimal value is %X \n", nbrH);
	/***********%X**********/

	/***********%x**********/
	//int no = 150;
	//unsigned int nbrH = 2545; //9F1
	//printf("Orig: Hexadecimal value is %x \n", no);
	//printf("Orig: Hexadecimal value is %x \n", nbrH);
	//ft_printf("Impl: Hexadecimal value is %x \n", no);
	//ft_printf("Impl: Hexadecimal value is %x \n", nbrH);
	/***********%x**********/

	/***********%c**********/
	//char chr = 'a';
	//printf("Orig: character = %c\n", chr);
	//ft_printf("Impl: character = %c\n", chr); // OK
	/***********%c**********/
	
	/***********%s**********/
	//char str[20] = "ola mundo!";
	//printf("Orig: String: %s\n", str);
	//ft_printf("Impl: String: %s\n", str); //OK
	/***********%s**********/

	/***********%p**********/
	//char chr = 'a';
	//printf("%p\n", &chr);
	//ft_printf("%p\n", &chr);
	/***********%p**********/
	
	/***********%i**********/
	/*printf("%i\n", INT_MIN);
	ft_printf("%i\n", INT_MIN);*/
	/***********%i**********/


	/***********%d**********/
	//int ret1 = printf(" %d \n", INT_MIN); // -2147483648
	//int ret2 = ft_printf(" %d \n", INT_MIN); // -2.147.483.648
	//printf("%i\n", ret1);
	//printf("%i\n", ret2);
	/***********%d**********/

	/***********%u**********/
	/*int intUmax = 65535;
	int returnUOM = printf("Orig: U-Int Max: %u\n", intUmax);
	int returnUIM = ft_printf("Impl: U-Int Max: %u\n", intUmax);
	printf("%i\n", returnUOM);
	printf("%i\n", returnUIM);*/
	/***********%u**********/

	return (0);
}
