#include<iostream>
using namespace std;
#include"speechManager.h"

int main()
{
	//����������Ķ���
	SpeechManager sm;
	sm.show_Menu();
	int choice = 0;//�洢�û�������
	while (true)
	{
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴���������¼
			break;
		case 3://��ձ�����¼
			break;
		case 0://�Ƴ�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("cls");//��������
			break;
		}
	}
	system("pause");
	return 0;
}