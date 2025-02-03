#include "../../include/displayImage.h"

using namespace std;

void displayImage(const string &fileName)
{
	char cwd[PATH_MAX];
	if (getcwd(cwd, sizeof(cwd)) == NULL)
	{
		cerr << "Error getting current working directory" << endl;
	}

	string basePath = string(cwd) + "/../assets/";
	string filePath = basePath + fileName;

#if defined(_WIN32) || defined(_WIN64)
	// Check if running in WSL
	ifstream wslCheck("/proc/version");
	string versionInfo;
	bool isWSL = false;
	if (wslCheck.is_open())
	{
		getline(wslCheck, versionInfo);
		if (versionInfo.find("Microsoft") != string::npos)
		{
			isWSL = true;
		}
		wslCheck.close();
	}

	if (isWSL)
	{
		// Use feh if running in WSL
		string command = "feh \"" + filePath + "\"";
		system(command.c_str());
	}
	else
	{
		cout << "Unsupported OS gunakan WSL" << endl;
	}
#elif defined(__APPLE__) || defined(__MACH__)
	// Use 'open' command for MacOS (built-in image viewer)
	string command = "open \"" + filePath + "\"";
	system(command.c_str());
#elif defined(__linux__)
	// Use feh for Linux
	string command = "feh \"" + filePath + "\"";
	system(command.c_str());
#else
	cerr << "Unsupported OS" << endl;
	return;
#endif
}