//#include<iostream>
//using namespace std;
//
////函数模板
////两个整型交换函数
//void swapInt(int& a,int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////交换两个浮点型函数
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
//template<typename T>//声明一个模板，T是一个通用数据类型
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//swapInt(a, b);
//	//利用函数模板交换
//	//两种方式使用模板
//	//1.自动类型推导
//	//mySwap(a, b);
//	//2.显示指定类型
//	mySwap<int>(a, b);
//	cout << "a=:" << a << endl;
//		cout<< "b=:" << b << endl;
//	double c = 1.1;
//	double d = 2.2;
//	swapDouble(c, d);
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////函数模板注意事项
////1.自动推导类型，必须推导出一致的数据类型T才可以使用
////2.模板必须要确定出T的数据类型才可以使用