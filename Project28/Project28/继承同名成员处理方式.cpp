#include<iostream>
using namespace std;
#include<string>

//���⣺�������븸�����ͬ���ĳ�Ա�����ͨ��������󣬷��ʵ����������ͬ�������ݣ�
//��������ͬ������ֱ�ӷ��ʼ���
//���ʸ���ͬ��������Ҫ��������

class Base {
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base-func()����" << endl;
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
		cout << "Son-func()����" << endl;
	}
	int m_A;
};
//ͬ����Ա���Դ���ʽ
void test01()
{
	Son s;
	cout << "Son�µ�m_A= " << s.m_A << endl;
	//���ͨ�����������ʵ���������е�һ��ͬ����Ա����Ҫ��������::
	cout << "Base�µ�m_A= " << s.Base::m_A << endl;
}
//ͬ����Ա��������ʽ
void test02()
{
	Son s;
	s.func();//ֱ�ӵ��ã����õ��������е�ͬ����Ա����
	//��ε��õ������е�ͬ����Ա������
	s.Base::func();
}
int main()
{
	//test01();
	test02();
	return 0;
}