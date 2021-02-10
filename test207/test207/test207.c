#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////二进制 1 的个数
//
////int count_bit_one(unsigned int n)
////{
////	int count = 0;
////	int i = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if ((n >> i) & 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
////
////int main()
////{
////	int a = 0;
////	scanf("%d", &a);
////	int count = count_bit_one(a);
////	printf("%d\n", count);
////	return 0;
////
////}
////int count_bit_one(int n)
////{
////	int count = 0;
////	while (n)
////	{
////		n = n&(n - 1);
////		count++;
////	}
////	return count;
////}
////
////int main()
////{
////	int a = 0;
////	scanf("%d", &a);
////	int count = count_bit_one(a);
////	printf("%d\n", count);
////	return 0;
////
////}
////int get_diff_bit(int x, int y)
////{
////	int tmp = x^y;
////	int count = 0;
////	while (tmp)
////	{
////		tmp = tmp&(tmp - 1);
////		count++;
////	}
////	return count;
////}
////int main()
////{
////	int m = 0;
////	int n = 0;
////	scanf("%d%d", &m, &n);
////	int count = get_diff_bit(m, n);
////	printf("count = %d\n", count);
////	return 0;
////}
//
////打印二进制 奇数和偶数位

//void print(int m)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);//奇数位
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	print(arr, sz);
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

#include<string.h>

//int my_strlen(char* str)
//{
//	//first
//	/*int count = 0;
//	while(*str != '\0')
//    {
//		count++;
//		str++;
//	}
//	return count;*/
//
//	//secend
//	//char* star = str;
//	//char* end = str;
//	//while (*end != '\0')
//	//{
//	//	end++;
//	//}
//	//return end - star;
//
//	//递归
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return  0;
//	
//}
//
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left <right)
//	{
//		int tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int my_strlen(char arr[])
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	if (my_strlen(arr + 1) >= 2)
//	{
//		arr[len - 1] = '\0';
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	int i = 0;
//	for (i = 0; i < my_strlen(arr); i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int DigiSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigiSum(num / 10) + num % 10;
//	}
//	else
//		return num;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigiSum(num);
//	printf("%d\n", ret); 
//	return 0;
//}]


//double Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / Pow(n, -k));
//	}
//	else if (k == 0)
//		return 1;
//	else
//		return n*Pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 2;
//	int k = -3;
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

