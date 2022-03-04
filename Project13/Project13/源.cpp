#include<iostream>
using namespace std;


//int g_a = 10;
//int g_b = 10;
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//	//全局区
//	//全局变量，静态变量，常量
//
//	//创建普通局部变量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量a的地址为：" << (int)&a << endl;
//	cout << "局部变量b的地址为：" << (int)&b << endl;
//	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
//	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;
//	//静态变量
//	//在普通变量前加static
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量a的地址为：" << (int)&s_a << endl;
//	cout << "静态变量b的地址为：" << (int)&s_b << endl;
//	//常量
//	//字符串常量
//	cout << "字符串常量的地址为;" << (int)&"helloworld" << endl;
//	//const修饰的变量
//	//const修饰的全局变量和cost修饰的局部变量
//	cout << "全局常量的地址为:" << (int)&c_g_a << endl;
//	cout << "全局常量的地址为:" << (int)&c_g_b << endl;
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量的地址为：" << (int)&c_l_a << endl;
//	cout << "局部常量的地址为：" << (int)&c_l_b << endl;
//	//总结
//	//c++在程序运行前分为全局区和代码区
//	//代码区的特点是共享和只读
//	//全局区中存放全局变量	静态变量和常量
//	//常量区中存放const修饰的全局变量和字符串常量
//	return 0;
//}

//栈区
//由编译器自动分配释放，存放函数的的参数值，局部变量等
//注意不要返回局部变量的地址
//局部变量存放在栈区，栈区的数据在函数执行完后自动释放
//int* func() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = func();
//	cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
//	cout << *p << endl;//第二次这个数据就不再保留了
//	return 0;
//}

//堆区
//由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
//c++中主要利用new在堆区开辟内存
//int* func() {
//	//利用new关键字，可以将数据开辟到堆区
//	int*p=new int(10);
//	return p;
//}
//int main() {
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}

//new操作符
//语法：new 数据类型
int* func() {
	//在堆区创建整型数据
	//new返回的是该数据类型的指针
	int*p=new int(10);
	return p;
}
void test01() {
	int* p = func();
	cout << *p << endl;
	//如果想释放堆区的数据，利用关键字delete
	delete p;
	//cout << *p << endl;//内存已被释放再次访问会报错是非法操作
}
//在堆区利用new开辟数组
void test02() {
	//创建10个整型数据的数组在堆区
	int*arr=new int[10];//10代表数组有10个元素
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 100;//给10个元素赋值
	}
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << endl;
	}//释放数组：delete[] arr;
}
int main() {
	test01();
	test02();
	return 0;
}