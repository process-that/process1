#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������

//һά����Ĵ���
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int**arr)
//{}//��������д��������ʵ�ִ���
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//��ά����
//void test(int arr[3][5])
//{}
//void test(int arr[][5])//�п���ʡ�ԣ��в�����ʡ��
//{}
//void test(int* arr)//��ά����ĵ�ַ�ǵ�һ�еĵ�ַ,���ܷ�������ָ���ַ�� err
//{}
//void test(int* arr[5])
//{}
//void test(int(*arr)[5])//��ȷ
//{}
//void test(int** arr)//������ʽ�����ԣ������ַ���ܴ���ڶ���ָ���� err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//һ��ָ�봫��
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
//����ָ�봫��
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
//	test(&p);//ok һ��ָ��ĵ�ַ���Ƕ���ָ��
//	return 0;
//}

//����ָ��- ָ������ָ��-��ź�����ַ��ָ��
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
//	printf("%p\n", &Add);//ȡ�����ĵ�ַ
//	printf("%p\n", Add);//ȡ�����ĵ�ַ,������ַһ��
//	//&������ �� ���������Ǻ����ĵ�ַ
//	//����ָ���д��
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

//�����������Ľ���
//1.(*(void(*)())0)();//��0ǿ������ת����void(*)()����ָ�����ͣ�������0��ַ���ĸú���
//typedef void(*pfun_t)(int);����������ָ�����ͣ���Ҫ������������*֮��
//2.void(*signal(int, void(*)(int)))(int);
//signal��һ����������
//signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void

//����ָ������
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
////��Ҫһ���洢�ĸ������ĵ�ַ
//int main()
//{
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//	}
//	return 0;
//}
