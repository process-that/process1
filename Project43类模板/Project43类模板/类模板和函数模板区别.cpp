#include<iostream>
using namespace std;
#include<string>

//��ģ��ͺ���ģ��������Ҫ������
//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2.��ģ����ģ������б��п�����Ĭ�ϲ���

//��ģ��ͺ���ģ������
//template<class NameType ,class AgeType=int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << endl;
//		cout << "age: " << this->m_Age << endl;
//	}
//};
//
////1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//void test01()
//{
//	//Person p("�����", 1000);�����޷����Զ������Ƶ�
//	Person<string, int>p("�����", 1000);
//	p.showPerson();
//}
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person<string>p("��˽�", 999);
//	p.showPerson();
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}