#include "Menu.h"


template<int txt = 7, int bg = 0>
ostream& color(ostream& text) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | txt));
	return text;
}

void setTextColor(int color) {
	HANDLE sStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(sStdOut, color);
}

void catPrint() {

}

void Menu::punishDialog()
{
	cout << "You realy want to punish cat? [y/n]";
	string a;
	cin >> a;
	if (a == "n")
	{
		cout << "ok" << endl;
		return;
	}
	int h = 0;
	cout << "Enter hit power: ";
	cin >> h;
	if (cat->GetHeath() - h <= 0)
	{
		cout << color < 4, 0> << "You are going to kill cat. Proceed?[y/n]";
		cin >> a;
		if (a == "n")
		{
			cout << "ok" << endl;
			return;
		}
		cout << color<4,0> <<"cat died" << color << endl;
	}
	cat->Punish(h);
}

void Menu::feedDialog()
{
	cout << "Enter food ammount";
	int f = 0;
	cin >> f;
	cat->Feed(f);
	cout << "Cat feeded successuly" << endl;
}

void Menu::petDialog()
{
	string a;
	cout << "prrr";
	cin >> a;
}

void Menu::ShowMenu()
{
	vector<string> cattoArt = {
		" /\\_/\\",
		"( o.o )",
		" > ^ <"
	};
	system("cls");
	cout << "Cat App" << endl;
	setTextColor(cat->GetColor());
	for (string x : cattoArt) {
		cout << x << endl;
	}
	cout << color << endl;
	cout << cat->GetName() << " the cat" << endl;
	cout << "Health is " << cat->GetHeath() << endl;
	cout << "Age is " << cat->GetAge() << endl;
	cout << endl;
	cout << "Select option: " << endl;
	cout << "1\t Feed" << endl;
	cout << "2\t Pet" << endl;
	cout << "3\t Punish" << endl;
}

void Menu::SelectOption()
{
	cin.ignore();
	int opt = 0;
	cin >> opt;

	switch (opt)
	{
	case 1:
		feedDialog();
		break;
	case 2:
		petDialog();
		break;
	case 3:
		punishDialog();
		break;
	default:
		cout << "Try again";
		break;
	}
}
