#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量

//定义一个学生类型
//名字
//年龄
//电话
//性别
//struct Stu//struct-结构体关键字 Stu-结构体标签  struct Stu-结构体类型
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};//结构体声明最后要加分号
//int main()
//{
//	struct Stu s = { "张三",20,"110","男" };//结构体的初始化
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"helloworld",3.14},arr };//结构体嵌套
//	printf("%s\n", t.ch);
//	printf("%d\n", t.s.a);
//	return 0;
//}
typedef struct Stu//struct-结构体关键字 Stu-结构体标签  struct Stu-结构体类型
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)//第一种方法
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void Print2(Stu* ps)//第二钟方法，第二种方法更好
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = { "李四",24,"123","男" };
	Print1(s);
	Print2(&s);
	return 0;
}