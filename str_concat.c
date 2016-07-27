/*
 	Author		:Felipe Corona
	Date		:November 5, 2014
	Description	:Lab 6 - String Concatenation
*/

#include<stdio.h>
#include<stdlib.h>

void str_concat(char* str1, char*str2, char* str);

int main()
{
	char* str1;
	char* str2;
	char* str;
	str1 = malloc(sizeof(char)*250);
	str2 = malloc(sizeof(char)*250);
	str = malloc(sizeof(char)*250);

	printf("Please Enter 2 Strings: ");
	scanf("%s", str1);
	scanf("%s", str2);
	printf("\n");

	str_concat(str1, str2, str);
	
	printf("%s\n", str);

	free(str1);
	free(str2);
	free(str);
	return 0;
}

void str_concat(char* str1, char* str2, char* str)
{
	int i = 0;
	int strcounter = 0;
	
	while(*(str1 + i) != '\0')
	{
		*(str + strcounter) = *(str1 + i);
		strcounter++;
		i++;
	}
	i = 0;
	while(*(str2 + i) != '\0')
	{
		*(str + strcounter) = *(str2 + i);
		strcounter++;
		i++;
	}
}
