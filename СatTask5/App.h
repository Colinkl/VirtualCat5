#pragma once
#include"Cat.h"
#include <string>
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

