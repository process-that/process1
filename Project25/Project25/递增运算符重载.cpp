#include<iostream>
using namespace std;
#include<string>
//���ã�ͨ�����ص����������ʵ���Լ�����������
//�Զ�������
class MyInteger
{
public:
	friend ostream& operator<<(ostream& cout, MyInteger myint);
	MyInteger()
	{
		m_Num = 0;
	}
	//����ǰ��++�����
 MyInteger& operator++()
	{
	 //�Ƚ���++����
	m_Num++;
	//�ڽ������� 
	return *this;
	}
 //���ú���++�����
MyInteger operator++(int)//int ����ռλ������������������ǰ�ú��õ���
 {
	 //�ȼ�¼��ʱ���
	 MyInteger temp = *this;
	 //�����
	 m_Num++;
	 //��󽫼�¼�������
	 return temp;
 }

private:
	int m_Num;
};
//����<<�����
ostream& operator<<(ostream& cout, MyInteger myint)//����������Ϊ��һֱ��һ�����ݽ��в���
{
	cout << myint.m_Num;
	return cout;
}
void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
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
	return 0;
}