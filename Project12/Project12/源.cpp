#include<iostream>
using namespace std;
#include <string>
#include<ctime> 
//int main() {
//	//结构体
//	//语法：struct 结构体名{结构体成员列表}
//	//1，创建一个学生的数据类型:学生包括年龄 姓名 分数
//	struct student {
//		string name;
//		int age;
//		int score;
//	};
//
//	//2,通过学生类型创建具体学生
//	//1.struct student s1;
//	struct student s1 ;
//	//给s1属性赋值，通过.访问结构体变量中的属性
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 100;
//	cout << "姓名" << s1.name << "年龄" << s1.age << "成绩" << s1.score << endl;
//	//2,struct student s2={...}
//	struct student s2 = { "李四",19,80 };
//	cout << "姓名" << s2.name << "年龄" << s2.age << "成绩" << s2.score << endl;
//	//3,在定义结构体时顺便创建结构体变量
//	return 0;
//}
//结构体数组

	//作用：将自定义的结构体放到数组中方便维护
	//语法：struct 结构体名 数组名{元素个数}={{}{}{}}
	//1.定义结构体
	//struct student {
	//	string name;
	//	int age;
	//	int score;
	//};
	//int main() {
	//	//2,创建结构体数组
	//	struct student stuarray[3] = {
	//		{"张三",18,100},
	//		{"李四",19,80},
	//		{"王五",34,87}
	//	};
	//	//3,给结构体数组中的元素赋值
	//	stuarray[2].name = "赵六";
	//	stuarray[2].age = 80;
	//	stuarray[2].score = 60;
	//	//4,遍历数组
	//	for (int i = 0;i < 3;i++) {
	//		cout << "姓名" << stuarray[i].name << "年龄" << stuarray[i].age << "成绩" << stuarray[i].score << endl;
	//	}
	//	return 0;
	//}

//结构体指针
//struct student {
//	string name;
//	int age;
//	int score;
//};
//int main() {
//	//作用：通过指针访问结构体中的成员
//	//利用操作符->可以通过结构体指针访问结构体属性
//	//1.创建结构变量
//	struct student s = { "张三",18,100 };
//	//2.通过指针指向结构体变量
//	struct student* p = &s;
//	//3.通过指针访问结构体变量中的数据
//	cout << "姓名：" << p->name << "年龄：" << p->age << "成绩：" << p->score << endl;
//	return 0;
//}

//结构体嵌套结构体
//作用：结构体中的成员可以是另一个结构体
//例如：每个老师辅导一个学生，一个老师的结构体中记录另一个学生的结构体

//定义学生结构体
//struct student {
//	string name;
//	int age;
//	int score;
//};
////定义老师结构体
//struct teacher {
//	int id;
//	string name;
//	int age;
//	struct student stu;//学生的结构体
//};
//int main() {
//	teacher t;
//	t.id = 1000;
//	t.age = 50;
//	t.name = "老王";
//	t.stu.name = "小王";
//	t.stu.age = 18;
//	t.stu.score = 90;
//	cout << "老师姓名： " << t.name << "老师年龄： " 
//		<< t.age << "老师编号： " << t.id << "老师辅导的学生姓名： " << t.stu.name << "学生年龄： " << t.stu.age << "学生的成绩： " << t.stu.score << endl;
//	return 0;
//}

//结构体做函数参数
//作用;将结构体作为参数向函数中传递
//定义学生结构体
//struct student {
//	string name;
//	int age;
//	int score;
//};
////打印学生所有信息的函数
////值传递
//void printstudent(struct student s) {
//	cout << "子函数中 姓名： " << s.name << "年龄： " << s.age << "分数： " << s.score << endl;
//}
////地址传递
//void printstudent2(struct student *p) {
//	cout << "子函数2中姓名 ：" << p->name << "年龄 ；" << p->age << "分数： " << p->score<< endl;
//}
//int main() {
//	//结构体做函数参数
//	//将学生传入到一个参数中，打印学生身上所有的信息
//	//创建结构体变量
//	struct student s;
//	s.name = "张三";
//	s.age = 18;
//	s.score = 80;
//	printstudent(s);
//	printstudent2(&s);
//	return 0;
//}

//结构体案例
//案例描述：学校正在做毕设项目,每名老师带领5名学生，总共有三名老师需求如下：
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放五名学生的数组作为成员
//学生的成员有姓名，考试分数，创建数组存放三个老师，通过函数给每个老师及所带的学生赋值
//最终打印老师数据以及老师所带的学生数据

//定义学生的结构体
struct student {
	string sname;
	int score;
};
//老师的结构体定义
struct teacher {
	string tname;
	struct student sarray[5];
};
//给老师和学生赋值的函数
void allocatespace(struct teacher tarray[],int len) {
	string nameseed = "ABCDE";
	for (int i = 0;i < len;i++) {
		tarray[i].tname = "Teacher_";
		tarray[i].tname += nameseed[i];
		//通过循环给每名老师带的学生赋值
		for (int j = 0;j < 5;j++) {
			tarray[i].sarray[j].sname = "Student_";
			tarray[i].sarray[j].sname += nameseed[j]; 
			int random = rand() % 61+40;
			tarray[i].sarray[j].score = random;
		}
		
	}
}
//打印所有信息
void printinfo(struct teacher tarray[], int len) {
	for (int i = 0;i < len;i++) {
		cout << "老师姓名：" << tarray[i].tname << endl;
		for (int j = 0;j < 5;j++) {
			cout << "\t学生姓名： " << tarray[i].sarray[j].sname << " 考试分数：" << tarray[i].sarray[j].score << endl;
		}
	}
}
int main() {
	srand((unsigned int)time(NULL));
	//1.创建三名老师的数组
	struct teacher tarray[3];
	//2.通过函数给三名老师的信息赋值，并且给老师带的学生信息赋值
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allocatespace(tarray, len); 
	printinfo(tarray,len);
		//3.打印所有老师及所带的学生
	return 0; 
}