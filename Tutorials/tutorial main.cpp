#include <iostream>
#include "Headers/Tutorial 1-10.h"
#include "Headers/Tutorial 11-20.h"
#include "Headers/Tutorial 21-30.h"

void tut1() {
	// Tutorial 1-10
	tutorial();
	pythagoras();
}

void tut2() {
	// Tutorial 11-20
	task11();
	task12();
	task13();
	task14();
	task15();
	task16();
	task17();
	task18();
	task19();
	task20();
}

void tut3() {
	// Tutorial 21-30
	task21();
	task22();
	task23();
	task24();
	task25();
	task26("Endrit", 21);
	std::cout << "Square area: " << task27(21) << std::endl;
	task28();
	task29();
	task30();
}

int main() {
	//tut1();
	//tut2();
	tut3();

	return 0;
}