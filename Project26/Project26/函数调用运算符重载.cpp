#include<iostream>
using namespace std;
#include<string>

//�������������Ҳ������
//�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
//�º���û�й̶�д�����ǳ����

//��ӡ�����
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void MyPrint02(string test)
{
	cout << test << endl;
}
void test01()
{
	MyPrint myPrint;
	myPrint("hello world");
	MyPrint02("hello world");
}
int main()
{
	test01();
	return 0;
}