#include<iostream>
using namespace std;
#include<vector>

//empty();--�ж������Ƿ�Ϊ��
//capacity();--����������
//size();����������Ԫ�صĸ���
//resize(int num);--����ָ����������Ϊnum���������䳤������Ĭ��ֵ�����λ��
//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//resize(int num,elem);--����ָ�������ĳ���Ϊnum���������䳤������elem�����λ��
//��������̣���ĩβ������������Ԫ�ر�ɾ��


//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////vector�����������ʹ�С����
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	if (v1.empty())//Ϊ�棬��������Ϊ��
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ��" << v1.capacity() << endl;
//		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	}
//	//����ָ����С
//	v1.resize(15);
//	printVector(v1);
//	v1.resize(5);
//	printVector(v1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}