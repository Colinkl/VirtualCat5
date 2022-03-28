#pragma once
#include "Cat.h"
#include <Windows.h>
#include <string>
#include <vector>

using namespace std;
class Menu
{
private:
	Cat* cat;

	void punishDialog();
	void feedDialog();
	void petDialog();
public:
	void ShowMenu();
	void SelectOption();

	Menu(Cat* c) : cat(c) {}



	
};

