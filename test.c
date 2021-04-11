#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>

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
	char *char_for_malloc;
	s2[0] = '1';
	s2[1] = '2';
	s2[2] = 0;
	char s3[4] = "123";
	char s4[2] = "1";
	printf("n = %d == ", ft_strcmp("123", s2));
	printf("n = %d\n", strcmp("123", s2));
	printf("n = %d == ", ft_strcmp("13", s3));
	printf("n = %d\n", strcmp("13", "123"));
	printf("n = %d == ", ft_strcmp("113",  s3));
	printf("n = %d\n", strcmp("113", "123"));
	printf("n = %d == ", ft_strcmp("1",  s3));
	printf("n = %d\n", strcmp("1",  s3));
	printf("n = %d == ", ft_strcmp("113", s4));
	printf("n = %d\n", strcmp("113", s4));

	printf(" == %zd\n", ft_write(-1, "qwe", 3));
	printf("errno: %d\n", errno);
	printf(" == %zd\n",write(-1, "qwe", 3));
	printf("errno: %d\n", errno);

	printf(" == %s\n",char_for_malloc =  ft_strdup("qwe"));
	free(char_for_malloc);
	printf(" == %s\n",char_for_malloc = strdup("qwe"));
	free(char_for_malloc);
	return (0);


}