#include<iostream>
using namespace std;
#include<ctime>
//int main()
//{
//
//	//��Ŀ�����
//	//int a = 10;
//	//int b = 20;
//	//int c = 0;
//	//c = (a > b ?  a : b);
//	//cout << "c=:" << c << endl;
//	//����Ŀ������з��ص��Ǳ��������Լ�����ֵ
//	system("pause");
//
//	//swith���
//	//����Ӱ���
//	//10~9����
//	//8~7�ǳ���
//	//6~5һ��
//	//5��һ����Ƭ
//	cout << "�����Ӱ���" << endl;
//	int score = 0;
//	cin >> score;
//	cout << "����ķ���Ϊ��" << score << endl;
//	switch (score) {
//	case 10:
//			cout << "����Ϊ�Ǿ����Ӱ" << endl;
//			break;
//	case 9:
//		cout << "����Ϊ�Ǿ����Ӱ" << endl;
//		break;
//	case 8:
//		cout << "����Ϊ��Ӱ�ǳ���" << endl;
//		break;
//	case 7:
//		cout << "����Ϊ��Ӱ�ǳ���" << endl;
//		break;
//	case 6:
//		cout << "����Ϊ��Ӱһ��" << endl;
//		break;
//	case 5:
//		cout << "����Ϊ��Ӱһ��" << endl;
//		break;
//	default:
//		cout << "����Ϊ����һ����Ƭ" << endl;
//		break;
//	}
//	//if��switch������
//	//switch��ȱ��:�ж�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
//	//swith�ŵ㣺�ṹ������ִ��Ч�ʸ�
//	return 0;
// }
int main()
{
	//whileѭ��
	//���0��9
	/*int num = 0;
	while (num < 10)
	{ 
		cout << num << endl;
		num++;
	}
	*/
	//while������������
	//1.ϵͳ���������
	//2.��ҽ��в²�
	//3.�ж���ҵĲ²�
	//�¶��˳���Ϸ
	//�´���ʾ���ֹ�����С�����·��صڶ���
	srand((unsigned int)time(NULL));//�����������ӣ��������õ�ǰʱ�����������
	int num = rand() % 100 + 1;
	//cout << num << endl;
	int val = 0;//������������
	while (1)
	{
		cin >> val;
		if (val > num) {
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else {
			cout << "��л���¶���" << endl;
			break;//�Ƴ�ѭ��
		}
	}
	
	system("pasue");
	return 0;

}