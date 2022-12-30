#include <iostream>
using namespace std;

//多态案例2 制作饮品
class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PutInCup() = 0;
	//加入辅料
	virtual void PutSomeThing() = 0;
	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PutInCup();
		PutSomeThing();
	}
};
//具体制作咖啡
class Coffee:public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "煮水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PutInCup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomeThing()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

//制作茶叶
class Tea :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PutInCup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomeThing()
	{
		cout << "加入茶叶" << endl;
	}
};
//制作函数
void doWork(AbstractDrinking *abs)
{
	abs->makeDrink();
	delete abs;
}
void test01()
{
	//制作咖啡
	doWork(new Coffee);
	cout << "-----------------" << endl;
	//制作茶叶
	doWork(new Tea);
}

int main()
{
	test01();
	system("pause");
	return 0;
}