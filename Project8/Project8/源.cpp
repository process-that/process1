#include<iostream>
using namespace std;
//int main()
//{
//	//一维数组练习：五只小猪称体重，找出并打印最重的小猪
//	int arr[5] = { 300,350,200,400,250 };
//	int max = 0;//先认定一个最大值
//	for (int i = 0;i < 5;i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	cout << max << endl;
//	return 0;
//}

//一维数组案例2：数组逆置
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int start = 0;//起始元素位置
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (start < end) {
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	cout << "数组元素逆转后：" << endl;
//	for (int i = 0;i < 5;i++) {
//		cout << arr[i] << endl;
//	}
//	
//	return 0;
//}

//冒泡排序
int main() {
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前： " << endl;
	for (int i = 0;i < 9;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	//开始冒泡排序
	//总排序轮数=元素个数-1
	for (int i = 0;i < 9 - 1;i++) {
		//内层循环次数等于元素个数-当前循环轮数-1
		for (int j = 0;j < 9 - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			}
	}
	cout << "排序后 ：" << endl;
	for (int i = 0;i < 9;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}