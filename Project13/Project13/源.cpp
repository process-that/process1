#include<iostream>
using namespace std;


//int g_a = 10;
//int g_b = 10;
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//	//ȫ����
//	//ȫ�ֱ�������̬����������
//
//	//������ͨ�ֲ�����
//	int a = 10;
//	int b = 10;
//	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
//	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;
//	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (int)&g_a << endl;
//	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (int)&g_b << endl;
//	//��̬����
//	//����ͨ����ǰ��static
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "��̬����a�ĵ�ַΪ��" << (int)&s_a << endl;
//	cout << "��̬����b�ĵ�ַΪ��" << (int)&s_b << endl;
//	//����
//	//�ַ�������
//	cout << "�ַ��������ĵ�ַΪ;" << (int)&"helloworld" << endl;
//	//const���εı���
//	//const���ε�ȫ�ֱ�����cost���εľֲ�����
//	cout << "ȫ�ֳ����ĵ�ַΪ:" << (int)&c_g_a << endl;
//	cout << "ȫ�ֳ����ĵ�ַΪ:" << (int)&c_g_b << endl;
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "�ֲ������ĵ�ַΪ��" << (int)&c_l_a << endl;
//	cout << "�ֲ������ĵ�ַΪ��" << (int)&c_l_b << endl;
//	//�ܽ�
//	//c++�ڳ�������ǰ��Ϊȫ�����ʹ�����
//	//���������ص��ǹ����ֻ��
//	//ȫ�����д��ȫ�ֱ���	��̬�����ͳ���
//	//�������д��const���ε�ȫ�ֱ������ַ�������
//	return 0;
//}

//ջ��
//�ɱ������Զ������ͷţ���ź����ĵĲ���ֵ���ֲ�������
//ע�ⲻҪ���ؾֲ������ĵ�ַ
//�ֲ����������ջ����ջ���������ں���ִ������Զ��ͷ�
//int* func() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = func();
//	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ�����֣�����Ϊ���������˱���
//	cout << *p << endl;//�ڶ���������ݾͲ��ٱ�����
//	return 0;
//}

//����
//�ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
//c++����Ҫ����new�ڶ��������ڴ�
//int* func() {
//	//����new�ؼ��֣����Խ����ݿ��ٵ�����
//	int*p=new int(10);
//	return p;
//}
//int main() {
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}

//new������
//�﷨��new ��������
int* func() {
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int*p=new int(10);
	return p;
}
void test01() {
	int* p = func();
	cout << *p << endl;
	//������ͷŶ��������ݣ����ùؼ���delete
	delete p;
	//cout << *p << endl;//�ڴ��ѱ��ͷ��ٴη��ʻᱨ���ǷǷ�����
}
//�ڶ�������new��������
void test02() {
	//����10���������ݵ������ڶ���
	int*arr=new int[10];//10����������10��Ԫ��
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ
	}
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << endl;
	}//�ͷ����飺delete[] arr;
}
int main() {
	test01();
	test02();
	return 0;
}