#include<iostream>
using namespace std;


//���ص��������
//�Զ�������

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	//����ǰ��++�����
	MyInteger& operator++()//ǰ�õ�����������
	{
		m_Num++;
		return *this;
	}
	//���غ���++�����  int ����ռλ��������������ǰ�úͺ���
	MyInteger operator++(int)//���õ�������ֵ
	{
		//�ȼ�¼��ǰ���
		MyInteger temp = *this;
		//�����
		m_Num++;
		//��󽫼�¼�������
		return temp;
	}
private:
	int m_Num;
};

//����<<�����  ����������Ϊ��һֱ��һ�����ݽ��в���
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}
void test01()
{
	MyInteger myint;
	cout <<++(++myint) << endl;
	cout << myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}