#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数指针案例
//计算器的实现
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.add   2.sub***\n");
//	printf("***3.mul   4.div***\n");
//	printf("***   0.exit    ***\n");
//	printf("*******************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择: >" );
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", Add(x, y));
//			break;
//			printf("%d\n",Add(x,y));
//				break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}
//函数指针的方法实现计算器
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//函数数组指针存储四个函数的地址
//	do
//	{
//		menu();
//		printf("请选择: >");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//	} while (input);
//}

//指向函数指针数组的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10]=&arr;//取出数组的地址
//	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	int(*(*ppfArr)[4])(int, int)=&pfArr;//ppfArr是一个数组指针，指针指向的数组有四个元素、
//	//指向数组的每个元素的类型是一个函数指针
//	return 0;
//}
//回调函数
//回调函数就是一个通过函数指针调用的函数
//如果你把函数的指针(地址)作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数是，我们就说这个是回调函数

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}
//冒泡排序的普通实现(只能排整型)
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//qsort的使用-库函数-排序
//void qsort(void* base,
//	size_t num,
//    size_t width,
//int(*cmp)(const void* e1, const void* e2)
//);
//void* 类型的指针可以接收任意类型的地址
//void*类型的指针不能进行解引用操作，因为不知道访问几个字节
//void* 类型的指针不能进行加减整数的操作