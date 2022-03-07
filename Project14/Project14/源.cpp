#include<iostream>
using namespace std;

//引用的基本使用
//作用：给变量起别名
//语法： 数据类型 &别名=原名
//int main() {
//	/*int a = 10;
//	int& b = a;
//	b = 20;
//	cout << a << endl;*/
//
//	//引用注意事项
//	//引用必须初始化
//	//例如int &b;是错误的，因为没有初始化
//
//	//引用在初始化后不可以改变
//	int a = 10;
//	int& b = a;
//	int c = 20;
//	b = c;
//	cout << "a=:" << a << endl;
//	cout << "b=:" << b<< endl;
//	cout << "c=:" << c<< endl;
//
//	return 0;
//}


//交换函数
//1,值传递
//void myswap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "swap01a=:" <<a<< endl;
//	cout << "swap01a=:" <<b<< endl;
//}
////2,地址传递
//void myswap02(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << "swap02a=:" << a << endl;
//	cout << "swap02a=:" << b << endl;
//}
////引用做函数参数
////3,引用传递
//void myswap03(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	myswap01(a, b);
//	myswap02(&a, &b);
//	myswap03(a, b);
//	cout << "a=:" << a << endl;
//	cout << "b=:" << b << endl;
//	return 0;
//}

//引用做函数的返回值
int& test01() {
	int a = 10;
	return a;
}
int& test02() {
	static int a = 10;//静态变量存放在全局区，全局区中的数据在程序运行完毕后释放
	return a;
}
int main() {
	int& ref = test01();
	cout << "ref=:" << ref << endl;
	//cout << "ref=:" << ref << endl;
	int& ref2 = test02();
	cout << "re2f=:" << ref2 << endl;
	cout << "re2f=:" << ref2 << endl;
	cout << "re2f=:" << ref2 << endl;
	return 0;
}