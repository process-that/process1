#include<iostream>
using namespace std;
#include<deque>

//deque.empty();--�ж������Ƿ�Ϊ��
//deque.size();--����������Ԫ�صĸ���
//deque.resize(num);--//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
//���������̣�ĩβ�������ȵ�Ԫ�ر�ɾ��
//deque.resize(num.elem);--//����ָ�������ĳ���Ϊnum���������䳤������elem�����λ��
//���������̣�ĩβ�������ȵ�Ԫ�ر�ɾ��

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//		for (int i = 0;i < 10;i++)
//				{
//					d1.push_back(i);
//				}
//		printDeque(d1);
//		if (d1.empty())
//		{
//			cout << "d1Ϊ��" << endl;
//		}
//		else
//		{
//			cout << "d1��Ϊ��" << endl;
//			cout << "d1�Ĵ�СΪ" << d1.size() << endl;
//			//dequeû�������ĸ���
//		}
//		//����ָ����С
//		d1.resize(15,24);
//		printDeque(d1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}