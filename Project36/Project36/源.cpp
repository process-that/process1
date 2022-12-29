#include <iostream>
using namespace std;

//�̳���ͬ����Ա�Ĵ���ʽ
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base�µ�func��������" << endl;
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
//		cout << "Son�µ�func��������" << endl;
//	}
//	int m_A;
//};
//
////ͬ����Ա���Դ���ʽ
//void test01()
//{
//	Son s;
//	cout << "Son��m_A=" << s.m_A << endl;
//	cout << "Base��m_A=" << s.Base::m_A << endl;
//}
//
////ͬ����Ա��������ʽ
//void test02()
//{
//	Son s;
//	s.func();//ֱ�ӵ��ã����õ��������е�ͬ����Ա
//	s.Base::func();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//�̳��е�ͬ����̬��Ա����ʽ
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
//ͬ����̬��Ա����
void test01()
{
	Son s;
	cout << "Son��m_A=" << s.m_A << endl;
	cout << "Base��m_A=" << s.Base::m_A << endl;
}

//ͬ����̬��Ա����
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