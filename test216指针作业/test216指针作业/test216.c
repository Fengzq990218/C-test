#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}


//���� �ַ���

//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//abcdef --->fedcba
//	gets(arr);//ʶ��һ��
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//Sn=a+aa+aaa+aaaa+aaaaa

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//ˮ�ɻ���

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1.����i��λ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;	
//		}
//
//
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//
//		//3.�Ƚ�i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//��ӡ ����


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//�����ϰ벿�ֵ�����
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//	    //��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 1 + i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-i-2)+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//����ˮ
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;	
//		empty = empty / 2 + empty % 2;
//	}
//
//	//if(money==0)
//	//total=0;
//	//else
//	//total=2*money-1;
//	printf("%d\n", total);
//
//	return 0;
//
//
//}



//���� �ŵ� ż�� ǰ��


void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		//��ż��
		while ((left<right)&&(arr[left] % 2 == 1))
		{
			left++;
		}
		//������
		while ((left<right)&&(arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	//�������һ��ż�������ұ߿�ʼ��һ�������������ǽ���
	print(arr, sz);

	return 0;
}