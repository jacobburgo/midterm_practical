#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Question {
public:
	static vector<string> questions;
	static vector<string> answerSetA;
	static vector<string> answerSetB;
	static vector<string> answerSetC;
	static vector<string> answerSetD;

	static string RenderQuestion(int number, string questions[4]);
	string RenderAnswersA(int number, string answerSetA[4]);
	string RenderAnswersB(int number, string answerSetB[4]);
	string RenderAnswersC(int number, string answerSetC[4]);
	string RenderAnswersD(int number, string answerSetD[4]);
};

