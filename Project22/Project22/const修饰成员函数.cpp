#include<iostream>
using namespace std;
#include<string>
//��������
//��Ա�������const����������Ϊ������
//�������ڲ������޸ĳ�Ա����
//��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
class Person
{
public:
	//thisָ��ı�����ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		//this->m_A = 100;
		this->m_B = 100;
	}
	void fuc()
	{

	}
	int m_A;
	mutable int m_B;//��ʹ�ڳ�������Ҳ�����޸�ֵ,��mutable�ؼ���
};
void test01()
{
	Person p;
	p.showPerson();
}
//������
//��������ǰ��const�Ƹö���Ϊ������
//������ֻ�ܵ��ó�����
void test02()
{
	const Person p;//�ڶ���ǰ��const����Ϊ������
	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�
	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}
int main()
{
	return 0;
}