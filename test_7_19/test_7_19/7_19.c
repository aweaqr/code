#define _CRT_SECURE_NO_DEPRECATE


斐波那契数字递归法
#include<stdio.h>
#include<stdlib.h>
int count = 0;
int fib(int n)
{
	if (n == 3)
	{
		count ++;
	}
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
	}
int main()
{
	int x = 0;
	scanf("%d", &x);
	printf("%d", fib(x));
	system("pause");
	return 0;
}

斐波那契数字非递归法
#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	int res;
	int pre_res;
	int next_old_res;
	res = pre_res = 1;
	while (n > 2)
	{
		n -= 1;
		next_old_res = pre_res;
		pre_res = res;
		res = pre_res + next_old_res;
	}
	return res;
}
int main()
{
	int x;
	scanf("%d", &x);
	printf("%d", fib(x));
	system("pause");
	return 0;
}


编写一个函数实现n^k，使用递归实现 
#include<stdio.h>
#include<stdlib.h>
int my_pow(int n, int k)
{
	if (k ==1)
		return n;
	else if (k == 0)
		return 1;
	else
		return n * my_pow(n, k-1);
}
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d", my_pow(x, y));
	system("pause");
	return 0;
}


写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include<stdio.h>
#include<stdlib.h>
int DigitSum(size_t n)
{
	int sum = 0;
	int m = 0;
	if (n != 0){
		m = n % 10;
		n = n / 10;
			sum = DigitSum(n) + m;
	}
	return sum;
}
int main()
{
	size_t x  = 0;
	int b = 0;
	scanf("%d", &x);
	b = DigitSum(x);
	printf("%d", b);
	system("pause");
	return 0;
}

 编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *rev_str(char *p[40])
{
	int n = 0;
	char temp;
	char *q;
	q = p;

	while (*p != 0)
	{
		n++;
		p++;
	}
	if (n > 1)
	{
		temp = q[0];
		q[0] = q[n - 1];
		q[n - 1] = '\0';
		rev_str(q + 1);
		q[n - 1] = temp;
	}
	return q;
}
int main()
{
	char str1[40];
	scanf("%s", &str1);
	printf("%s", rev_str(str1));
	system("pause");
	return 0;
}



递归和非递归分别实现strlen

#include<stdio.h>
#include<stdlib.h>
int my_strlen(char *p)
{ 
	int count=0;
	if (*p == '\0')
	{
		return 0;
	}
	else
	{

     count= 1+my_strlen(p + 1);
		
	}
	return count;
}
int my_strlen1(char *p1)
{
	int count = 0;
	while (*p1!='\0'){
			p1++;
			count++;
	}
	return count;
}
int main()
{
	char str[]="0";
	scanf("%s", str);
	printf("%d\n", my_strlen(str));
	printf("%d", my_strlen1(str));
	system("pause");
	return 0;
}
  //递归与非递归实现n的阶乘
#include<stdio.h>
#include<stdlib.h>
int fact(int m)
{
	if (m == 1)
		return 1;
	else 
	return	 m*fact(m - 1);
	 
}
int fact1(int m1)
{
	int a = 1;
	int i = 0;
	for (i = 1; i <= m1; i++)
	{
		a *= i;
	}
	return a;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fact(n));
	printf("%d", fact1(n));
	system("pause");
	return 0;
}




