#include<stdio.h>
int nAge(int n);
int nAge(int n) {
	int Age;
	if (n == 1)
		Age = 10;
	else
		Age = nAge(n - 1) + 2; //函数的递归
	return Age;
}
void main() {
	printf("第五个人的年龄是%d\n", nAge(5));
}