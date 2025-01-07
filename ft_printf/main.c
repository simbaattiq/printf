// /* ************************************************************************** */
// /*                                                                            */
/*                                                        :::      ::::::::   */
// /*   main.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/11/26 16:02:52 by mel-atti          #+#    #+#             */
// /*   Updated: 2023/11/26 16:04:18 by mel-atti         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
	// int n = -1;
	// int n2 = 0;
	// unsigned int value = 4147483649;
	// char *str = "testing POINTER string 2 success";
	// char str2[] = "testing ARRAY string 3 success";
	// void *ptr = &n;
	// void *ptr2;
	// char a = 'a';
	// char b = 66;
	// char *str3 = str++;
	// char *ptr3 = ptr++;
	// char *ptr4 = ptr2++;
	// char *str4 = NULL;
	// char *str5 = str4++;
	// void *ptr6 = NULL;
	// int cnt1 = 0;
	// int cnt2 = 0;
	// int cnt3 = 0;
	// int cnt4 = 0;
	// int cnt5 = 0;
	// int cnt6 = 0;
	// int cnt7 = 0;

	// printf("..................... || TEST 1 integer  || .......................\n\n\n");

	// cnt1 = ft_printf("MINE     %d %d %d %d %d %i %i %i %i", INT_MAX, INT_MIN, UINT_MAX, value, 0, n, n2, value, 0);
	// printf("\n letter count is %d\n", cnt1);
	// cnt1 = printf("TEIR     %d %d %d %d %d %i %i %i %i", INT_MAX, INT_MIN, UINT_MAX, value, 0, n, n2, value, 0);
	// printf("\n letter count is %d\n", cnt1);
	// printf("\n\n\n");

	// printf("..................... || TEST 2 strings  || .......................\n\n\n");

	// cnt2 = ft_printf("MINE   %s %s %s %s", "testing string literal", str, str2, NULL);
	// printf("\n letter count is %d\n", cnt2);
	// cnt2 = printf("TEIR   %s %s %s %s", "testing string literal", str, str2, NULL);
	// printf("\n letter count is %d\n", cnt2);
	// printf("\n\n\n");

	// printf("..................... || TEST 3 unsigned  || .......................\n\n\n");
	// cnt3 = ft_printf("MINE   %u %u %u %u %u", n, n2, value, 0, UINT_MAX);
	// printf("\n letter count is %d\n", cnt3);
	// cnt3 = printf("TEIR   %u %u %u %u %u", n, n2, value, 0, UINT_MAX);
	// printf("\n letter count is %d\n", cnt3);
	// printf("\n\n\n");

	// printf("..................... || TEST 4 hex  || .......................\n\n\n");
	// cnt4 = ft_printf("MINE   %x %x %x %x", n, n2, value, 0);
	// printf("\n letter count is %d\n", cnt4);
	// printf("TEIR   %x %x %x %x", n, n2, value, 0);
	// printf("\n letter count is %d\n", cnt4);
	// printf("\n\n\n");

	// printf("..................... || TEST 5 HEX  || .......................\n\n\n");
	// cnt5 = ft_printf("MINE   %X %X %X %X", n, n2, value, 0);
	// printf("\n letter count is %d\n", cnt5);
	// cnt5 = printf("TEIR   %X %X %X %X", n, n2, value, 0);
	// printf("\n letter count is %d\n", cnt5);
	// printf("\n\n\n");

	// printf("..................... || TEST 6 pointer  || .......................\n\n\n");
	// cnt6 = ft_printf("MINE   %p %p %p %p %p %p %p %p %p", ptr6, n2, str, str3, str2, ptr3, ptr4, str4, str5);
	// printf("\n letter count is %d\n", cnt6);
	// cnt6 = printf("TEIR   %p %p %p %p %p %p %p %p %p", ptr6, n2, str, str3, str2, ptr3, ptr4, str4, str5);
	// printf("\n letter count is %d\n", cnt6);
	// printf("\n\n\n");

	// printf("..................... || TEST 7 HEX  || .......................\n\n\n");
	// cnt7 = ft_printf("MINE   %c %c %c %c", a, b, 'M', 85);
	// printf("\n letter count is %d\n", cnt7);
	// cnt7 = printf("TEIR   %c %c %c %c", a, b, 'M', 85);
	// printf("\n letter count is %d\n", cnt7);
	// printf("\n\n\n");

	// printf("..................... || TEST 8 unused specifiers  || .......................\n\n\n");
	// ft_printf("MINE  %w %y %k \n");
	// printf("theirs  %w %y %k \n");

	// int chc = ft_printf("jjjj\n");
	// printf("\n letter count is %d\n", chc);
	// int chc2 = printf("jjjj\n");
	// printf("\n letter count is %d\n", chc2);

printf("..................... ||  TEST 9  || .......................\n\n\n");

	// ft_printf( "%s");
	// printf("\n");
	// printf("%s");
	// printf("\n");

	// ft_printf("%%%");
	// printf("\n");å
	// printf("%%%");
	// printf("\n");

	// ft_printf("");
	// printf("\n");
	// printf("");
	// printf("\n");

	printf("%d\n", printf(""));
	printf("%d\n", ft_printf(""));

 	return 0;
}

