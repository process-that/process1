//#include <iostream>
//using namespace std;
//#include<string>
////�������Ϊ���Ա
////C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ�����Ա
//
////�ֻ���
//class Phone
//{
//public:
//	//Phone�Ĺ��캯��
//	Phone(string pName)
//	{
//		cout << "Phone�Ĺ��캯������" << endl;
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone��������������" << endl;
//	}
//	string m_PName;//�ֻ�Ʒ��
//
//};
//class Person
//{
//public:
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	string m_Name;//����
//	Phone m_Phone;//�绰
//	
//};
////�������������Ϊ�����Ա������ʱ�ȹ���������ٹ�������
////������˳���빹�캯���෴
//void test01()
//{
//	Person p("����", "ƻ��MAX"); 
//	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}