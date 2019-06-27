// 1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include"iostream"
using namespace std;


int main()
{
	int a, b, c, d;
	int n = 0;
	int time, min;
	cin >> a >> b;
	c = a / 10 / 10;
	d = a - c * 100;
	if (b >= 0)
	{
		while (b >= 60)
		{
			b -= 60;
			n += 1;
		}
		min = d + b;
		while (min >= 60)
		{
			min -= 60;
			n += 1;
		}
		time = (c + n) * 100 + min;
	}
	else
	{

		while (b <= -60)
		{
			b += 60;
			n += 1;
		}
		min = d + b;
		while (min >= 60)
		{
			min -= 60;
			n += 1;
		}
		while (min <0)
		{
			n += 1;
			min += 60;
		}
		time = (c - n) * 100 + min;
	}
	if ((c + n) / 10 == 0)
		cout << "0" << time;
	else
		cout << time;

	return 0;
}
