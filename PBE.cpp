//This program is a simple pathing to an .exe file that has to remain in its certain folder

#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
	ShowWindow( GetConsoleWindow(), SW_HIDE );
	system("explorer C:\\Users\\Greg\\Desktop\\You know... the stuff\\League\\PBE\\lol.launcher.exe ");
}
