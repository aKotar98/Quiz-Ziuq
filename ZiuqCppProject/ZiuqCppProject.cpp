// ZiuqCppProject.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include "Menu.h"
#include "Category.h"
#include "Co_Wiesz.h"
#include "Panstwa.h"
#include "Marvel.h"
#include "Podchwytliwe.h"
#include "Lektury.h"
#include "Fizyka.h"
#include "Gry.h"
#include "Informatyka.h"
#include "Historia.h"
#include "Jezyk_ob.h"
#include "Jezyk_oj.h"
#include "Ekstraklasa.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

int tablica[50];
int incremnet = 0;
bool check_if_was = false;

using namespace std;
int Count_Line(fstream &file)
{
	int counter = 0;
	if (file.is_open()) {
		string line;
		while (!file.eof()) {
			getline(file, line);
			counter++;
		}
		file.close();
	}
	return counter / 6;
}
bool Check(int question_number) {
	
	check_if_was = false;
		if (incremnet > 0)
		{
			
			for (int i = 0; i < incremnet; i++)
			{
				if (question_number == tablica[i]) 
					check_if_was = true;
			}
		}
		else if (incremnet == 0)
		{
			tablica[incremnet] = question_number;
			incremnet++;
			
		}
		if (check_if_was == false)
		{
			tablica[incremnet] = question_number;
			incremnet++;
		}
		
	return check_if_was;
}
void TabNull() {
	for (int i = 0; i < 50; i++) {
		tablica[i] = 0;
	}
	int incremnet = 0;
	check_if_was = false;
}

int main()
{

	int choice1 = 0;
	while (choice1 != 3) {
		system("cls");
		Menu menu1;
		int _count = menu1.Check_Line();
		menu1.Draw_Menu(_count);
		cin >> choice1;
		
		switch (choice1) {

		case 1:
		{	system("cls");
			
			int _count1 = menu1.Check_MiniLine();
			menu1.Draw_MiniMenu(_count1);
			int choice2;
			int p = 0;
			do {
				if (p > 0) cout << " Wprowadzono nieprawidlowa wartosc " << endl;
				cout << " Wybierz: ";
				cin >> choice2;
				p++;

			} while (((choice2) < 1) || ((choice2)) > 12);
			////Co wiesz o wspolbratach
			if (choice2 == 1) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Co wiesz o wspolbratach.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Co_Wiesz;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			/////Panswa miasta
			if (choice2 == 2) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Panstwa miasta.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Panstwa;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			/////Marvel
			if (choice2 == 3) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Marvel.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Marvel;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			//////Podchwytliwe
			if (choice2 == 4) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Podchwytliwe.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Podchwytliwe;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			/////////Lektury
			if (choice2 == 5) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Lektury.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Lektury;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			///Fizyka
			if (choice2 == 6) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Fizyka.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Fizyka;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			///Gry
			if (choice2 == 7) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Gry.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Gry;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			///Informatyka
			if (choice2 == 8) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Informatyka.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Informatyka;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			if (choice2 == 9) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Historia.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Historia;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			if (choice2 == 10) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Jezyki obce.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Jezyk_ob;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			if (choice2 == 11) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Jezyk ojczysty.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Jezyk_oj;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			if (choice2 == 12) {
				system("cls");
				int allpoints = 0; //liczik pkt
				int question_number = 0;
				std::fstream file1("Ekstraklasa.txt");//policzenie elementow w celu alokacji tablicy Category
				std::fstream *pointer = &file1;
				int count = Count_Line(*pointer);
				Category **category2 = new Category*[count];

				for (int i = 0; i < count; i++) {
					category2[i] = new Ekstraklasa;
					question_number = category2[i]->Random_Question(count);
					while (1) {
						if (Check(question_number) == true)
							question_number = category2[i]->Random_Question(count);
						else
							break;
					}
					category2[i]->Load_Question(question_number);
					category2[i]->Draw_Question();
					category2[i]->Check_Answer();
					if (category2[i]->Return_Points() == 0) //Warunek odpowiadajacy za przerwanie pracy programu w wypadku udzielenia blednej odpowiedzi
						break;
					allpoints += category2[i]->Return_Points();
				}
				file1.close();
				TabNull();
				delete[] category2;
				cout << "Punkty: " << allpoints << endl;
				system("PAUSE");
			}
			break;
		}
		case 2:
			cout << "Ranking" << endl<<"Ranking w budowie!!!"<<endl;
			system("PAUSE");
			break;
		case 3:
			cout << "Koniec programu!" << endl;
			system("PAUSE");
			break;
		default: cout << "Wybierz poprawny zakres:"<<endl;
			system("PAUSE");
			break;
		}
	}
	getchar();
	
    return 0;
}

