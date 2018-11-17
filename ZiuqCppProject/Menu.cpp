#include "stdafx.h"
#include "Menu.h"
#include <fstream>
#include <string>

using namespace std;

Menu::Menu()
{
}

Menu::~Menu()
{
}

int Menu::Check_Line()
{
	fstream file("Menu.txt");
	if (file.is_open()) {
		string line;
		int count = 0;
		while (!file.eof()) {
			getline(file, line);
			count++;
		}
		file.close();
		return count;
	}
}
void Menu::Draw_Menu(int _count)
{
	fstream file;
	file.open("Menu.txt", ios::in);
	if (file.good() == false) {
		cout << "Nie udalo sie otworzyc pliku: " << endl;
		exit(0);
	}
	for (int i = 0; i < _count; i++)
	{
		getline(file, line);
		cout << line << endl;
	}
}
	int Menu::Check_MiniLine()
	{
		fstream file("MiniMenu.txt");
		if (file.is_open()) {
			string line;
			int count = 0;
			while (!file.eof()) {
				getline(file, line);
				count++;
			}
			file.close();
			return count;
		}
	}
	void Menu::Draw_MiniMenu(int _count)
	{
		fstream file;
		file.open("MiniMenu.txt", ios::in);
		if (file.good() == false) {
			cout << "Nie udalo sie otworzyc pliku: " << endl;
			exit(0);
		}
		for (int i = 0; i<_count; i++)
		{
			getline(file, line);
			cout << line << endl;
		}


	}

