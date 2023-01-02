#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

//sort(iterator beg,itrator end)--对beg,end区间内的元素惊进行排序


void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	printDeque(d);
	//排序,默认从小到大
	sort(d.begin(), d.end());
	printDeque(d);
}

int main()
{
	test01();
	system("pause");
	return 0;
}