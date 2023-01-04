#include<iostream>
using namespace std;
#include<set>;
//find(key);--查找key是否存在，返回该健的元素的迭代器，若不存在返回set,end()
//count(key);--统计元素的个数
//void test01()
//{
//	set<int>s1;
//	s1.insert(30);
//		s1.insert(20);
//		s1.insert(10);
//		s1.insert(40);
//		set<int>::iterator pos=s1.find(30);
//		if (pos != s1.end())
//		{
//			cout << "查找到了" <<*pos<< endl;
//		  }
//		else
//		{
//			cout << "未找到元素" << endl;
//		}
//}
////统计
//void test02()
//{
//	set<int>s1;
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(10);
//	s1.insert(40);
//	int num = s1.count(30);
//	cout << "num=: " << num << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}