#include<iostream>
using namespace std;
#include<string>

//封装案例
//设计立方体类
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等

class Cube {
public:
	//设置长
	void setL(int l) {
		m_L = l;
	}
	//获取长
	int getL() {
		return m_L;
	}
	//设置宽
	void setW(int w) {
		m_W = w;
	}
	//获取宽
	int getW() {
		return m_W;
	}
	//设置高
	void setH(int h) {
		m_H = h;
	}
	//获取高
	int getH() {
		return m_H;
	}
	//获取立方体的面积
	int caculateS() {
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//获取立方体的体积
	int caculateV() {
		return m_H * m_L * m_W;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c) {
		if (m_H == c.getH() && m_L == c.getL() && m_W == c.getW()) {
			return true;
		}
		return false;
	}
private:
	int m_L;//长
	int m_W;//宽
	int m_H;//高
};

//利用全局函数来判断两个立方体是否相等
bool isSame(Cube &c1,Cube &c2) {
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()) {
		return true;
	}
	return false;
}
int main() {

	Cube c1;//创建立方体对象
	c1.setH(10);
	c1.setW(10);
	c1.setL(10);
	cout << "c1的面积为：" << c1.caculateS() << endl;
	cout << "c1的体积为：" << c1.caculateV() << endl;
	Cube c2;//创建第二个立方体
	c2.setH(10);
	c2.setW(10);
	c2.setL(10);
	bool ret= isSame(c1, c2);
	if (ret) {
		cout << "c1和c2是相等的" << endl;
	}
	else {
		cout << "c1和c2不相等" << endl;
	}
	//利用成员函数判断
	ret = c1.isSameByClass(c2);
	if (ret) {
		cout << "成员函数判断c1和c2是相等的" << endl;
	}
	else {
		cout << "成员函数c1和c2不相等" << endl;
	}
}