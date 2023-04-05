#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

int main()
{
	cout << "请输入open打开原神进行注入" << endl;
	string a;
	cin >> a;
	if ("open"==a)
	{
		
		cout << "请等待5秒完成对原神的注入" << endl;
		Sleep(5000);
		system("start https://www.bilibili.com/video/BV1uT4y1P7CX/?share_source=copy_web&vd_source=49b3e6e1526291d118ad931973e42347");
	}
	return 0;
}