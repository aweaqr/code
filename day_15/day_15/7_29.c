#define _CRT_SECURE_NO_DEPRECATE


//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
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
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�


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
//	printf("�������");
//	scanf("%d", &p);
//	n = p / P;
//	int bottle = n + SodaConvert(n);
//	printf("%dƿ\n", bottle);
//	return 0;
//}


//3.ģ��ʵ��strcpy


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
//	printf("�����ַ�����:>%s\n", arr2);
//	system("pause");
//	return 0;
//}

//4.ģ��ʵ��strcat
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