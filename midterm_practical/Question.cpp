#include "Question.h"
#include <iostream>
#include <string>
using namespace std;

string RenderQuestion(int number, string questions[4]) {
	switch (number) {
	case 1:
		return questions[0];
	case 2:
		return questions[1];
	case 3:
		return questions[2];
	case 4:
		return questions[3];
	default:
		break;
	}
}
string RenderAnswersA(int number, string answerSetA[4]) {
	for (int i = 0; i < 5; i++) {
		cout << answerSetA[i] << '\n';
	}
}
string RenderAnswersB(int number, string answerSetB[4]) {
	for (int i = 0; i < 5; i++) {
		cout << answerSetB[i] << '\n';
	}
}
string RenderAnswersC(int number, string answerSetC[4]) {
	for (int i = 0; i < 5; i++) {
		cout << answerSetC[i] << '\n';
	}
}
string RenderAnswersD(int number, string answerSetD[4]) {
	for (int i = 0; i < 5; i++) {
		cout << answerSetD[i] << '\n';
	}
}
