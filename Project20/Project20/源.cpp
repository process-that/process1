#include<iostream>
using namespace std;
#include<string>

//class Person {
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
//	Person(const Person &p)
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//	int m_Age;
//};
////拷贝构造函数调用时机
//
////1.使用一个创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "P2的年龄为：" << p2.m_Age << endl;
//}
////2.值传递的方式给函数参数传值
//void doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
////3.值方式返回局部对象
//Person doWork2()
//{
//	Person P1;
//	cout << (int*)&P1 << endl;
//	return P1;
//}
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}

//构造函数调用规则
//默认情况下，c++编译器至少给一个类添加三个函数 
//1.默认构造函数（无参，函数体为空） 空实现
//2.默认析构函数（无参，函数体为空） 空实现
//3.默认拷贝构造函数，对属性进行值拷贝  值拷贝

//构造函数调用规则如下
//1.如果用户定义有参构造函数，c++不再提供默认无参构造，但是会提供默认拷贝构造
//2.如果用户定义拷贝函数，c++不会在提供其他构造函数
class Person {
public:
	/*Person()
	{
		cout << "Person默认构造函数调用" << endl;
	}*/
	Person(int age)//如果写了有参构造函数，编译器则不再提供默认构造函数
	{
		cout << "Person有参构造函数调用" << endl;
		m_Age = age;
	}
	Person(const Person& p)
	{
		cout << "Person拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
	int m_Age;
			
};
//void test01() {
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2的年龄为：" <<p2.m_Age<< endl;
//}
void test02()
{
	Person p(28);
	Person p2(p);
	cout << "p2的年龄为：" << p2.m_Age << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}