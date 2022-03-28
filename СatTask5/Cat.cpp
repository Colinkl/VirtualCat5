#include "Cat.h"

void Cat::updateColor()
{
	if (health > 80) {
		color = 2;
	}
	else if (health > 50)
	{
		color = 14;
	}
	else if (health > 5)
	{
		color = 4;

	}
	else {
		color = 15;
	}
}

void Cat::Feed(int foodCount)
{
	health += foodCount;
	updateColor();
}

void Cat::Punish(int hit)
{
	if (health - hit <= 0)
	{
		health = 0;
	}
	else
	{
		health -= hit;
	}
	updateColor();
}

int Cat::GetHeath()
{
	return health;
}

int Cat::GetColor()
{
	return color;
}

string Cat::GetName()
{
	return string(name);
}

int Cat::GetAge()
{
	return age;
}
