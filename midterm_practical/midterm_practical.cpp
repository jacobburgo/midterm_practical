#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	srand(time(0));
	bool correctAnswer = true;
	bool skipIt = false;
	bool continueQuestion = true;
	vector<string> questions = { "What is the capital of New York?\n", "What is your name?\n", "How many pounds of plastic are dumped into the ocean every year?\n", "What number am I thinking of?\n" };
	vector<string> answers0 = { "1. Albany\n", "2. New York City\n", "3. Newest York\n", "4. Buffalo\n" };
	vector<string> answers1 = { "1. John\n", "2. Jacob\n", "3. Francis\n", "4. \"IT DOESN'T MATTER WHAT YOUR NAME IS!!\n" };
	vector<string> answers2 = { "1. None\n", "2. 9,500,000,000\n", "3. 33,000,000,000\n", "4. 56,000,000,000\n" };
	vector<string> answers3 = { "1. 45\n", "2. 7\n", "3. 88\n", "4. 124567568798\n" };
	while (true) {
		int decide = -1;
		cout << "Would you like to answer a question?\n";
		cout << "1. Yes\n";
		cout << "2. No\n";
		if (cin >> decide) {
			if (decide == 1) {
				skipIt = true;
				continueQuestion = true;
			} else if (decide == 2) {
				break;
			} else {
				continue;
			}
		}

		while (continueQuestion && skipIt) {
			int displayQuestion = (int)rand() % 4 + 1;
			switch (displayQuestion) {
			case 1:
				cout << questions[0];
				for (int i = 0; i < 4; i++) {
					cout << answers0[i];
				}
				break;
			case 2:
				cout << questions[1];
				for (int i = 0; i < 4; i++) {
					cout << answers1[i];
				}
				break;
			case 3:
				cout << questions[2];
				for (int i = 0; i < 4; i++) {
					cout << answers2[i];
				}
				break;
			case 4:
				cout << questions[3];
				for (int i = 0; i < 4; i++) {
					cout << answers3[i];
				}
				break;
			default:
				break;
			}
			while (continueQuestion) {
				int selection = -1;
				cout << "Please enter your answer's number\n";
				if (cin >> selection) {
					cin.ignore(INT_MAX, '\n');
					if (selection > 0 && selection <= 4) {
						switch (selection) {
						case 1:
							if (displayQuestion == 1) {
								cout << "Correct!!!\n";
								continueQuestion = false;
							} else if (displayQuestion == 2) {
								cout << "InCorrect! Try again!\n";
							} else if (displayQuestion == 3) {
								cout << "InCorrect! Try again!\n";
							} else {
								cout << "InCorrect! Try again!\n";
							}
							break;
						case 2:
							if (displayQuestion == 1) {
								cout << "InCorrect! Try again!\n";
							} else if (displayQuestion == 2) {
								cout << "InCorrect! Try again!\n";
							} else if (displayQuestion == 3) {
								cout << "InCorrect! Try again!\n";
							} else {
								cout << "Correct!!!\n";
								continueQuestion = false;
							}
							break;
						case 3:
							if (displayQuestion == 1) {
								cout << "InCorrect! Try again!\n";
							} else if (displayQuestion == 2) {
								cout << "InCorrect! Try again!\n";
							} else if (displayQuestion == 3) {
								cout << "Correct!!!\n";
								continueQuestion = false;
							} else {
								cout << "InCorrect! Try again!\n";
							}
							break;
						case 4:
							if (displayQuestion == 1) {
								cout << "InCorrect! Try again!\n";
							} else if (displayQuestion == 2) {
								cout << "Correct!!!\n";
								continueQuestion = false;
							} else if (displayQuestion == 3) {
								cout << "InCorrect! Try again!\n";
							} else {
								cout << "InCorrect! Try again!\n";
							}
							break;
						default:
							break;
						}
					} else cout << "Incorrect input\n\n";
				} else {
					cout << "Incorrect input\n\n";
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
			}
		}
	}
}
