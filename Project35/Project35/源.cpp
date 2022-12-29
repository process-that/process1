#include <iostream>
using namespace std;

//继承中的对象模型
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	cout << "size of Son=" << sizeof(Son) << endl;
//}//父类中所有非静态成员属性都会被子类继承下去
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//继承中的构造和析构顺序
class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};
class Son :public Base
{
public:
	Son()
	{
		cout << "Son的构造函数" << endl;
	}
	~Son()
	{
		cout << "Son的析构函数" << endl;
	}
};
void test01()
{
	//Base b;
	Son s;
}

int main()
{
	test01();
	system("pause");
	return 0;
}