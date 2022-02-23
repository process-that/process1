#include<iostream>
using namespace std;

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
//数组的三种表达形式
//1.数据类型 数组名[数组长度]
//int main() {
//	int arr[5];
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//	cout << arr[0] << endl;
//
//}

//2.数据类型 数组名[数组长度]={值1，值2.。。。}
//int main()
//{
//	int arr2[5] = { 10,20,30 };
//	//cout << arr2[1] << endl;
//	//利用循环输出数组元素
//	for (int i = 0;i < 5;i++) {
//		cout << arr2[i] << endl;
//	}
//	return 0;
//}
//3.数据类型 数组名[]={值1，值2，。。。}
//int main()
//{
//	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
//	for (int i = 0;i < 9;i++) {
//		cout << arr3[i] << endl;
//	}
//	return 0;
//}

//一维数组名的作用
//1.可以统计整个数组在内存中的长度
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9.10 };
	cout << "整个数组占用的内存空间为" << sizeof(arr) << endl;
	cout << "数组首地址为" << arr[0] << endl;
	cout << "数组第二个元素首地址为" << arr[1] << endl;
}

//2.可以获取数组在内存中的首地址
