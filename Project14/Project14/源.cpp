#include<iostream>
using namespace std;

//���õĻ���ʹ��
//���ã������������
//�﷨�� �������� &����=ԭ��
//int main() {
//	/*int a = 10;
//	int& b = a;
//	b = 20;
//	cout << a << endl;*/
//
//	//����ע������
//	//���ñ����ʼ��
//	//����int &b;�Ǵ���ģ���Ϊû�г�ʼ��
//
//	//�����ڳ�ʼ���󲻿��Ըı�
//	int a = 10;
//	int& b = a;
//	int c = 20;
//	b = c;
//	cout << "a=:" << a << endl;
//	cout << "b=:" << b<< endl;
//	cout << "c=:" << c<< endl;
//
//	return 0;
//}


//��������
//1,ֵ����
//void myswap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "swap01a=:" <<a<< endl;
//	cout << "swap01a=:" <<b<< endl;
//}
////2,��ַ����
//void myswap02(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << "swap02a=:" << a << endl;
//	cout << "swap02a=:" << b << endl;
//}
////��������������
////3,���ô���
//void myswap03(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	myswap01(a, b);
//	myswap02(&a, &b);
//	myswap03(a, b);
//	cout << "a=:" << a << endl;
//	cout << "b=:" << b << endl;
//	return 0;
//}

//�����������ķ���ֵ
int& test01() {
	int a = 10;
	return a;
}
int& test02() {
	static int a = 10;//��̬���������ȫ������ȫ�����е������ڳ���������Ϻ��ͷ�
	return a;
}
int main() {
	int& ref = test01();
	cout << "ref=:" << ref << endl;
	//cout << "ref=:" << ref << endl;
	int& ref2 = test02();
	cout << "re2f=:" << ref2 << endl;
	cout << "re2f=:" << ref2 << endl;
	cout << "re2f=:" << ref2 << endl;
	return 0;
}