#include<iostream>
using namespace std;
#include<map>

//void test01()
//{
//	//查找
//	map<int, int>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	map<int, int>::iterator pos = m.find(3);//find返回的是迭代器
//	if (pos != m.end())
//	{
//		cout << "查到了元素为：" << (*pos).first<<"value为："<<(*pos).second<<endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//	//统计
//	int num = m.count(3);
//	cout << "num=:" << num << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}