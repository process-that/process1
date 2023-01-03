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
//	//发转
//	list<int>l1;
//	l1.push_back(20);
//	l1.push_back(10);
//	l1.push_back(50);
//	l1.push_back(40);
//	l1.push_back(30);
//	cout << "反转前:" << endl;
//	printList(l1);
//	cout << "反转后：" << endl;
//	l1.reverse();
//	printList(l1);
//}
//
//bool myCompare(int v1,int v2)
//{
//	//降序
//	return v1 > v2;
//}
////排序
//void test02()
//{
//	list<int>l1;
//	l1.push_back(20);
//	l1.push_back(10);
//	l1.push_back(50);
//	l1.push_back(40);
//	l1.push_back(30);
//	//排序
//	cout << "排序前：" << endl;
//	printList(l1);
//	//所有不支持随机访问迭代器的容器不可以用标准算法
//	//不支持随机访问迭代器的容器内部会提供一些算法
//	l1.sort();//默认从小到大
//	cout << "排序后： " << endl;
//	printList(l1);
//	//降序排序
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