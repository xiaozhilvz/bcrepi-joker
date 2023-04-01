

#include <iostream>
#include <sstream>
#include <filesystem>

int FindProcessId(const std::string& processName)
{
  

    return 0;
}

void WaitForCloseProcess(const std::string& processName)
{
    int pid = FindProcessId(processName);
    if (pid == -1)
        return;

    std::cout << "Found '" << processName << "' process. Waiting for closing..." << std::endl;

#ifdef _DEBUG
    std::stringstream stream;
    stream << "taskkill /F /T /IM " << processName;
    int retval = system(stream.str().c_str());

    std::cout << "Trying to kill process." << std::endl;
#endif

 
}