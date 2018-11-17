#pragma once
#include <iostream>
#include <vector>

using namespace std;
	class Category
	{
	protected:
		vector <int> randoms;
		string question;
		string answer_a;
		string answer_b;
		string answer_c;
		string answer_d;
		string true_answer;
		string answer_us;
		int points;
		int counter;
		int question_number;
	public:
		Category();
		~Category();
		virtual void Load_Question(int ) = 0;
		void Draw_Question();
		void Check_Answer();
		int Return_Points()const;
		int Random_Question(int count);
		string toUpper(string input);
	};


