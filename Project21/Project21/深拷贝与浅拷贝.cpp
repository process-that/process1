//#include <iostream>
//using namespace std;
//#include<string>
//
////�����ǳ����
////ǳ�������򵥵ĸ�ֵ��������
////������ڶ�����������ռ䣬���п�������
//
//class Person 
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height=new int(height);
//		cout << "Person���вι��캯������" << endl;
//	}
//	//ǳ���������ڴ��ظ��ͷŵ�����
//	//�Լ�ʵ�ֿ������캯�����ǳ��������������
//	Person(const Person& p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//		//m_Height=p.m_Height;������Ĭ��ʵ�־������д���
//		//�������
//		//�����ڶ�������һ��ռ�
//		m_Height = new int(*p.m_Height);//����������ǳ��������
//	}
//	~Person()
//	{
//		//�������룬���������ٵ��������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person��������������" << endl;
//	}
//	int m_Age;//����
//	int* m_Height;//���
//};
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1������Ϊ��" <<p1.m_Age<<"���Ϊ��"<<*p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age <<"���Ϊ��"<<*p2.m_Height<< endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}