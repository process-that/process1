#include<iostream>
using namespace std;
#include<string>

//问题：当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据？
//访问子类同名对象，直接访问即可
//访问父类同名对象，需要加作用域

class Base {
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base-func()调用" << endl;
	}
	int m_A;
};
class Son :public Base
{
public:
	Son()
	{
	 m_A = 200;
	}
	void func()
	{
		cout << "Son-func()调用" << endl;
	}
	int m_A;
};
//同名成员属性处理方式
void test01()
{
	Son s;
	cout << "Son下的m_A= " << s.m_A << endl;
	//如果通过子类对象访问到父类对象中的一个同名成员，需要加作用域::
	cout << "Base下的m_A= " << s.Base::m_A << endl;
}
//同名成员函数处理方式
void test02()
{
	Son s;
	s.func();//直接调用，调用的是子类中的同名成员函数
	//如何调用到父类中的同名成员函数？
	s.Base::func();
}
int main()
{
	//test01();
	test02();
	return 0;
}