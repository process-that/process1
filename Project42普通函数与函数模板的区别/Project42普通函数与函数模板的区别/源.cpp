//#include<iostream>
//using namespace std;
////��ͨ�����뺯��ģ�������
////1.��ͨ��������ʱ���Է�����ʽ����ת��
////2.����ģ�����Զ������Ƶ��������Է�����ʽ����ת��
////3.����ģ������ʾָ�����ͣ����Է�����ʽ����ת��
//
////��ͨ����
//int myAdd1(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
//template<class T>
//T myAdd2(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd1(a, c) << endl;
//	//�Զ������Ƶ�,���ᷢ����ʽ����ת��
//	//cout << myAdd2(a, c) << endl;
//	//��ʾָ�����ͻᷢ����ʽ����ת��
//	cout << myAdd2<int>(a, c) << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
////}