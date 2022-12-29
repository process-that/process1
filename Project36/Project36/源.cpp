#include <iostream>
using namespace std;

//继承中同名成员的处理方式
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base下的func函数调用" << endl;
//	}
//	int m_A;
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son下的func函数调用" << endl;
//	}
//	int m_A;
//};
//
////同名成员属性处理方式
//void test01()
//{
//	Son s;
//	cout << "Son下m_A=" << s.m_A << endl;
//	cout << "Base下m_A=" << s.Base::m_A << endl;
//}
//
////同名成员函数处理方式
//void test02()
//{
//	Son s;
//	s.func();//直接调用，调用的是子类中的同名成员
//	s.Base::func();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//继承中的同名静态成员处理方式
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base-static void  func()" << endl;
	}
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son-static void  func()" << endl;
	}
};
int Son::m_A = 200;
//同名静态成员属性
void test01()
{
	Son s;
	cout << "Son下m_A=" << s.m_A << endl;
	cout << "Base下m_A=" << s.Base::m_A << endl;
}

//同名静态成员函数
void test02()
{
	Son s;
	s.func();
	s.Base::func();
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}