#include<iostream>
using namespace std;
#include<list>
//void printList(const list<int>& l)
//{
//	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//��ת
//	list<int>l1;
//	l1.push_back(20);
//	l1.push_back(10);
//	l1.push_back(50);
//	l1.push_back(40);
//	l1.push_back(30);
//	cout << "��תǰ:" << endl;
//	printList(l1);
//	cout << "��ת��" << endl;
//	l1.reverse();
//	printList(l1);
//}
//
//bool myCompare(int v1,int v2)
//{
//	//����
//	return v1 > v2;
//}
////����
//void test02()
//{
//	list<int>l1;
//	l1.push_back(20);
//	l1.push_back(10);
//	l1.push_back(50);
//	l1.push_back(40);
//	l1.push_back(30);
//	//����
//	cout << "����ǰ��" << endl;
//	printList(l1);
//	//���в�֧��������ʵ������������������ñ�׼�㷨
//	//��֧��������ʵ������������ڲ����ṩһЩ�㷨
//	l1.sort();//Ĭ�ϴ�С����
//	cout << "����� " << endl;
//	printList(l1);
//	//��������
//	l1.sort(myCompare);
//	printList(l1);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}