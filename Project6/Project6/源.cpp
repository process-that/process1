#include<iostream>
using namespace std;
int main()
{
	//break语句使用的时机
	//1.出现在switch语句中，作用是终止case并跳出switch
	//cout << "请选择副本难度" << endl;
	//cout << "1,普通" << endl;
	//cout << "2，中等" << endl;
	//cout << "3，困难" << endl;
	//int select = 0;
	//cin >> select;
	//switch (select)
	//{
	//case 1:
	//	cout << "您选择的是普通" << endl;
	//	break;//推出switch语句
	//case 2:
	//	cout << "您选择的是中等" << endl;
	//	break;
	//case 3:
	//	cout << "您选择的是困难" << endl; 
	//default://默认情况
	//	break;
	//}
	//2.出现在循环语句中。作用是跳出当前的循环语句
	/*for (int i = 0;i < 10;i++) {
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}*/


	//3.出现在嵌套循环中，跳出最近的内层循环语句
	/*for (int i = 0;i < 10;i++) {
			for (int j = 0;j < 10;j++) {
				if (j == 5) {
					break;
				}
				cout << "* "; 
			}
				cout << endl;
			}*/

	//continue语句
	for (int i = 0;i <= 100;i++) {
		if (i % 2 == 0)//输出奇数
			continue;//可以筛选条件，执行到此就不再向下执行，执行下一次的循环
			cout << i << endl;
	}
	return 0;
}