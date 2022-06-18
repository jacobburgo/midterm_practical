#include <iostream>

int RenderQuestion();

int main() {
	while (true) {
		int selection = RenderQuestion();
		switch (selection) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}
	}
}

int RenderQuestion() {
	int answer = -1;
	while (true) {
		if (std::cin >> answer) {
			std::cin.ignore(INT_MAX, '\n');
			if (answer > 0 && answer < 5) {
				break;
			} else std::cout << "Incorrect input\n\n";
		} else {
			std::cout << "Incorrect input\n\n";
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
	}
	return answer;
}
