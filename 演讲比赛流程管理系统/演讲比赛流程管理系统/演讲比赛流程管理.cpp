#include<iostream>
using namespace std;
#include"speechManager.h"

int main()
{
	//创建管理类的对象
	SpeechManager sm;
	sm.show_Menu();
	int choice = 0;//存储用户的输入
	while (true)
	{
		cout << "请输入您的选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届比赛记录
			break;
		case 3://清空比赛记录
			break;
		case 0://推出系统
			sm.exitSystem();
			break;
		default:
			system("cls");//清屏操作
			break;
		}
	}
	system("pause");
	return 0;
}