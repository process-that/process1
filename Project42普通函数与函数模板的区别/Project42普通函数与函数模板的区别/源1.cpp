#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ����ù���
//1.�����ͨ�����ͺ���ģ�嶼����ʵ�֣����ȵ�����ͨ����
//2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3.����ģ��Ҳ���Է�������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

void myPrint(int a, int b)
{
	cout << "������ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "���ú���ģ��" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	//myPrint(a, b);
	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	myPrint<>(a, b);
}
int main()
{
	test01();
	system("pause");
	return 0;
}