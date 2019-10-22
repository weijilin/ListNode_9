#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int count_one_bits(unsigned int n)
//{
//	int count=0;
//	while (n)
//	{
//		if(n % 2==1)
//		   count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int n;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int count_diff(int a, int b)
//{
//	int tep=a^b;
//	return count_one_bit(tep);
//}
//int main()
//{
//	int a, b;
//	int ret = 0;
//	scanf("%d %d", &a, &b);
//	ret = count_diff(a, b);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//void shuchu(int n)
//{
//	while (n)
//	{
//		int i = 0;
//		i = n % 10;
//		printf("%d ", i);
//		n = n / 10;
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	shuchu(a);	
//	system("pause");
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <=5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1
//							&& (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1
//							&& (e == 4) + (a == 1) == 1)
//						{
//							if (a*b*c*d*e == 120)
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char i=0;
//	for (i = 'a'; i <= 'd'; i++)
//	{
//		if ((i != 'a') + (i == 'c') + (i == 'd') + (i != 'd') == 3)
//			printf("%c\n", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int b = 0;
//	for (i = 0; i <10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i>1 && j>0)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}		
//	for (i = 0; i < 10; i++)
//	{
//		for (b = i; b < 10; b++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}