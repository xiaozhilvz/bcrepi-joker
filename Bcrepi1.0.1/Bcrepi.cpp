#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

int main()
{
	cout << "������open��ԭ�����ע��" << endl;
	string a;
	cin >> a;
	if ("open"==a)
	{
		
		cout << "��ȴ�5����ɶ�ԭ���ע��" << endl;
		Sleep(5000);
		system("start https://www.bilibili.com/video/BV1uT4y1P7CX/?share_source=copy_web&vd_source=49b3e6e1526291d118ad931973e42347");
	}
	return 0;
}