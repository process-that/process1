#include<iostream>
using namespace std;

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
//��������ֱ����ʽ
//1.�������� ������[���鳤��]
//int main() {
//	int arr[5];
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//	cout << arr[0] << endl;
//
//}

//2.�������� ������[���鳤��]={ֵ1��ֵ2.������}
//int main()
//{
//	int arr2[5] = { 10,20,30 };
//	//cout << arr2[1] << endl;
//	//����ѭ���������Ԫ��
//	for (int i = 0;i < 5;i++) {
//		cout << arr2[i] << endl;
//	}
//	return 0;
//}
//3.�������� ������[]={ֵ1��ֵ2��������}
//int main()
//{
//	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
//	for (int i = 0;i < 9;i++) {
//		cout << arr3[i] << endl;
//	}
//	return 0;
//}

//һά������������
//1.����ͳ�������������ڴ��еĳ���
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9.10 };
	cout << "��������ռ�õ��ڴ�ռ�Ϊ" << sizeof(arr) << endl;
	cout << "�����׵�ַΪ" << arr[0] << endl;
	cout << "����ڶ���Ԫ���׵�ַΪ" << arr[1] << endl;
}

//2.���Ի�ȡ�������ڴ��е��׵�ַ
