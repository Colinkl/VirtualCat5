#pragma once
#include"Cat.h"
#include <string>
#include<windows.h>
#include "Menu.h"
using namespace std;



class App
{
public:
	void Start();

private:
	Cat* cat;
	void worker();
	bool isRunning;

};

