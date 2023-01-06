#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//查找相邻重复元素返回相邻元素第一个元素的迭代器
//void test01()
//{
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(3);
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end())
//	{
//		cout << "未找到相邻元素" << endl;
//	}
//	else
//	{
//		cout << "找到了相邻元素为：" << *pos<< endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}