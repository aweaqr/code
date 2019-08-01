#define _CRT_SECURE_NO_DEPRECATE

//1.strcpy的实现
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* str1,const char* str2)
//{
//	char* str = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1++=*str2++ )
//	{
//		;
//	}
//	return str;
//}
//int main()
//{
//	char str1[20] = "abc";
//	char str2[] = "def";
//	int ret = my_strcpy(str1, str2);
//	printf("%s", ret);
//	return 0;
//}

//2.实现strcat

//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* str = str1;
//	while (*str1 != '\0')
//	{
//		*str1++;
//	}
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		*str1++;
//		*str2++;
//	}
//	return str;
//}
//int main()
//{
//	char str1[20] = "abc";
//	char str2[] = "des";
//	int ret = my_strcat(str1, str2);
//	printf("%s", ret);
//	return 0;
//}
////3.实现strstr
//
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* start = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//查找
//	if (*str2 == '\0')
//		return (char*)str1;
//
//	while (*start)
//	{
//		s2 = str2;
//		s1 = start;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return(char*)start;
//		}
//		start++;
//	}
//	return NULL;
//}

//int main()
//{
//	char str1[20] = "abbbcd";
//	char str2[] = "bbc";
//	char* ret = my_strstr(str1, str2);
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
////4.实现strchr
//#include<stdio.h>
//#include<assert.h>
//char* my_strchr(char* str1, char str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* stop = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	if (str2 == '\0')
//		return (char*) str1;
//	while (*stop)
//	{
//		s2 = str2;
//		s1 = stop;
//
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			*s1++;
//			*s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)stop;
//		}
//		stop++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1 = "hello word";
//	char str2 = '0';
//	char ret= my_strchr("hello word", 'o');
//	printf("%s", ret);
//	return 0;
//}
////5.实现strcmp
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char* str1 = "abc";
//	char* str2 = "abcdef";
//
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	return 0;
//}
////6.实现memcpy

#include<stdio.h>

void *my_memcpy(void *dest, void *src, int num)
{
	if ((dest == NULL) || (src == NULL))
	{
		printf("parameter error!\n");
		return 0;
	}
	char *pdest;
	char *psrc;
	pdest = dest;
	psrc = src;
	while (num--)
	{
		*pdest = *psrc;
		*pdest++;
		*psrc++;
	}
	return dest;
}
int main(int argc, char *argv[])
{
	int pdes[] = { 0 };
	char psrc[] = "abcdef";
	my_memcpy(pdes, psrc, sizeof(psrc));
	printf("src : %s\n", (char *)psrc);
}

////7.实现memmove
