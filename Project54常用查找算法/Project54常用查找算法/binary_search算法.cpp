#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//查找指定元素是否存在
//必须是有序序列，无序序列不能查找
//void test01()
//{
//	vector<int>v;
//	for (int i = 0;i < 10;i++)
//	{
//		v.push_back(i);
//	}
//	bool ret=binary_search(v.begin(), v.end(), 9);
//	if(ret)
//		{
//		cout << "找到了" << endl;
//		}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}