// SelectionrepJoshuaToppFinal2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
using namespace std;

int main()
{

	float firstDigit;
	std::cout << "What is the first digit in your claculation: ";
	std::cin >> firstDigit;
	std::string operand;
	std::cout << "What is the operand of your calculation (* or + or - or /): ";
	std::cin >> operand;
	float secondDigit;
	std::cout << "What is the second digit of your operation: ";
	std::cin >> secondDigit;
	if (operand == "+") {
		std::cout << firstDigit << "+" << secondDigit << " = " << firstDigit + secondDigit;
	}
	else if (operand == "-") {
		std::cout << firstDigit << "-" << secondDigit << " = " << firstDigit - secondDigit;
	}
	else if (operand == "/" && secondDigit != 0) {
		std::cout << firstDigit << " / " << secondDigit << " = " << firstDigit / secondDigit;
	}
	else if (operand == "/" && secondDigit == 0) {
		std::cout << "Please enter a valid denominator next time : ";
		main();
	}
	else if (operand == "*") {
		std::cout << firstDigit << "*" << secondDigit << " = " << firstDigit * secondDigit;
	}
	else if (operand != "+" || "*" || "+" || "-") {
		std::cout << "Please enter a valid operand : ";
		main();
	}


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
