#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数组参数

//一维数组的传参
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int**arr)
//{}//以上五种写法均可以实现传参
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//二维数组
//void test(int arr[3][5])
//{}
//void test(int arr[][5])//行可以省略，列不可以省略
//{}
//void test(int* arr)//二维数组的地址是第一行的地址,不能放在整型指针地址中 err
//{}
//void test(int* arr[5])
//{}
//void test(int(*arr)[5])//正确
//{}
//void test(int** arr)//这种形式不可以，数组地址不能存放在二级指针中 err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//一级指针传参
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9};
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}
//void test1(int* p)
//{
//
//}
//void test2(char* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}
//二级指针传参
//void test(int** ptr)
//{
//	printf("num=%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//ok
//	test(&p);//ok 一级指针的地址就是二级指针
//	return 0;
//}

//函数指针- 指向函数的指针-存放函数地址的指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n",Add(a, b));
//	printf("%p\n", &Add);//取函数的地址
//	printf("%p\n", Add);//取函数的地址,两个地址一样
//	//&函数名 和 函数名都是函数的地址
//	//函数指针的写法
//	int(*pa)(int ,int) = Add;
//	printf("%d\n",(*pa)(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello");
//	return 0;
//}

//两段阴间代码的解释
//1.(*(void(*)())0)();//把0强制类型转换成void(*)()函数指针类型，并调用0地址处的该函数
//typedef void(*pfun_t)(int);重命名函数指针类型，需要将重命名放在*之后
//2.void(*signal(int, void(*)(int)))(int);
//signal是一个函数声明
//signal函数的参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int，返回类型是void

//函数指针数组
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
////需要一个存储四个函数的地址
//int main()
//{
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//	}
//	return 0;
//}
