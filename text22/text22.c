#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ָ�밸��
//��������ʵ��
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
//		printf("��ѡ��: >" );
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", Add(x, y));
//			break;
//			printf("%d\n",Add(x,y));
//				break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}
//����ָ��ķ���ʵ�ּ�����
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//��������ָ��洢�ĸ������ĵ�ַ
//	do
//	{
//		menu();
//		printf("��ѡ��: >");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("�����������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//	} while (input);
//}

//ָ����ָ�������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10]=&arr;//ȡ������ĵ�ַ
//	int(*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	int(*(*ppfArr)[4])(int, int)=&pfArr;//ppfArr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ�ء�
//	//ָ�������ÿ��Ԫ�ص�������һ������ָ��
//	return 0;
//}
//�ص�����
//�ص���������һ��ͨ������ָ����õĺ���
//�����Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ����ǣ����Ǿ�˵����ǻص�����

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
//ð���������ͨʵ��(ֻ��������)
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

//qsort��ʹ��-�⺯��-����
//void qsort(void* base,
//	size_t num,
//    size_t width,
//int(*cmp)(const void* e1, const void* e2)
//);
//void* ���͵�ָ����Խ����������͵ĵ�ַ
//void*���͵�ָ�벻�ܽ��н����ò�������Ϊ��֪�����ʼ����ֽ�
//void* ���͵�ָ�벻�ܽ��мӼ������Ĳ���