#include<iostream>
using namespace std;
#include<string>

//class Person {
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person�вι��캯������" << endl;
//		m_Age = age;
//	}
//	Person(const Person &p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//	int m_Age;
//};
////�������캯������ʱ��
//
////1.ʹ��һ��������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "P2������Ϊ��" << p2.m_Age << endl;
//}
////2.ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
////3.ֵ��ʽ���ؾֲ�����
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

//���캯�����ù���
//Ĭ������£�c++���������ٸ�һ��������������� 
//1.Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ� ��ʵ��
//2.Ĭ�������������޲Σ�������Ϊ�գ� ��ʵ��
//3.Ĭ�Ͽ������캯���������Խ���ֵ����  ֵ����

//���캯�����ù�������
//1.����û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
//2.����û����忽��������c++�������ṩ�������캯��
class Person {
public:
	/*Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}*/
	Person(int age)//���д���вι��캯���������������ṩĬ�Ϲ��캯��
	{
		cout << "Person�вι��캯������" << endl;
		m_Age = age;
	}
	Person(const Person& p)
	{
		cout << "Person�������캯������" << endl;
		m_Age = p.m_Age;
	}
	~Person()
	{
		cout << "Person������������" << endl;
	}
	int m_Age;
			
};
//void test01() {
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2������Ϊ��" <<p2.m_Age<< endl;
//}
void test02()
{
	Person p(28);
	Person p2(p);
	cout << "p2������Ϊ��" << p2.m_Age << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}