#include "stdafx.h"
#include "Lektury.h"
#include <iostream>
#include <string>
#include <fstream>

Lektury::Lektury()
{
}

Lektury::~Lektury()
{
}

void Lektury::Load_Question(int question_number) {

	fstream file;
	file.open("Lektury.txt", ios::in);
	if (file.good() == false) {
		cout << "Nie udalo sie otworzyc pliku: " << endl;
		exit(0);
	}
	string line;


	int number_l = (question_number - 1) * 6 + 1;
	int actual_n = 1;


	while (getline(file, line)) {
		if (actual_n == number_l) question = line;
		if (actual_n == number_l + 1) answer_a = line;
		if (actual_n == number_l + 2) answer_b = line;
		if (actual_n == number_l + 3) answer_c = line;
		if (actual_n == number_l + 4) answer_d = line;
		if (actual_n == number_l + 5) true_answer = line;
		actual_n++;
	}
	file.close();

}