#include<iostream>
using namespace std;
#include<ctime>
//int main()
//{
//
//	//三目运算符
//	//int a = 10;
//	//int b = 20;
//	//int c = 0;
//	//c = (a > b ?  a : b);
//	//cout << "c=:" << c << endl;
//	//在三目运算符中返回的是变量，可以继续赋值
//	system("pause");
//
//	//swith语句
//	//给电影打分
//	//10~9经典
//	//8~7非常好
//	//6~5一般
//	//5分一下烂片
//	cout << "请给电影打分" << endl;
//	int score = 0;
//	cin >> score;
//	cout << "您打的分数为：" << score << endl;
//	switch (score) {
//	case 10:
//			cout << "您认为是经典电影" << endl;
//			break;
//	case 9:
//		cout << "您认为是经典电影" << endl;
//		break;
//	case 8:
//		cout << "您认为电影非常好" << endl;
//		break;
//	case 7:
//		cout << "您认为电影非常好" << endl;
//		break;
//	case 6:
//		cout << "您认为电影一般" << endl;
//		break;
//	case 5:
//		cout << "您认为电影一般" << endl;
//		break;
//	default:
//		cout << "您认为这是一个烂片" << endl;
//		break;
//	}
//	//if和switch的区别
//	//switch的缺点:判断时候只能是整型或者字符型，不可以是一个区间
//	//swith优点：结构清晰，执行效率高
//	return 0;
// }
int main()
{
	//while循环
	//输出0到9
	/*int num = 0;
	while (num < 10)
	{ 
		cout << num << endl;
		num++;
	}
	*/
	//while案例：猜数字
	//1.系统生成随机数
	//2.玩家进行猜测
	//3.判断玩家的猜测
	//猜对退出游戏
	//猜错提示数字过大或过小，重新返回第二步
	srand((unsigned int)time(NULL));//添加随机数种子，作用利用当前时间生成随机数
	int num = rand() % 100 + 1;
	//cout << num << endl;
	int val = 0;//玩家输入的数字
	while (1)
	{
		cin >> val;
		if (val > num) {
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else {
			cout << "感谢您猜对了" << endl;
			break;//推出循环
		}
	}
	
	system("pasue");
	return 0;

}