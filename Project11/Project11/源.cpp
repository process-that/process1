#include<iostream>
using namespace std;
//int main() {
//	//1,定义指针
//	int a = 10;
//	//指针定义的语法：数据类型 *指针变量名
//	int* p;
//	//让指针记录变量a的地址
//	p = &a;
//	cout << "a的地址为：" << p << endl;
//	//2.使用指针
//	//可以通过解引用的方式来找到指针指向的内存
//	//指针前加一个*代表解引用，找到指针指向的内存中的数据
//	*p = 1000;
//	cout << "a=" << a << endl;
//	cout << "*p=" << *p << endl;
//	return 0;
//}
//int main() {
//	int a = 10;
//	int* p = &a;
//	cout << "sizeof(int*)=" << sizeof(int*) << endl;
//	cout << "sizeof(int*)=" << sizeof(char*) << endl;
//	cout << "sizeof(int*)=" << sizeof(double*) << endl;
//	return 0;
//}

//int main() {
//	//空指针
//	//1.空指针用于给指针变量进行初始化
//	int* p = NULL;
//	//0到255之间的内存编号是系统占用的，因此不可以访问
//
//	//2.空指针是不可以进行访问的
//	return 0;
//}
//int main() {
//	//野指针：指针指向非法的内存空间
//	//int* p = (int*)0x1100;
//	//cout << *p << endl;
//	return 0;
//}

//int main() {
//	//const修饰指针有三种情况
//	//1,const修饰指针-常量指针
//	int a = 10;
//	int b = 10;
//	int* p = &a;
//	const int* p = &a;
//	//常量指针的特点:
//	//指针的指向可以修改，但指针指向值不可以修改
//	*p = 20;//错误，指针指向值不可以修改
//	p = &b;//正确，指针的指向可以修改
//	//2.const修饰常量-指针常量
//	//指针常量的特点：
//	//指针的指向不可以改，指针指向的值可以修改
//	int* const p = &a;
//	*p = 20;//正确，指向的值可以修改
//	p = &b;//错误，指针的指向不可以修改
//	//3.const既修饰指针又修饰常量
//	const int* const p = &a;//指针的指向和指针指向的值都不可以修改
//
//	return 0;
//}

//int main() {
//	//指针和数组
//	//利用指针访问数组
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "第一个元素为：" << arr[0] << endl;
//	int* p = arr;//arr就是数组的首地址
//	cout << "利用指针来访问第一个元素：" << *p << endl;
//	p++;
//	cout << "利用指针来访问第二个元素：" << *p << endl;
//	cout << "利用指针遍历数组" << endl;
//	int* p2 = arr;
//	for (int i = 0;i < 10;i++) {
//		cout << *p2 << endl;
//		p2++;
//	}
//
//	return 0;
//}

//void swap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swap02(int* p1, int* p2) {
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//int main() {
//	//指针和函数
//	//1,值传递
//	//2,地址传递
//	int a = 10;
//	int b = 20;
//	swap02(&a, &b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	return 0;
//}

//冒泡排序函数
void bubblesort(int*arr,int len) {
	for (int i = 0;i < len-1;i++) {
		for (int j = 0;j < len - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印数组
void printarr(int* arr, int len) {
	for (int i = 0;i < len;i++) {
		cout << arr[i] << endl;
	}
}
int main() {
	//指针数组函数案例
	//1,先创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//2.创建函数实现冒泡排序
	int len = sizeof(arr) / sizeof(arr[0]);//数组长度
	bubblesort(arr, len);
	//3,打印排序后的数组
	printarr(arr, len);

	return 0;
}