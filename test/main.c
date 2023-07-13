/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:24:09 by rahmed            #+#    #+#             */
/*   Updated: 2023/01/29 18:49:59 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rendu/ft_printf.h"
#include <stdio.h> // DEBUG
#include "limits.h"

// TEST
int main(void) //DEBUG
{
	int ret;

	char *test = "TEST";
	char *test2 = NULL;

	ft_printf("\nMytest1\n");
	ret = ft_printf("%% ");
	printf("\nret = %d\n", ret);

	ft_printf("\ntruetest1\n");
	ret = printf("%% ");
	printf("\nret = %d\n", ret);

	ft_printf("\nMytest1\n");
	ret = ft_printf(" %p %p ", "-10", "100");
	printf("\nret = %d\n", ret);

	ft_printf("\ntruetest1\n");
	ret = printf(" %p %p ", "-10", "100");
	printf("\nret = %d\n", ret);

	//ft_printf("\nMytest1\n");
	//ret = ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	//printf("\nret = %d\n", ret);

	//ft_printf("\ntruetest1\n");
	//ret = printf(" %p %p ", LONG_MIN, LONG_MAX);
	//printf("\nret = %d\n", ret);

	//ft_printf("\nMytest2\n");
	//ret = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	//printf("\nret = %d\n", ret);

	//ft_printf("\ntruetest2\n");
	//ret = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	//printf("\nret = %d\n", ret);

	ft_printf("\nMytest1\n");
	ret = ft_printf(" %d ; %i ; %%c ; %x ; %X \n", INT_MIN + 0, INT_MIN + 0, INT_MIN + 0, INT_MIN + 0, INT_MIN + 0);
	printf("Myret= %d\n", ret);

	ft_printf("\nVRAItest1\n");
	ret = printf(" %d ; %i ; %%c ; %x ; %X \n", INT_MIN + 0, INT_MIN + 0, INT_MIN + 0, INT_MIN + 0, INT_MIN + 0);
	printf("Reel = %d\n", ret);

	ft_printf(" %s", "");
	printf(" %s", "");

	ft_printf("%s ", "");
	printf("%s ", "");

	ft_printf(" %s ", "");
	printf(" %s ", "");



	printf("\n--------TEST 1 --------- Neg numbers\n");
	printf("\nVrai = \n");
	printf("c'%c'-s'%s'-p'%p'-d'%d'-i'%i'-u'%u'-x'%x'-X'%X'-Perc'%%'-vide' '-CR'\n'", 'c', test, test, INT_MIN, INT_MIN, INT_MIN, 0x0f4D6c8B, 0x0f4D6c8B);
	printf("\nMy   = \n");
 ft_printf("c'%c'-s'%s'-p'%p'-d'%d'-i'%i'-u'%u'-x'%x'-X'%X'-Perc'%%'-vide' '-CR'\n'", 'c', test, test, INT_MIN, INT_MIN, INT_MIN,  0x0f4D6c8B, 0x0f4D6c8B);
 	printf("\n------ FIN TEST 1 ------\n\n");


	printf("\n--------TEST 2 --------- Pos numbers\n");
	printf("\nVrai = \n");
	printf("c'%c'-s'%s'-p'%p'-d'%d'-i'%i'-u'%u'-x'%x'-X'%X'-Perc'%%'-vide' '-CR'\n'", ' ', test, test, INT_MAX, INT_MAX, INT_MAX, 0xf4D6c8B, -0x0f4D6c8B);
	printf("\nMy   = \n");
 ft_printf("c'%c'-s'%s'-p'%p'-d'%d'-i'%i'-u'%u'-x'%x'-X'%X'-Perc'%%'-vide' '-CR'\n'", ' ', test, test, INT_MAX, INT_MAX, INT_MAX, 0xf4D6c8B, -0x0f4D6c8B);
 	printf("\n------ FIN TEST 2 ------\n");

	printf("\n--------TEST 3 ---------NULL Str\n");
	printf("\nVrai = \n");
	printf("c'%c'-s'%s'-p'%p'-d'%d'-i'%i'-u'%u'-x'%x'-X'%X'-Perc'%%'-vide' '-CR'\n'", 'c', test2, test2, 0, 0, 0, 0x0, 0x0);
	printf("\nMy   = \n");
 ft_printf("c'%c'-s'%s'-p'%p'-d'%d'-i'%i'-u'%u'-x'%x'-X'%X'-Perc'%%'-vide' '-CR'\n'", 'c', test2, test2, 0, 0, 0, 0x0, 0x0);
 	printf("\n------ FIN TEST 3 ------\n");


	return (0); // DEBUG
}
