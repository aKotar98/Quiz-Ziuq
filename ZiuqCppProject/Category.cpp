#include "stdafx.h"
#include "Category.h"
#include <iostream>
#include <string>
#include <time.h>
#include <algorithm>

using namespace std;

Category::Category()
{
}

Category::~Category()
{
}


void Category::Draw_Question()
{
	cout << endl << question << endl;
	cout << answer_a << endl;
	cout << answer_b << endl;
	cout << answer_c << endl;
	cout << answer_d << endl;
	cout << "------------------------------------------------------" << endl;
	
	int p = 0;
	do {
		if (p > 0) cout << " Wprowadzono niepoprawny znak! " << endl;
		cout << " Odpowiedz: ";
		cin >> answer_us;
		p++;
	} while ((toUpper(answer_us)[0] < 65) || (toUpper(answer_us)[0] > 68));


}
void Category::Check_Answer()
{
	points = 0;
	if (answer_us == true_answer) {
		points = 1;
	}
	if (toUpper(answer_us) == true_answer) {
		points = 1;
	}
}
int Category::Return_Points()const
{
	return points;
}

int Category::Random_Question(int count) {

	srand(time(NULL));
	
	int quantity = count;

	int random = ((std::rand() % quantity) + 1);
	
	return random;

}
string Category::toUpper(string input) {
	transform(input.begin(), input.end(), input.begin(), ::toupper);
	return input;
}
