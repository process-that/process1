#include <iostream>
using namespace std;
#include <fstream>
#include<string>

//�ı��ļ� д�ļ�
//void test01()
//{
//	//1.����ͷ�ļ�
//	//2.����������
//	ofstream ofs;
//	//ָ���򿪷�ʽ
//	ofs.open("test.txt", ios::out);
//	//4.д����
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//	//5.�ر��ļ�
//	ofs.close();
//}

//�ı��ļ� ���ļ�
void test01()
{
	//1.����ͷ�ļ�
	//2.����������
	ifstream ifs;
	//3.���ļ� ���ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4.������
	//��һ��
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/
	//�ڶ���
//	char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout<<buf<<endl;
//	}
// 	   ������
	//string buf;
	//while (getline(ifs, buf))
	//{
		//cout << buf << endl;
	//}
	// ������
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c ;
	}
	//5.�ر��ļ�
	ifs.close();
}

	 
int main()
{
	test01();
	system("pause");
	return 0;
}