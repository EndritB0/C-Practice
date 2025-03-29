#include <iostream>
#include <ctime>
#include <iomanip>
#include "Headers/Tutorial 21-30.h"

int AREA = 12;

void task21() {
	for (int i = 0; i <= 20; i++)
	{
		if (i == 10) {
			continue;
		}
		std::cout << i << std::endl;
	}
}

void task22() {
	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			std::cout << "x: " << i << ", y: " << j << std::endl;
		}
	}
}

void task23() {
	srand(time(NULL));

	//rolling a dice
	int num = (rand() % 6) + 1;
	std::cout << num << std::endl;
}

void task24() {
	srand(time(0));

	int num = rand() & 5 + 1;

	switch (num) {
	case 2:
		std::cout << "You got " << num << ", you won" << std::endl;
		break;
	default:
		std::cout << "You got " << num << ", you lost" << std::endl;
		break;
	}
}

void task25() {
	int num, guess;
	int tries = 0;

	srand(time(0));

	num = rand() % 100 + 1;

	do {
		std::cout << "Enter a guess between (1-100): ";
		std::cin >> guess;
		tries++;

		if (guess < num)
		{
			std::cout << "Your guess is to small" << std::endl;
		}
		else if (guess > num)
		{
			std::cout << "Your guess is to large" << std::endl;
		}
		else {
			std::cout << "You guessed correct, took you " << tries << " tries." << std::endl;
		}
	} while (guess != num);
}

void task26(std::string name, int age) {
	std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl;
}

double task27(int length) {
	return length * length;
}
void task28() {
	std::cout << "normal task 28 function" << std::endl;
}

void task28(int age) {
	std::cout << age << "overloaded function of task 28" << std::endl;
}

void task29() {
	int AREA = 21;
	std::cout << ::AREA << " This is a global variable" << std::endl;
	std::cout << AREA << " This is a local variable" << std::endl;
}

void showBalance(double balance) {
	std::cout << "Your Balance is $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit() {
	double amount = 0;
	std::cout << "Amount to deposit: $";
	std::cin >> amount;

	if (amount > 0)
	{
		return amount;
	}
	else {
		std::cout << "Deposit can not be negative" << std::endl;
		return 0;
	}
}

double withdraw(double balance) {
	double amount = 0;

	std::cout << "Enter amount to be withdrawn: " << std::endl;
	std::cin >> amount;

	if (amount < 0)
	{
		std::cout << "Deposit can not be negative" << std::endl;
		return 0;
	}
	else if (amount > balance) {
		std::cout << "Insufficient Funds" << std::endl;
		return 0;
	}

	return amount;
}

void task30() {
	double balance = 0;
	int choice = 0;

	while (true)
	{
		std::cout << "[1] Show Balance" << std::endl;
		std::cout << "[2] Deposit Balance" << std::endl;
		std::cout << "[3] Withdraw Balance" << std::endl;
		std::cout << "[4] Exit" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			showBalance(balance);
			break;
		case 2:
			balance += deposit();
			break;
		case 3:
			balance -= withdraw(balance);
			break;
		case 4:
			std::cout << "Thanks for being here!" << std::endl;
			return;
		default:
			std::cout << "Incorrect input" << std::endl;
			break;
		}
	}
}