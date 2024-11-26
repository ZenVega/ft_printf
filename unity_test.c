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

	printf("\n\nTEST_01 \n");
	printf("PRINTF: \n");
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

	printf("\n\nTEST_02 \n");
	printf("PRINTF: \n");
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

	printf("\n\nTEST_03 \n");
	printf("PRINTF: \n");
	og = printf("Pointer %p !%p", &og, &rep);
	printf("\nFT_PRINTF: \n");
	rep = ft_printf("Pointer %p !%p", &og, &rep);
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_against_og_4(void)
{
	int		og;
	int		rep;

	printf("\n\nTEST_04 \n");
	printf("PRINTF: \n");
	og = printf("Decimal %d ! %i", 1, -1456);
	printf("\nFT_PRINTF: \n");
	rep = ft_printf("Decimal %d ! %i", 1, -1456);
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_against_og_5(void)
{
	int		og;
	int		rep;

	printf("\n\nTEST_05 \n");
	printf("PRINTF: \n");
	og = printf("One Hundred Percent %% ! %%");
	printf("\nFT_PRINTF: \n");
	rep = ft_printf("One Hundred Percent %% ! %%");
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_against_og_6(void)
{
	int		og;
	int		rep;

	printf("\n\nTEST_06 \n");
	printf("PRINTF: \n");
	og = printf("Unsigned Int %u ! %u", 42u, 4294967294u);
	printf("\nFT_PRINTF: \n");
	rep = ft_printf("Unsigned Int %u ! %u", 42u, 4294967294u);
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_against_og_7(void)
{
	int		og;
	int		rep;

	printf("\n\nTEST_07 \n");
	printf("PRINTF: \n");
	og = printf("Unsigned Int %x ! %x", 42, 429496724);
	printf("\nFT_PRINTF: \n");
	rep = ft_printf("Unsigned Int %x ! %x", 42, 429496724);
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_against_og_8(void)
{
	int		og;
	int		rep;

	printf("\n\nTEST_08 \n");
	printf("PRINTF: \n");
	og = printf("Unsigned Int %X ! %X", 42, 49678924);
	printf("\nFT_PRINTF: \n");
	rep = ft_printf("Unsigned Int %X ! %X", 42, 49678924);
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_against_og_9(void)
{
	int		og;
	int		rep;

	printf("\n\nTEST_08 \n");
	printf("PRINTF: \n");
	og = printf(NULL, 42, 49678924);
	printf("\nFT_PRINTF: \n");
	rep = ft_printf(NULL, 42, 49678924);
	printf("\n\n");
	TEST_ASSERT_EQUAL_INT(og, rep);
	printf("_______________________________________");
}

void	test_ft_printf(void)
{
	test_against_og_1();
	test_against_og_2();
	test_against_og_3();
	test_against_og_4();
	test_against_og_5();
	test_against_og_6();
	test_against_og_7();
	test_against_og_8();
	test_against_og_9();
}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_printf);
	return (UNITY_END());
}
