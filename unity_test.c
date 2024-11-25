/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unity_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:24:22 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/16 17:27:12 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unity/src/unity.h"
#include "../ft_printf/libft.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

void	test_against_og_1(void)
{
	int		og;
	int		rep;

	printf("\n\nPRINTF: \n");
	og = printf("12%c45", 'U');
	printf("\nFT_PRINTF: \n");
	rep = ft_printf("12%c45", 'U');
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_against_og_2(void)
{
	int		og;
	int		rep;

	printf("\n\nPRINTF: \n");
	og = printf("Hello %s !", "world");
	printf("\nFT_PRINTF: \n");
	rep = ft_printf("Hello %s !", "world");
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_against_og_3(void)
{
	int		og;
	int		rep;

	printf("\n\nPRINTF: \n");
	og = printf("Pointer %p !", &og);
	printf("\nFT_PRINTF: \n");
	rep = ft_printf("Pointer %p !", &og);
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_ft_printf(void)
{
	test_against_og_1();
	test_against_og_2();
	test_against_og_3();
}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_printf);
	return (UNITY_END());
}
