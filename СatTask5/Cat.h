#pragma once
#include <string>
#include <iostream>
using namespace std;

class Cat
{
private:
	string name = "";
	int age = 0;
	int health = 0;
	int color = 0;
	
	void updateColor();

public:
	Cat(string Name, int Age) : name(Name), age(Age) {
		health = 100;
		color = 2; // Green color
	}

	void Feed(int foodCount);
	void Punish(int hit);

	int GetHeath();
	int GetColor();
	string GetName();
	int GetAge();



};

