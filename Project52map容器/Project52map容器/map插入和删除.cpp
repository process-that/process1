#include<iostream>
using namespace std;
#include<map>

//�����ɾ��
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin();it != m.end();it++)
//	{
//		cout << "key=: " << (*it).first << "value=:" << (*it).second << endl;
//	}
//	cout << endl;
//}	
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(map<int, int>::value_type(3, 30));
//	m[4] = 40;
//	printMap(m);
//	//ɾ��
//	m.erase(m.begin());
//	printMap(m);
//	m.erase(3);//����keyֵɾ��
//	printMap(m);
//	m.erase(m.begin(), m.end());
//	printMap(m);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}