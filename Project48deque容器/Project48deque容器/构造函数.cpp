#include<iostream>
using namespace std;
#include<deque>
//deque<T>;--Ĭ�Ϲ�����ʽ
//deque(beg,end);--���캯����[end,beg)�����е�Ԫ�ؿ���������
//deque(n,elem);--���캯����n��elem����������
//deque(const deque &deq)--�������캯��

//void printDeque(deque<int>& d)
//{
//	for (deque<int>::iterator it = d.begin();it != d.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0;i < 10;i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//	deque<int>d3(5, 100);
//	printDeque(d3);
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}