#include <iostream>
using namespace std;

//�̳�ʵ��ҳ��
//�̳еĺô��������ظ�����
//class BasePage//����ҳ����
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...(����ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++...(���������б�)" << endl;
//	}
//};
////Javaҳ
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java������Ƶҳ������:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.content();
//	ja.left();
//	cout << "---------------------" << endl;
//	cout << "Python������Ƶҳ������:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.content();
//	py.left();
//	cout << "-----------------------" << endl;
//	cout << "CPP������Ƶҳ��������:" << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.content();
//	cp.left();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//�̳з�ʽ
//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//�����еĹ���Ȩ�����ݵ���������Ȼ�ǹ���Ȩ��
		m_B = 10;//�����еı���Ȩ�޵�����������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//������˽��Ȩ�޳�Ա �����з��ʲ���
	}	
};
void test01() 
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//����Ȩ��������ʲ���
}
//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;//�����й�����Ա���������б�Ϊ����Ȩ��
		m_B = 100;
		//m_C = 100;˽������������ʲ���
	}
};
void test02()
{
	Son2 s1;
	//s1.m_A = 1000;m_A��Ϊ����Ȩ�����������ʲ���
}

//˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;//�����й�����Ա�������б�Ϊ˽�г�Ա
		m_B = 100;//�����б�����Ա�������б�Ϊ˽�г�Ա
		//m_C = 100;������˽�г�Ա��������ʲ���
	}
};
void test02()
{
	Son3 s1;
	//s1.m_A = 1000;
}