//#include<iostream>
//using namespace std;
////普通函数与函数模板的区别
////1.普通函数调用时可以发生隐式类型转换
////2.函数模板用自动类型推导，不可以发生隐式类型转换
////3.函数模板用显示指定类型，可以发生隐式类型转化
//
////普通函数
//int myAdd1(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template<class T>
//T myAdd2(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd1(a, c) << endl;
//	//自动类型推导,不会发生隐式类型转换
//	//cout << myAdd2(a, c) << endl;
//	//显示指定类型会发生隐式类型转换
//	cout << myAdd2<int>(a, c) << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
////}