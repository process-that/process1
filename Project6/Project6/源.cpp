#include<iostream>
using namespace std;
int main()
{
	//break���ʹ�õ�ʱ��
	//1.������switch����У���������ֹcase������switch
	//cout << "��ѡ�񸱱��Ѷ�" << endl;
	//cout << "1,��ͨ" << endl;
	//cout << "2���е�" << endl;
	//cout << "3������" << endl;
	//int select = 0;
	//cin >> select;
	//switch (select)
	//{
	//case 1:
	//	cout << "��ѡ�������ͨ" << endl;
	//	break;//�Ƴ�switch���
	//case 2:
	//	cout << "��ѡ������е�" << endl;
	//	break;
	//case 3:
	//	cout << "��ѡ���������" << endl; 
	//default://Ĭ�����
	//	break;
	//}
	//2.������ѭ������С�������������ǰ��ѭ�����
	/*for (int i = 0;i < 10;i++) {
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}*/


	//3.������Ƕ��ѭ���У�����������ڲ�ѭ�����
	/*for (int i = 0;i < 10;i++) {
			for (int j = 0;j < 10;j++) {
				if (j == 5) {
					break;
				}
				cout << "* "; 
			}
				cout << endl;
			}*/

	//continue���
	for (int i = 0;i <= 100;i++) {
		if (i % 2 == 0)//�������
			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ�ε�ѭ��
			cout << i << endl;
	}
	return 0;
}