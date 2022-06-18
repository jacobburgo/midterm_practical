#include "Question.h"
#include <iostream>
#include <string>
using namespace std;

static string RenderQuestion(int number) {
	Question::questions = { "What is the capital of New York?", "Who is the president of the United States?", "What is your name?", "How many pounds of plastic are dumped into the ocean every year?" };
	switch (number) {
	case 1:
		return Question::questions[0];
	case 2:
		return Question::questions[1];
	case 3:
		return Question::questions[2];
	case 4:
		return Question::questions[3];
	default:
		break;
	}
}
string RenderAnswersA(int number) {
	Question::answerSetA = { "Rochester", "Buffalo", "New York City", "Albany" };
	for (int i = 0; i < 5; i++) {
		cout << Question::answerSetA[i] << '\n';
	}
}
string RenderAnswersB(int number) {
	Question::answerSetB = { "Donald Trump", "Joe Biden", "Barrock Obama", "George H. W. Bush" };
	for (int i = 0; i < 5; i++) {
		cout << Question::answerSetB[i] << '\n';
	}
}
string RenderAnswersC(int number) {
	Question::answerSetC = { "John", "Jacob", "Francis", "\"IT DOESN'T MATTER WHAT YOUR NAME IS\"" };
	for (int i = 0; i < 5; i++) {
		cout << Question::answerSetC[i] << '\n';
	}
}
string RenderAnswersD(int number) {
	Question::answerSetD = { "Climate change is fake news.", "33,000,000,000", "12,000,000,000", "58,000,000,000" };
	for (int i = 0; i < 5; i++) {
		cout << Question::answerSetD[i] << '\n';
	}
}
