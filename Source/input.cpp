#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include "formula.h"
#include "input.h"
#define PI 3.14159265359

void errorInputA() {

	if (!std::cin) // or if(cin.fail())
	{
		// user didn't input a number
		std::cin.clear(); // reset failbit
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
																			// next, request user reinput
		std::cout << "Please re-enter a number: ";
		std::cin >> a;
	}

}

void errorInputB() {

	if (!std::cin) // or if(cin.fail())
	{
		// user didn't input a number
		std::cin.clear(); // reset failbit
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
																			// next, request user reinput
		std::cout << "Please re-enter a number: ";
		std::cin >> b;
	}

}

void errorInputC() {

	if (!std::cin) // or if(cin.fail())
	{
		// user didn't input a number
		std::cin.clear(); // reset failbit
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
																			// next, request user reinput
		std::cout << "Please re-enter a number: ";
		std::cin >> c;
	}

}


void confirmVector1() {

	std::cout << "Press [c] to confirm or any other key to enter another vector: ";
	std::string firstvector;
	std::cin >> firstvector;
	std::cout << std::endl;
	if (firstvector != "c") {
		getInputVector1(a, b, c);
	}

}


void getInputVector1(double &a, double &b, double &c) {

	std::cout << "Please enter the first vector coordinates (a,b,c):" << std::endl;
	std::cout << "a: ";
	std::cin >> a;
	errorInputA();
	std::cout << "b: ";
	std::cin >> b;
	errorInputB();
	std::cout << "c: ";
	std::cin >> c;
	errorInputC();
	std::cout << std::endl;

	confirmVector1();

}


void confirmVector2() {

	std::cout << "Press [c] to confirm or any other key to enter another vector: ";
	std::string secondvector;
	std::cin >> secondvector;
	std::cout << std::endl;
	if (secondvector != "c") {
		getInputVector2(d, e, f);
	}

}


void getInputVector2(double &d, double &e, double &f) {

	std::cout << "Please enter the second vector coordinates (d,e,f);" << std::endl;
	std::cout << "d: ";
	std::cin >> d;
	std::cout << "e: ";
	std::cin >> e;
	std::cout << "f: ";
	std::cin >> f;
	std::cout << std::endl;

	confirmVector2();
}


void confirmVector3() {

	std::cout << "Press [c] to confirm or any other key to enter another vector: ";
	std::string thirdvector;
	std::cin >> thirdvector;
	std::cout << std::endl;
	if (thirdvector != "c") {
		getInputVector3(a, b, c);
	}

}


void getInputVector3(double &g, double &h, double &i) {

	std::cout << "Please enter the second vector coordinates (g,h,i);" << std::endl;
	std::cout << "g: ";
	std::cin >> g;
	std::cout << "h: ";
	std::cin >> h;
	std::cout << "i: ";
	std::cin >> i;
	std::cout << std::endl;

	confirmVector3();

}


void confirmMagnitude() {

	std::cout << "Press [c] to confirm or any other key to enter another vector: ";
	std::string magnitude;
	std::cin >> magnitude;
	std::cout << std::endl;
	if (magnitude != "c") {
		getInputVector3(a, b, c);
	}
}


void getInputMagnitude(double &a, double &b, double&c) {

	std::cout << "Please enter the magnitudes of vectors a and b as well as the angle between them." << std::endl;
	std::cout << "|A|: ";
	std::cin >> a;
	std::cout << "|B|: ";
	std::cin >> b;
	std::cout << "Angle (degree): ";
	std::cin >> c;
	std::cout << std::endl;

	confirmMagnitude();

}


void confirmAngle() {

	std::cout << "Press [c] to confirm or any other key to enter another vector: ";
	std::string angle;
	std::cin >> angle;
	std::cout << std::endl;
	if (angle != "c") {
		getInputVector3(a, b, c);
	}

}


void getInputAngle(double &a, double &b, double &c) {

	std::cout << "Please enter the magnitudes of vectors a and b as well as their dot product." << std::endl;
	std::cout << "|A|: ";
	std::cin >> a;
	std::cout << "|B|: ";
	std::cin >> b;
	std::cout << "Dot Product: ";
	std::cin >> c;
	std::cout << std::endl;

	confirmAngle();

}
