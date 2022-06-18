#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Question {
public:
	string questions[4] = { "What is the capital of New York?", "Who is the president of the United States?", "What is your name?", "How many pounds of plastic are dumped into the ocean every year?" };
	string answerSetA[4] = { "Rochester", "Buffalo", "New York City", "Albany" };
	string answerSetB[4] = { "Donald Trump", "Joe Biden", "Barrock Obama", "George H. W. Bush" };
	string answerSetC[4] = { "John", "Jacob", "Francis", "\"IT DOESN'T MATTER WHAT YOUR NAME IS\"" };
	string answerSetD[4] = { "Climate change is fake news.", "33,000,000,000", "12,000,000,000", "58,000,000,000" };

	string RenderQuestion(int number, string questions[4]);
	string RenderAnswersA(int number, string answerSetA[4]);
	string RenderAnswersB(int number, string answerSetB[4]);
	string RenderAnswersC(int number, string answerSetC[4]);
	string RenderAnswersD(int number, string answerSetD[4]);
};

