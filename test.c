#include "libasm.h"
#include <stdio.h>
#include <string.h>

int main() {
	char s[4];
	printf("n = %zu == ", ft_strlen("123"));
	printf("n = %zu\n", strlen("123"));
	printf("n = %zu == ", ft_strlen(""));
	printf("n = %zu\n", strlen(""));
	printf("n = %zu == ", ft_strlen("1234"));
	printf("n = %zu\n", strlen("1234"));
	printf("n = %zu == ", ft_strlen("1"));
	printf("n = %zu\n", strlen("1"));

	printf("n = %s == ", ft_strcpy(s, "123"));
	printf("n = %s\n", strcpy(s, "123"));
	printf("n = %s == ", ft_strcpy(s, ""));
	printf("n = %s\n", strcpy(s, ""));

	char s2[3];
	s2[0] = '1';
	s2[1] = '2';
	s2[2] = 0;
	printf("n = %d == ", ft_strcmp("123", s2));
	printf("n = %d\n", strcmp("123", s2));
	printf("n = %d == ", ft_strcmp("13", "123"));
	printf("n = %d\n", strcmp("13", "123"));
	printf("n = %d == ", ft_strcmp("113", "123"));
	printf("n = %d\n", strcmp("113", "123"));
	printf("n = %d == ", ft_strcmp("1", "123"));
	printf("n = %d\n", strcmp("1", "123"));
	printf("n = %d == ", ft_strcmp("113", "1"));
	printf("n = %d\n", strcmp("113", "1"));

	printf(" == %zd\n", ft_write(-1, "qwe", 3));
	printf(" == %zd\n",write(-1, "qwe", 3));
	return (0);
}