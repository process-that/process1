//#include<iostream>
//using namespace std;
//#include<string>
//
////C++���������ٸ�һ��������ĸ�����
////1.Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
////2.Ĭ�������������޲Σ�������Ϊ�գ�
////3.Ĭ�Ͽ������캯����������ֵ���п���
////4.��ֵ�����operator=������ֵ���п���
//
////��ֵ���������
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);//�ڶ����������
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//���ظ�ֵ�����
//	Person& operator=(Person& p)
//	{
//		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ��������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);//���
//		//���ض�����
//		return *this;
//	}
//	int* m_Age;
//};
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//	p2 = p1;
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}