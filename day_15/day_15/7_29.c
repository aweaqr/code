#define _CRT_SECURE_NO_DEPRECATE


//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//#include<stdio.h>
//#include<stdlib.h>
//int find(char arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//			}
//		}
//
//}
//int main()
//{
//	int arr[6] = { 2, 2, 4, 4, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find(arr, sz);
//	system("pause");
//	return 0;
//}
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。


//#include <stdio.h>
//#define P 1 
//#define N 2 
//
//int SodaConvert(int x)
//{
//	int ret = x / N;
//	int empty = x / N + x % N;
//	if (empty > 1)
//		return ret + SodaConvert(empty);
//	else
//		return ret;
//}
//int main()
//{
//	int p = 0;
//	int n = 0;
//	printf("请输入金额：");
//	scanf("%d", &p);
//	n = p / P;
//	int bottle = n + SodaConvert(n);
//	printf("%d瓶\n", bottle);
//	return 0;
//}


//3.模拟实现strcpy


//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void my_strcpy(char *arr2, const char *arr1)
//{
//	assert(arr2);
//	assert(arr1);
//	char *old = arr2;
//	while (*arr2 = *arr1)
//	{
//		arr2++;
//		arr1++;
//	}
//	return old;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[64];
//	my_strcpy(arr2, arr1);
//	printf("复制字符串是:>%s\n", arr2);
//	system("pause");
//	return 0;
//}

//4.模拟实现strcat
#include<stdio.h>
#include<stdlib.h>
char* my_strcat(char* str1, const char* str2)
{
	char* ret = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}
int main()
{
	char str1[80]= "abc" ;
	char str2 [4]= "def";
	char* a=my_strcat(str1, str2);
	printf("%s", a);
	system("pause");
	return 0;
}