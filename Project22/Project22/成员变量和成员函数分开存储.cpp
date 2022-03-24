//#include<iostream>
//using namespace std;
//#include<string>
//class Person 
//{
//	int m_A;//非静态成员变量  属于类的对象上
//	static int m_B;//静态成员变量 不属于类对象上
//	void fun() {}//非静态成员函数 不属于类对象上
//	static void fun2(){}//静态成员函数 不属于类的对象上
//};
// int Person:: m_B=0;//类内声明，类外初始化
//void test01()
//{
//	Person p; 
//	//空对象占用的内存空间为： 1
//	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占用内存的位置
//	//每个空对象也应该有一个独一无二的内存地址,因此要分配一个字节
//	cout << "size of p=" << sizeof(p) << endl;
//}
//void test02()
//{
//	Person p;
//	cout << "size of p=" << sizeof(p) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}