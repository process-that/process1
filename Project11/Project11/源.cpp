#include<iostream>
using namespace std;
//int main() {
//	//1,����ָ��
//	int a = 10;
//	//ָ�붨����﷨���������� *ָ�������
//	int* p;
//	//��ָ���¼����a�ĵ�ַ
//	p = &a;
//	cout << "a�ĵ�ַΪ��" << p << endl;
//	//2.ʹ��ָ��
//	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
//	//ָ��ǰ��һ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
//	*p = 1000;
//	cout << "a=" << a << endl;
//	cout << "*p=" << *p << endl;
//	return 0;
//}
//int main() {
//	int a = 10;
//	int* p = &a;
//	cout << "sizeof(int*)=" << sizeof(int*) << endl;
//	cout << "sizeof(int*)=" << sizeof(char*) << endl;
//	cout << "sizeof(int*)=" << sizeof(double*) << endl;
//	return 0;
//}

//int main() {
//	//��ָ��
//	//1.��ָ�����ڸ�ָ��������г�ʼ��
//	int* p = NULL;
//	//0��255֮����ڴ�����ϵͳռ�õģ���˲����Է���
//
//	//2.��ָ���ǲ����Խ��з��ʵ�
//	return 0;
//}
//int main() {
//	//Ұָ�룺ָ��ָ��Ƿ����ڴ�ռ�
//	//int* p = (int*)0x1100;
//	//cout << *p << endl;
//	return 0;
//}

//int main() {
//	//const����ָ�����������
//	//1,const����ָ��-����ָ��
//	int a = 10;
//	int b = 10;
//	int* p = &a;
//	const int* p = &a;
//	//����ָ����ص�:
//	//ָ���ָ������޸ģ���ָ��ָ��ֵ�������޸�
//	*p = 20;//����ָ��ָ��ֵ�������޸�
//	p = &b;//��ȷ��ָ���ָ������޸�
//	//2.const���γ���-ָ�볣��
//	//ָ�볣�����ص㣺
//	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ�����޸�
//	int* const p = &a;
//	*p = 20;//��ȷ��ָ���ֵ�����޸�
//	p = &b;//����ָ���ָ�򲻿����޸�
//	//3.const������ָ�������γ���
//	const int* const p = &a;//ָ���ָ���ָ��ָ���ֵ���������޸�
//
//	return 0;
//}

//int main() {
//	//ָ�������
//	//����ָ���������
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
//	int* p = arr;//arr����������׵�ַ
//	cout << "����ָ�������ʵ�һ��Ԫ�أ�" << *p << endl;
//	p++;
//	cout << "����ָ�������ʵڶ���Ԫ�أ�" << *p << endl;
//	cout << "����ָ���������" << endl;
//	int* p2 = arr;
//	for (int i = 0;i < 10;i++) {
//		cout << *p2 << endl;
//		p2++;
//	}
//
//	return 0;
//}

//void swap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swap02(int* p1, int* p2) {
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//int main() {
//	//ָ��ͺ���
//	//1,ֵ����
//	//2,��ַ����
//	int a = 10;
//	int b = 20;
//	swap02(&a, &b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	return 0;
//}

//ð��������
void bubblesort(int*arr,int len) {
	for (int i = 0;i < len-1;i++) {
		for (int j = 0;j < len - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//��ӡ����
void printarr(int* arr, int len) {
	for (int i = 0;i < len;i++) {
		cout << arr[i] << endl;
	}
}
int main() {
	//ָ�����麯������
	//1,�ȴ�������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//2.��������ʵ��ð������
	int len = sizeof(arr) / sizeof(arr[0]);//���鳤��
	bubblesort(arr, len);
	//3,��ӡ����������
	printarr(arr, len);

	return 0;
}