/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:28:34 by swaegene          #+#    #+#             */
/*   Updated: 2022/01/13 17:09:25 by swaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);
void ft_print_combn(int n);

void print_header(char *c)
{
	printf("######## %s ########\n", c);
}

void print_expect(char *c)
{
	printf("expected result:\n%s\n", c);
}

int main(void)
{
	/* ex00 ft_putchar */
	print_header("ex00 ft_putchar");
	printf("result: \n");
	ft_putchar('a');
	printf("\n");
	print_expect("a");
	printf("\n");

	/* ex01 ft_print_alphabet */
	print_header("ex01 ft_print_alphabet");
	printf("result: \n");
	ft_print_alphabet();
	printf("\n");
	print_expect("abcdefghijklmnopqrstuvwxyz");
	printf("\n");

	/* ex02 ft_print_reverse_alphabet */
	print_header("ex02 ft_print_reverse_alphabet");
	printf("result: \n");
	ft_print_reverse_alphabet();
	printf("\n");
	print_expect("zyxwvutsrqponmlkjihgfedcba");
	printf("\n");

	/* ex03 ft_print_numbers */
	print_header("ex03 ft_print_numbers");
	printf("result: \n");
	ft_print_numbers();
	printf("\n");
	print_expect("0123456789");
	printf("\n");

	/* ex04 ft_is_negative */
	print_header("ex04 ft_is_negative");
	printf("result: \n");
	// test -10
	ft_is_negative(-10);
	printf("\n");
	print_expect("N - -10");
	printf("\n");
	printf("result: \n");
	// test 0
	ft_is_negative(0);
	printf("\n");
	print_expect("P - 0");
	printf("\n");
	// test 10
	ft_is_negative(10);
	printf("\n");
	print_expect("P - 10");
	printf("\n");

	/* ex05 ft_print_comb */
	print_header("ex05 ft_print_comb");
	printf("result: \n");
	ft_print_comb();
	printf("\n");
	print_expect("012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789");
	printf("\n");

	/* ex06 ft_print_comb2 */
	print_header("ex06 ft_print_comb2");
	printf("result: \n");
	ft_print_comb2();
	printf("\n");
	print_expect("00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99");
	printf("\n");

	/* ex07 ft_putnbr */
	print_header("ex07 ft_putnbr");
	printf("result: \n");
	ft_putnbr(INT_MAX);
	printf("\n");
	print_expect("2147483647");
	printf("\n");
	printf("result: \n");
	ft_putnbr(42);
	printf("\n");
	print_expect("42");
	printf("\n");
	printf("result: \n");
	ft_putnbr(INT_MIN);
	printf("\n");
	print_expect("-2147483648");
	printf("\n");

	/* ex08 ft_print_combn */
	ft_print_combn(0);
	ft_print_combn(4);
	ft_print_combn(10);
}
