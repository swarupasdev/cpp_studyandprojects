#include "Log.h"					//ref Log.h
#include <iostream>
void initLog()						//another initializing function I have declared here
{
	Log("initializing log");
}
void Log(const char* message)		//ref from main.cpp : we are here and seeing that I have built the same																function fucntion here 
{
	std::cout << message << std::endl;
}