#include "App.h"


void App::Start()
{
	printf("Create new Cat? [Y/n]:\t");
	string x;
	cin >> x;
	if (!(x == "y" || x == "Y"))
	{
		printf("Bye");
		return;
	}

	string name;
	int age = 0;

	cout << "Enter cat name:\t";
	cin.ignore();
	getline(std::cin, name);
	cout << "Enter cat age:\t";
	cin >> age;

	cat = new Cat(name, age);
	printf("Cat successfuly created\n Cat name:\t %s \n Cat Age:\t %d", cat->GetName().c_str(), cat->GetAge());

	this->isRunning = true;
	this->worker();
}

void App::worker()
{
	

}
