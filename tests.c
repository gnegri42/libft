/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:07:54 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/08 11:07:55 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"


/************************************ PART 1 **********************************/

/*************************************/
/********* TEST FT_MEMSET ************/
/*************************************/
/*
void	ft_test_memset(void)
{
	printf("TEST FT_MEMSET\n");
	if (strcmp(ft_memset("Test1234567087hevfoh", '$', 7), memset("Test1234567087hevfoh", '$', 7)) == 0)
		printf("TEST OK\n");
	else
		printf("FAUX\n");
}
*/

/*************************************/
/********* TEST FT_STRLEN ************/
/*************************************/
void	ft_test_strlen(void)
{
	printf("******TEST FT_STRLEN*****\n");
	if (ft_strlen("blablabla") == strlen("blablabla") &&
		ft_strlen("test1234") == strlen("test1234") &&
		ft_strlen("") == strlen(""))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/********* TEST FT_STRDUP ************/
/*************************************/
void	ft_test_strdup(void)
{
	printf("******TEST FT_STRDUP*****\n");
	if (strcmp(ft_strdup("blablabla"), strdup("blablabla")) == 0 &&
		strcmp(ft_strdup("test1234"), strdup("test1234")) == 0 &&
		strcmp(ft_strdup(""), strdup("")) == 0)
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/********* TEST FT_STRCPY ************/
/*************************************/
/*
void	ft_test_strcpy(void)
{
	char *test;

	test = "hewel";
	printf("******TEST FT_STRCPY*****\n");
	if (strcmp(ft_strcpy(test, "test1234"), strcpy(test, "test1234")) == 0)
		printf("OK\n");
	else
		printf("FAUX\n");
}*/

/*************************************/
/********* TEST FT_STRCHR ************/
/*************************************/
void	ft_test_strchr(void)
{
	printf("******TEST FT_STRCHR*****\n");
	/*printf("%s\n", ft_strchr("Je suis un poisson.", 'p'));
	printf("%s\n", strchr("Je suis un poisson.", 'p'));
	printf("%s\n", ft_strchr("Je suis un poisson.", 'z'));
	printf("%s\n", strchr("Je suis un poisson.", 'z'));*/
	if (ft_strchr("Je suis un poisson.", 'p') == strchr("Je suis un poisson.", 'p') &&
		ft_strchr("Je suis un poisson.", '0') == strchr("Je suis un poisson.", '0') &&
		ft_strchr("Je suis un poisson.", 'J') == strchr("Je suis un poisson.", 'J') &&
		ft_strchr("Je suis un poisson.", 'z') == strchr("Je suis un poisson.", 'z'))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/********* TEST FT_STRRCHR ************/
/*************************************/
void	ft_test_strrchr(void)
{
	printf("******TEST FT_STRRCHR*****\n");
	/*printf("%s\n", ft_strrchr("Je suis un poisson.", 'p'));
	printf("%s\n", strrchr("Je suis un poisson.", 'p'));
	printf("%s\n", ft_strrchr("Je suis un poisson.", 'z'));
	printf("%s\n", strrchr("Je suis un poisson.", 'z'));
	printf("%s\n", ft_strrchr("Je suis un poisson.", 's'));
	printf("%s\n", strrchr("Je suis un poisson.", 's'));*/
	if (ft_strrchr("Je suis un poisson.", 'p') == strrchr("Je suis un poisson.", 'p') &&
		ft_strrchr("Je suis un poisson.", '0') == strrchr("Je suis un poisson.", '0') &&
		ft_strrchr("Je suis un poisson.", 'J') == strrchr("Je suis un poisson.", 'J') &&
		ft_strrchr("Je suis un poisson.", 'z') == strrchr("Je suis un poisson.", 'z'))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/********* TEST FT_STRSTR ************/
/*************************************/
void	ft_test_strstr(void)
{
	printf("******TEST FT_STRSTR*****\n");
	if (ft_strstr("Ceci n'est pas une pipe.", "une") == strstr("Ceci n'est pas une pipe.", "une") &&
		ft_strstr("Ceci n'est pas une pipe.", "C") == strstr("Ceci n'est pas une pipe.", "C") &&
		ft_strstr("Ceci n'est pas une pipe.", ".") == strstr("Ceci n'est pas une pipe.", ".") &&
		ft_strstr("Ceci n'est pas une pipe.", "") == strstr("Ceci n'est pas une pipe.", "") &&
		ft_strstr("Ceci n'est pas une pipe.", "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA") == strstr("Ceci n'est pas une pipe.", "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA") &&
		ft_strstr("J'ai fait pipapipapou en LV2", "pipapou") == strstr("J'ai fait pipapipapou en LV2", "pipapou"))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/********* TEST FT_STRCMP ************/
/*************************************/
void	ft_test_strcmp(void)
{
	printf("******TEST FT_STRCMP*****\n");
	if (ft_strcmp("blablabla", "blablabla") == strcmp("blablabla", "blablabla") &&
		ft_strcmp("", "") == strcmp("", "") &&
		ft_strcmp("123", "1") == strcmp("123", "1"))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/********* TEST FT_STRNCMP ************/
/*************************************/
void	ft_test_strncmp(void)
{
	printf("******TEST FT_STRNCMP*****\n");
	if (ft_strncmp("blabla", "blablabla", 5) == strncmp("blabla", "blablabla", 5) &&
		ft_strncmp("abc", "abcde", 3) == strncmp("abc", "abcde", 3) &&
		ft_strncmp("abce", "abcde", 5) == strncmp("abce", "abcde", 5) &&
		ft_strncmp("", "", 3) == strncmp("", "", 3) &&
		ft_strncmp("r", "3", 0) == strncmp("r", "3", 0) &&
		ft_strncmp("123", "1", 2) == strncmp("123", "1", 2))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/*********** TEST FT_ATOI ************/
/*************************************/

void	ft_test_atoi(void)
{
	printf("******TEST FT_ATOI*****\n");
	if (ft_atoi("+123") == atoi("+123") &&
		ft_atoi("-2598") == atoi("-2598") &&
		ft_atoi("    165ew1654") == atoi("    165ew1654") &&
		ft_atoi("-2147483648") == atoi("-2147483648") &&
		ft_atoi("++5823") == atoi("++5823") &&
		ft_atoi("") == atoi("") &&
		ft_atoi("  \t\n  \r\r\v\f-899") == atoi("  \t\n  \r\r\v\f-899") &&
		ft_atoi("000000000000000110") == atoi("000000000000000110") &&
		ft_atoi("123qwe123") == atoi("123qwe123"))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/*********** TEST FT_ISALPHA ************/
/*************************************/

void	ft_test_isalpha(void)
{
	printf("******TEST FT_ISALPHA*****\n");
	if (ft_isalpha('a') == isalpha('a') &&
		ft_isalpha('2') == isalpha('2') &&
		ft_isalpha(9999) == isalpha(9999) &&
		ft_isalpha('Z') == isalpha('Z') &&
		ft_isalpha('\n') == isalpha('\n') &&
		ft_isalpha(' ') == isalpha(' '))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/*********** TEST FT_ISDIGIT ************/
/*************************************/

void	ft_test_isdigit(void)
{
	printf("******TEST FT_ISDIGIT*****\n");
	if (ft_isdigit('a') == isdigit('a') &&
		ft_isdigit('2') == isdigit('2') &&
		ft_isdigit(9999) == isdigit(9999) &&
		ft_isdigit('Z') == isdigit('Z') &&
		ft_isdigit('\n') == isdigit('\n') &&
		ft_isdigit(' ') == isdigit(' '))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/*********** TEST FT_ISALNUM ************/
/*************************************/

void	ft_test_isalnum(void)
{
	printf("******TEST FT_ISALNUM*****\n");
	if (ft_isalnum('a') == isalnum('a') &&
		ft_isalnum('2') == isalnum('2') &&
		ft_isalnum(9999) == isalnum(9999) &&
		ft_isalnum('Z') == isalnum('Z') &&
		ft_isalnum('\n') == isalnum('\n') &&
		ft_isalnum(' ') == isalnum(' '))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/*************************************/
/*********** TEST FT_ISASCII ************/
/*************************************/

void	ft_test_isascii(void)
{
	printf("******TEST FT_ISASCII*****\n");
	if (ft_isascii('a') == isascii('a') &&
		ft_isascii('2') == isascii('2') &&
		ft_isascii(9999) == isascii(9999) &&
		ft_isascii('a' + 0x100) == isascii('a' + 0x100) &&
		ft_isascii('\n') == isascii('\n') &&
		ft_isascii('%') == isascii('%') &&
		ft_isascii(' ') == isascii(' '))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/****************************************/
/*********** TEST FT_ISPRINT ************/
/****************************************/

void	ft_test_isprint(void)
{
	printf("******TEST FT_ISPRINT*****\n");
	if (ft_isprint('a') == isprint('a') &&
		ft_isprint('2') == isprint('2') &&
		ft_isprint(9999) == isprint(9999) &&
		ft_isprint('a' + 0x100) == isprint('a' + 0x100) &&
		ft_isprint('\n') == isprint('\n') &&
		ft_isprint('%') == isprint('%') &&
		ft_isprint(' ') == isprint(' '))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/****************************************/
/*********** TEST FT_TOUPPER ************/
/****************************************/

void	ft_test_toupper(void)
{
	printf("******TEST FT_TOUPPER*****\n");
	if (ft_toupper('a') == toupper('a') &&
		ft_toupper('2') == toupper('2') &&
		ft_toupper(9999) == toupper(9999) &&
		ft_toupper('a' + 0x100) == toupper('a' + 0x100) &&
		ft_toupper('\n') == toupper('\n') &&
		ft_toupper('%') == toupper('%') &&
		ft_toupper('A') == toupper('A') &&
		ft_toupper('Z') == toupper('Z') &&
		ft_toupper(' ') == toupper(' '))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/****************************************/
/*********** TEST FT_TOLOWER ************/
/****************************************/

void	ft_test_tolower(void)
{
	printf("******TEST FT_TOLOWER*****\n");
	if (ft_tolower('a') == tolower('a') &&
		ft_tolower('2') == tolower('2') &&
		ft_tolower(9999) == tolower(9999) &&
		ft_tolower('a' + 0x100) == tolower('a' + 0x100) &&
		ft_tolower('\n') == tolower('\n') &&
		ft_tolower('%') == tolower('%') &&
		ft_tolower('A') == tolower('A') &&
		ft_tolower('B') == tolower('B') &&
		ft_tolower(' ') == tolower(' '))
		printf("OK\n");
	else
		printf("FAUX\n");
}

/************************************ PART 2 **********************************/

/*************************************/
/********* TEST FT_PUTCHAR ************/
/*************************************/
void	ft_test_putchar(void)
{
	printf("******TEST FT_PUTCHAR*****\n");
	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	ft_putchar('d');
	printf("\n");
}

/*************************************/
/********* TEST FT_PUTSTR ************/
/*************************************/
void	ft_test_putstr(void)
{
	printf("******TEST FT_PUTSTR*****\n");
	ft_putstr("blablabla");
	ft_putstr("");
	ft_putstr("1234");
	ft_putstr("ohohoihowehoh294jn");
	printf("\n");
}

/*************************************/
/********* TEST FT_PUTENDL ************/
/*************************************/
void	ft_test_putendl(void)
{
	printf("******TEST FT_PUTENDL*****\n");
	ft_putendl("blablabla");
	ft_putendl("");
	ft_putendl("1234");
	ft_putendl("ohohoihowehoh294jn");
}

/*************************************/
/********* TEST FT_PUTNBR ************/
/*************************************/
void	ft_test_putnbr(void)
{
	printf("******TEST FT_PUTNBR*****\n");
	ft_putnbr(5);
	ft_putnbr(10);
	ft_putnbr(890);
	ft_putnbr(-1565);
	ft_putnbr(-2147483648);
	printf("\n");
}

int		main(void)
{
	/**** PART 1 ***/
//	ft_test_memset();
	ft_test_strlen();
	ft_test_strdup();
//	ft_test_strcpy();
	ft_test_strchr();
	ft_test_strrchr();
	ft_test_strstr();
	ft_test_strcmp();
	ft_test_strncmp();
	ft_test_atoi();
	ft_test_isalpha();
	ft_test_isdigit();
	ft_test_isalnum();
	ft_test_isascii();
	ft_test_isprint();
	ft_test_toupper();
	ft_test_tolower();

	/**** PART 2 ***/
	ft_test_putchar();
	ft_test_putstr();
	ft_test_putendl();
	ft_test_putnbr();
	return (0);
}
