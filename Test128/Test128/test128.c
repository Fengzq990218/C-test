#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
 
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

#include<math.h>
//is_prime(int n)
//{
//	//素数返回1，不是返回0
//	int a = 0;
//	for (a = 2; a <= sqrt(n); a++)
//	{
//		if (n%a == 0)
//		{
//			return 0;
//		/*	break;*/
//		}
//		
//	}/*if (a > sqrt(n))*/
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}printf("\n");
//	return 0;
//}
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//
//	int right = sz-1;
//	
//	while (right >=left)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找；
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	int k = 7;
//	//找到返回下标，找不到返回-1；
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是： %d\n", ret);
//	}
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}
//
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

int main()
{
	printf("%d",printf("%d", printf("%d", printf("%d", 43))));
	return 0;
}