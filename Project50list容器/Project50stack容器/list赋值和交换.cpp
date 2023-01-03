#include<iostream>
using namespace std;
#include<list>

//assign(beg,end);--将[beg,end)区间中的元素拷贝赋值给本身
//assign(n,elem);--将n个elem拷贝赋值给本身
//list& operator=(const list &list);--重载等号操作符
//swap(lst);--list与本身元素互换

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
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	printList(l1);
//	list<int>l2 = l1;
//	printList(l2);
//	list<int>l3;
//	l3.assign(l2.begin(), l2.end());
//	printList(l3);
//
//}
//
////交换
//void test02()
//{
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	list<int>l2;
//	l2.assign(10, 1000);
//	cout << "交换前： " << endl;
//	printList(l1);
//	printList(l2);
//	l1.swap(l2);
//	printList(l1);
//	printList(l2);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}