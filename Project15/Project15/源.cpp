#include<iostream>
using namespace std;

//����Ĭ�ϲ���
//int func(int a, int b=20, int c=30) {
//	return a + b + c;
//}
////ע�����
////1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󶼱�����Ĭ�ϲ���
////int func2(int a = 10, int b, int c, int d) {
////	return a + b + c + d;
////}
//
////2,���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
////������ʵ��ֻ��һ����Ĭ�ϲ���
//int func2(int a, int b);//��������
//int func2(int a=10, int b=10) {//����ʵ��
//	return a + b;
//}
//int main() {
//	cout << func(10) << endl;
//	cout << func(10,30) << endl;//�������ֵ���ô��ݵ�ֵ��û�д�ֵ����Ĭ��ֵ
//	cout << func2(10,10) << endl;
//	return 0;
//}

//����ռλ����
//�﷨������ֵ���� ���������������ͣ�
//ռλ����Ҳ������Ĭ�ϲ���
//void func(int a,int) {
//	cout << "this a func" << endl;
//}
//int main() {
//	func(10,10);
//	return 0;
//}

//��������
//���ã�������������ͬ����߸�����
//������������������
//1��ͬһ����������
//2������������ͬ
//3�������������Ͳ�ͬ���߸�����ͬ����˳��ͬ

//void func() {
//	cout << "func�ĵ���" << endl;
//}
//void func(int a) {
//	cout << "func(int a)�ĵ���!" << endl;
//}
//int main() {
//	func();
//	//func(10);
//	return 0;
//}

//��������ע������
//1,������Ϊ���ص�����
void func(int& a) {
	cout << "func(int&a)����" << endl;
}
void func(const int& a) {
	cout << "func(const int&a)����" << endl;
}
//������������Ĭ�ϲ���
void func2(int a,int b) {
	cout << "func2(int a,int b)�ĵ���" << endl;
}
void func2(int a) {
	cout << "func2(int a)�ĵ���" << endl;
}
int main() {
	int a = 10;
	//func(a);//���õ��ǵ�һ������
	//func(10);//���õ��ǵڶ�������  
	func2(a);
	return 0;
}