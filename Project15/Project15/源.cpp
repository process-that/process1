#include<iostream>
using namespace std;

//函数默认参数
//int func(int a, int b=20, int c=30) {
//	return a + b + c;
//}
////注意事项：
////1，如果某个位置已经有了默认参数，那么从这个位置往后都必须有默认参数
////int func2(int a = 10, int b, int c, int d) {
////	return a + b + c + d;
////}
//
////2,如果函数声明有了默认参数，函数实现就不能有默认参数
////声明和实现只能一个有默认参数
//int func2(int a, int b);//函数声明
//int func2(int a=10, int b=10) {//函数实现
//	return a + b;
//}
//int main() {
//	cout << func(10) << endl;
//	cout << func(10,30) << endl;//如果传了值就用传递的值，没有传值就用默认值
//	cout << func2(10,10) << endl;
//	return 0;
//}

//函数占位参数
//语法：返回值类型 函数名（数据类型）
//占位参数也可以有默认参数
//void func(int a,int) {
//	cout << "this a func" << endl;
//}
//int main() {
//	func(10,10);
//	return 0;
//}

//函数重载
//作用：函数名可以相同，提高复用性
//函数重载满足条件：
//1，同一个作用域下
//2，函数名称相同
//3，函数参数类型不同或者个数不同或者顺序不同

//void func() {
//	cout << "func的调用" << endl;
//}
//void func(int a) {
//	cout << "func(int a)的调用!" << endl;
//}
//int main() {
//	func();
//	//func(10);
//	return 0;
//}

//函数重载注意事项
//1,引用作为重载的条件
void func(int& a) {
	cout << "func(int&a)调用" << endl;
}
void func(const int& a) {
	cout << "func(const int&a)调用" << endl;
}
//函数重载碰到默认参数
void func2(int a,int b) {
	cout << "func2(int a,int b)的调用" << endl;
}
void func2(int a) {
	cout << "func2(int a)的调用" << endl;
}
int main() {
	int a = 10;
	//func(a);//调用的是第一个函数
	//func(10);//调用的是第二个函数  
	func2(a);
	return 0;
}