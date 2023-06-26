#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int tag;
	int monat;
	int weekDay;
	string jahr;

	string jahrFirst;
	string jahrLast;


	std::cout << "Gib mir einen Tag | ";
	std::cin >> tag;

	std::cout << "Gib mir einen Monat | ";
	std::cin >> monat;

	std::cout << "Gib mir einen Jahr | ";
	std::cin >> jahr;

	for (char x : jahr) {

		if (jahrFirst.size() < 2) {
			jahrFirst += x;
		}
		else {
			jahrLast += x;
		}
	}

	monat = (monat + 9) % 12 + 1;


	int first = std::stoi(jahrFirst);

	int last = std::stoi(jahrLast);

	if (monat == 11 || monat == 12) {
		if (last == 00) {
			last = 99;
		}
		else {
			last--;
		}
	}

	weekDay = (tag + std::stoi(to_string(((2.6 * monat) - 0.2))) + last + std::stoi(to_string((last / 4))) + std::stoi(to_string((first / 4))) - (2 * first)) % 7;


	switch (weekDay) {
	case 0:
		std::cout << "Sunday [So]";
		break;
	case 1:
		std::cout << "Monday [Mo]";
		break;
	case 2:
		std::cout << "Tuesday [Di]";
		break;
	case 3:
		std::cout << "Wednesday [Mi]";
		break;
	case 4:
		std::cout << "Thursday [Do]";
		break;
	case 5:
		std::cout << "Friday [Fr]";
		break;
	case 6:
		std::cout << "Saturday [Sa]";
		break;
	default:
		std::cout << "ERROR";
		break;
	}
}
