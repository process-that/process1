#include <iostream>
using namespace std;
#include<string>

//��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա

//��̬��Ա������
//1.���ж�����ͬһ������
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա����,�޷����ֵ������ĸ������m_B����
		cout << "static void func�ĵ���" << endl; 
	}
	static int m_A;//��̬��Ա����
	int m_B;
	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2�ĵ���" << endl;
	}
};
int Person::m_A = 0;
void test01()
{
	//1.ͨ���������
	Person p;
	p.func();
	//2.ͨ����������
	Person::func();
	//Person::func2();������ʲ���˽�о�̬��Ա����
}
int main()
{
	test01();
	return 0;
}