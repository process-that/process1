#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ�
//2.ָ��Ĵ�С�ǹ̶���4/8���ֽ�
//3,ָ���������͵ģ�ָ������;�����ָ��+-�����Ĳ�����ָ������ò���ʱ���Ȩ��
//4.ָ�������
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int  arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//�ַ�ָ��
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ���ַ�������,�൱�ڰ�a�ĵ�ַ������P
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;//haha
//}

//ָ������ �����飬�������ָ��
//int main()
//{
//	int* parr[4] = { 0 };//�������ָ�������-ָ������
//	char* pch[4] = { 0 };//����ַ�ָ�������-ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,2,3,4,5 };
//	int arr2[] = {2,3,4,5,6 };
//	int arr3[] = {3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��-��ָ��
//int main()
//{
	//int *p = NULL;//p������ָ��-ָ�����͵�ָ��-������͵ĵ�ַ
	//char* pc = NULL;//pc���ַ�ָ��-ָ���ַ���ָ��-����ַ��ĵ�ַ
	//����ָ��-ָ�������ָ��-�������ĵ�ַ
	//int arr[10] = { 0 };
	//arr-��Ԫ�صĵ�ַ��
	//&arr[0]-��Ԫ�صĵ�ַ��
	//&arr-����ĵ�ַ��
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*p)[10] = &arr;
	//char* arr[5];
	//char* (*pa)[5] = &arr;
	//return 0;
//}
//����ָ����÷�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}
//print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = -0;i < x;i++)
//	{
//		for (j = 0;j < y;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0;i < x;i++)
//	{
//		int j = 0;
//		for(j=0;j<y;j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3,5);//��ά�������Ԫ����ô�ң���arr�����һά����
//	print2(arr,3,5);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ",*(p+i));
//		printf("%d ",*(arr+i));
//		printf("%d ",arr[i]);
//		//arr[i]==*(arr+i)==*(p+i)==p[i]!!!,����д����ȫ�ȼ�
//	}
//	return 0;
//}
//������
int arr[5];//arr��һ��5��Ԫ�ص���������
int* parr1[10];//parr1��һ�����飬��10��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
int(*parr2)[10];//parr2��һ��ָ�룬ָ��ָ��һ��10��Ԫ�ص����飬ÿ��Ԫ�ص�������int,parr2������ָ��
int(*parr3[10])[5];//parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int