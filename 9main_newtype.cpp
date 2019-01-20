#include <iostream>		// input/output standard library
#include <string>			// standard string library
#include <fstream>			
#include <windows.h>			

using namespace std;

/*int main() 
{
	//getting system info
	char buf[10000];
	FILE *p = _popen("netstat -a", "r");
	std::string s;
	for (size_t count; (count = fread(buf, 1, sizeof(buf), p));)
		s += string(buf, buf + count);
	cout << s << endl;
	_pclose(p);

	//getting system info - contents of current directory 
	std::system("dir >test.txt"); // execute the Windows command "dir" and copy output intp the text file
	std::cout << std::ifstream("test.txt").rdbuf(); //returns a stream for the file
	//in unix, the dir command would be "ls"

	//getting system info -- what computer are you using?
	SYSTEM_INFO siSysInfo;
	// Copy the hardware information to the SYSTEM_INFO structure. 
	GetSystemInfo(&siSysInfo);
	// Display the contents of the SYSTEM_INFO structure. 
	printf("Hardware information: \n");
	printf("  OEM ID: %u\n", siSysInfo.dwOemId);
	printf("  Number of processors: %u\n",
		siSysInfo.dwNumberOfProcessors);
	printf("  Page size: %u\n", siSysInfo.dwPageSize);
	printf("  Processor type: %u\n", siSysInfo.dwProcessorType);
	printf("  Minimum application address: %lx\n",
		siSysInfo.lpMinimumApplicationAddress);
	printf("  Maximum application address: %lx\n",
		siSysInfo.lpMaximumApplicationAddress);
	printf("  Active processor mask: %u\n",
		siSysInfo.dwActiveProcessorMask);
	
	cin.get();
}*/