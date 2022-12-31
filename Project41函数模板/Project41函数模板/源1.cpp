#include<iostream>
using namespace std;
//实现通用对数组进行排序的函数
//规则从大到小
//算法 选择排序
//测试 char数组，int数组

//交换函数模板
template<class T>
void mySwap(T&a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}
//排序算法
template<class T>
void mySort(T arr[],int len)
{
	for (int i = 0;i < len;i++)
	{
		int min = i;
		for (int j = i + 1;j < len;j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;//更新最大值
			}
		}
		if (min != i)
		{
			//交换max和i元素
			mySwap(arr[min], arr[i]);
		}
	}
}

//提供打印数组模板
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	//测试char数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

//测试int 数组
void test02()
{
	int intArr[] = { 52,4,5,23,7,75,13 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);

}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}