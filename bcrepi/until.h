#include <string>
#include <Windows.h>



int FindProcessId(const std::string& processName);
void WaitForCloseProcess(const std::string& processName); 
