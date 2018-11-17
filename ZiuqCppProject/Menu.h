#pragma once
#include <iostream>
using namespace std;
class Menu
{

	string line;
public:
	Menu();
	~Menu();
	int Check_Line();
	void Draw_Menu(int _count);
	int Check_MiniLine();
	void Draw_MiniMenu(int _count);

};