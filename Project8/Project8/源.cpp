#include<iostream>
using namespace std;
//int main()
//{
//	//һά������ϰ����ֻС������أ��ҳ�����ӡ���ص�С��
//	int arr[5] = { 300,350,200,400,250 };
//	int max = 0;//���϶�һ�����ֵ
//	for (int i = 0;i < 5;i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	cout << max << endl;
//	return 0;
//}

//һά���鰸��2����������
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int start = 0;//��ʼԪ��λ��
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (start < end) {
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	cout << "����Ԫ����ת��" << endl;
//	for (int i = 0;i < 5;i++) {
//		cout << arr[i] << endl;
//	}
//	
//	return 0;
//}

//ð������
int main() {
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "����ǰ�� " << endl;
	for (int i = 0;i < 9;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	//��ʼð������
	//����������=Ԫ�ظ���-1
	for (int i = 0;i < 9 - 1;i++) {
		//�ڲ�ѭ����������Ԫ�ظ���-��ǰѭ������-1
		for (int j = 0;j < 9 - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			}
	}
	cout << "����� ��" << endl;
	for (int i = 0;i < 9;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}