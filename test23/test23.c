#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//第一个参数：待排序数组的首元素地址
//第二个参数：待排序数组的元素个数
//第三个参数：待排序数组的每个元素的大小—单位是字节
//第四个参数：是函数指针，比较两个元素的所用 函数的地址-这个函数使用者自己实现
//            函数指针的两个参数是：待比较的两个元素的地址

//指针和数组笔试题解析
//int main()
//{
//	//数组名是首元素的地址(两个例外)
//	//1.sizeof(数组名)-数组名表示整个数组
//	//2.&数组名-数组名表示整个数组
//	int a[] = { 1,2,3,4, };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//4-数组名这个表示首元素地址，a+0还是首元素地址，地址的大小就是4或者8个字节
//	printf("%d\n", sizeof(*a));//首元素的大小,*a就是首元素
//	printf("%d\n", sizeof(a+1));//4-a+1表示第二个元素的地址
//	printf("%d\n", sizeof(a[1]));//4-第二个元素的大小
//	printf("%d\n", sizeof(&a));//4-&a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4个或者8个字节
//	printf("%d\n", sizeof(*&a));//16-*和&抵消 &a是数组的地址，数组的地址解引用访问的是数组
//	printf("%d\n", sizeof(&a + 1));//4&a+1依然是一个地址，地址的大小都是四个或者8个字节
//	printf("%d\n", sizeof(&a[0]));//4/8 -&a[0]是第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1));//4/8 &a[0]+1是第二个元素的地址
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr+0));//4/8 -arr+0依然是首元素的地址
//	printf("%d\n", sizeof(*arr));//1  arr是首元素地址，*arr是首元素，char类型首元素的大小是1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8 -&arr虽然是数组的地址，但还是地址
//	printf("%d\n", sizeof(&arr+1));//4/8  -&arr+1是跳过整个数组后的地址，依然是地址
//	printf("%d\n", sizeof(&arr[0]+1));//4/8
//	return 0;
//}
int main()
{
	//strlen求字符串长度，关键是找到/0结束标志
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr+0));//随机值，和第一种写法完全相同
	printf("%d\n", strlen(*arr));//'a'-97，把97当作地址访问，非法访问内存地址
	printf("%d\n", strlen(arr[1]));//'b'-98,把98当作一个地址，也是非法访问内存地址
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6，但是可以确定的是与上面随机值的差值是6
	printf("%d\n", strlen(&arr[0]+1));//随机值-1-- 把‘b’的地址传给了strlen
	return 0;
}
