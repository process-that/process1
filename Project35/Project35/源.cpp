#include <iostream>
using namespace std;

//�̳��еĶ���ģ��
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
//}//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//�̳��еĹ��������˳��
class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "Base����������" << endl;
	}
};
class Son :public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son()
	{
		cout << "Son����������" << endl;
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