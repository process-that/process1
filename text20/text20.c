#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.指针就是个变量，用来存放地址，地址唯一标识一块内存空间
//2.指针的大小是固定的4/8个字节
//3,指针是有类型的，指针的类型决定了指针+-整数的步长，指针解引用操作时候的权限
//4.指针的运算
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

//字符指针
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
//	char* p = "abcdef";//"abcdef"是一个字符串常量,相当于把a的地址赋给了P
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

//指针数组 是数组，用来存放指针
//int main()
//{
//	int* parr[4] = { 0 };//存放整型指针的数组-指针数组
//	char* pch[4] = { 0 };//存放字符指针的数组-指针数组
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

//数组指针-是指针
//int main()
//{
	//int *p = NULL;//p是整型指针-指向整型的指针-存放整型的地址
	//char* pc = NULL;//pc是字符指针-指向字符的指针-存放字符的地址
	//数组指针-指向数组的指针-存放数组的地址
	//int arr[10] = { 0 };
	//arr-首元素的地址！
	//&arr[0]-首元素的地址！
	//&arr-数组的地址！
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*p)[10] = &arr;
	//char* arr[5];
	//char* (*pa)[5] = &arr;
	//return 0;
//}
//数组指针的用法
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
//	print1(arr,3,5);//二维数组的首元素怎么找？把arr想象成一维数组
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
//		//arr[i]==*(arr+i)==*(p+i)==p[i]!!!,四种写法完全等价
//	}
//	return 0;
//}
//辨析：
int arr[5];//arr是一个5个元素的整型数组
int* parr1[10];//parr1是一个数组，有10个元素，每个元素的类型是int*,parr1是指针数组
int(*parr2)[10];//parr2是一个指针，指针指向一个10个元素的数组，每个元素的类型是int,parr2是数组指针
int(*parr3[10])[5];//parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int