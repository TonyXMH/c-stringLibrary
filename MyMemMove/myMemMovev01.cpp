/*************************************************************************
	> File Name: myMemMovev01.cpp
	> Author: Tony
	> Mail: 445241843@qq.com 
	> Created Time: Thu 23 Jun 2016 07:51:47 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;
void *myMemMove(void *des, void *src, int count)
{
	assert(des);
	assert(src);
	void *ret = des;
	while(count--)
	{
		*(char*)des = *(char*)src;
		des = (char*)des + 1;				//?????????
		src = (char*)src + 1;
	}
	return ret;
}
int main(void)
{
	const int size = 1024;
	char p[size] = "HELLO, WORLD!";
	char p2[size];
	myMemMove(p+1, p, strlen(p) + 1);
//	p2[15] = 'd';
	cout << p << endl;
	return 0;
}

