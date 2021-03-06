// Vector_Calculator.cpp : Defines the entry point for the console application.
// My name is Nirosh Ratnarajah and I do not approve this message :) 


#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include "formula.h"
#include "input.h" 
#define PI 3.14159265359


int main() {
	std::cout << "Welcome to the Dot Product, Cross Product, and Applications Calculator." << std::endl << std::endl;
mainSCREEN:
	std::cout << "MAIN SCREEN" << std::endl;
	char dotcrossapp;
	std::cout << "Select Dot Product [1], Cross Product [2], Application [3] or Help [4]: ";
	std::cin >> dotcrossapp;
	std::cout << std::endl;

	// Intialization of options inside dotcrossapp
	std::string dot;
	std::string cross;
	std::string app;
	std::string applications;
	std::string error;

	do {


		switch (dotcrossapp) {

		case '1':	// Dot Product

			std::cout << "You have selected Dot Product." << std::endl << std::endl;
		dotMain:
			std::cout << "Do you have the vectors [v] or magnitudes and directions [m] or find the angle [b]? [v/m/b] ";
			std::cin >> dot;

			if (dot == "v") {

				getInputVector1(a, b, c);
				getInputVector2(d, e, f);
				std::cout << "The dot product of vectors (" << a << "," << b << "," << c << ") and (" << d << "," << e << "," << f << ") is: ";
				std::cout << dotVec(a, b, c, d, e, f) << std::endl;
				break;

			}   // Dot product using vectors
			else if (dot == "m") {

				getInputMagnitude(a, b, c);
				std::cout << "The dot product of these magnitudes is: ";
				std::cout << dotMag(a, b, c) << std::endl;
				break;

			}	// Dot product using magnitudes
			else if (dot == "b") {

				getInputAngle(a, b, c);
				std::cout << "The angle between vectors a and b is : ";
				std::cout << dotBeta(a, b, c) << std::endl;
				break;

			}	// Using the dot product and angle to find the angle
			else {

				std::cout << std::endl << "Invalid input." << std::endl << std::endl;

				std::cout << "Back to Dot Product [1], MAIN SCREEN [m], or hit any other key to proceed to the end: ";
				std::cin >> error;
				std::cout << std::endl << std::endl;

				if (error == "1") {
					goto dotMain;
				}

				else if (error == "m") {
					goto mainSCREEN;
				}

				else {
					break;
				}

			}	// User error

		case '2':	// Cross Product 

			std::cout << "You have selected Cross Product." << std::endl << std::endl;
		crossMain:
			std::cout << "Do you have the vectors to produce a perpindicular vector [v] or to produce an magnitude with vectors [va] or magnitudes or directions [m]? [v/va/m] ";
			std::cin >> cross;

			if (cross == "v") {

				getInputVector1(a, b, c);
				getInputVector2(d, e, f);
				std::cout << "The cross product of vectors (" << a << "," << b << "," << c << ") and (" << d << "," << e << "," << f << ") is: ";
				crossVec(a, b, c, d, e, f);
				break;

			}	 // Cross product using vectors
			else if (cross == "va") {

				getInputVector1(a, b, c);
				getInputVector2(d, e, f);
				std::cout << "The magnitude of the cross product of vectors (" << a << "," << b << "," << c << ") and (" << d << "," << e << "," << f << ") is: ";
				std::cout << crossAbsolute(a, b, c, d, e, f) << std::endl;
				break;

			}   // Cross product magnitudes using vectors
			else if (cross == "m") {

				getInputMagnitude(a, b, c);
				std::cout << "The magnitude of the cross product is: ";
				std::cout << crossMag(a, b, c) << std::endl;
				break;

			}	  // Cross product magnitudes using magnitudes
			else {

				std::cout << std::endl << "Invalid input." << std::endl << std::endl;

				std::cout << "Back to Cross Product [2], MAIN SCREEN [m], or hit any other key to proceed to the end: ";
				std::cin >> error;
				std::cout << std::endl << std::endl;

				if (error == "2") {
					goto crossMain;
				}

				else if (error == "m") {
					goto mainSCREEN;
				}

				else {
					break;
				}

			}	// User error

		case '3':	// Applications 

			std::cout << "You have selected Applications." << std::endl << std::endl;
		appMain:
			std::cout << "1) Area of a Parallelogram" << std::endl;
			std::cout << "2) Area of a Triangle" << std::endl;
			std::cout << "3) Volume of a Parallelpiped" << std::endl;
			std::cout << "4) Scalar Projections" << std::endl;
			std::cout << "5) Vector Projections" << std::endl;
			std::cout << "6) Work" << std::endl;
			std::cout << "7) Torque" << std::endl << std::endl;
			std::cout << "Select your application problem [1/2/3/4/5/6/7]: ";
			std::cin >> app;	// number in if/if else corresponds with number posted in 'Applications
			std::cout << std::endl;

			if (app == "1") {

				std::cout << "You have selected the Area of a Parallelogram." << std::endl << std::endl;
			areaParallelogram:
				std::cout << "Do you have the vectors [v] or magnitudes and directions [m]? [v/m] ";
				std::cin >> applications;

				if (applications == "v") {

					getInputVector1(a, b, c);
					getInputVector2(d, e, f);
					std::cout << "The area of this parallelogram is: ";
					std::cout << fabs(crossAbsolute(a, b, c, d, e, f)) << "u^2" << std::endl;
					break;

				}
				else if (applications == "m") {

					getInputMagnitude(a, b, c);
					std::cout << "The area of this parallelogram is: ";
					std::cout << fabs(crossMag(a, b, c)) << "u^2" << std::endl;
					break;

				}
				else {

					std::cout << std::endl << "Invalid input." << std::endl << std::endl;

					std::cout << "Back to Area of a Parallelogram [1], Applications [a], MAIN SCREEN [m], or hit any other key to proceed to the end: ";
					std::cin >> error;
					std::cout << std::endl << std::endl;

					if (error == "1") {
						goto areaParallelogram;
					}

					else if (error == "a") {
						goto appMain;
					}

					else if (error == "m") {
						goto mainSCREEN;
					}

					else {
						break;
					}

				}

			}
			else if (app == "2") {

				std::cout << "You have selected the Area of a Triangle." << std::endl << std::endl;
			areaTriangle:
				std::cout << "Do you have the vectors [v] or magnitudes and directions [m]? [v/m] ";
				std::cin >> applications;

				if (applications == "v") {

					getInputVector1(a, b, c);
					getInputVector2(d, e, f);
					std::cout << "The area of this triangle is: ";
					std::cout << fabs(0.5*crossAbsolute(a, b, c, d, e, f)) << "u^2" << std::endl;
					break;

				}
				else if (applications == "m") {

					getInputMagnitude(a, b, c);
					std::cout << "The area of this triangle is: ";
					std::cout << fabs(0.5*crossMag(a, b, c)) << "u^2" << std::endl;
					break;

				}
				else {

					std::cout << std::endl << "Invalid input." << std::endl << std::endl;

					std::cout << "Back to Area of a Parallelogram [2], Applications [a], MAIN SCREEN [m], or hit any other key to proceed to the end: ";
					std::cin >> error;
					std::cout << std::endl << std::endl;

					if (error == "2") {
						goto areaTriangle;
					}

					else if (error == "a") {
						goto appMain;
					}

					else if (error == "m") {
						goto mainSCREEN;
					}

					else {
						break;
					}

				}

			}
			else if (app == "3") {

				std::cout << "You have selected the Volume of a Parallelpiped." << std::endl << std::endl;
				getInputVector1(a, b, c);
				getInputVector2(d, e, f);
				getInputVector3(g, h, i);
				std::cout << "The volume of the parallelpiped is: ";
				std::cout << volPar(a, b, c, d, e, f, g, h, i) << "u^3" << std::endl;
				break;

			}
			else if (app == "4") {

				std::cout << "You have selected Scalar Projections (order of vectors matters)." << std::endl << std::endl;
				getInputVector1(a, b, c);
				getInputVector2(d, e, f);
				std::cout << "The scalar projection of the first vector on the second vector is:";
				std::cout << scalPro(a, b, c, d, e, f) << std::endl;
				break;

			}
			else if (app == "5") {

				std::cout << "You have selected Vector Projections (order of vectors matters)." << std::endl << std::endl;
				getInputVector1(a, b, c);
				getInputVector2(d, e, f);
				vecPro(a, b, c, d, e, f);
				break;

			}
			else if (app == "6") {

				std::cout << "You have selected Work." << std::endl << std::endl;
			workMain:
				std::cout << "Do you have the vectors [v] or magnitudes and directions [m]? [v/m] ";
				std::cin >> applications;

				if (applications == "v") {

					getInputVector1(a, b, c);
					getInputVector2(d, e, f);
					std::cout << "The work done is: ";
					std::cout << dotVec(a, b, c, d, e, f) << " Newtons" << std::endl;
					break;

				}
				else if (applications == "m") {

					getInputMagnitude(a, b, c);
					std::cout << "The work done is: ";
					std::cout << dotMag(a, b, c) << " Newtons" << std::endl;
					break;

				}
				else {

					std::cout << std::endl << "Invalid input." << std::endl << std::endl;

					std::cout << "Back to Work [6], Applications [a], MAIN SCREEN [m], or hit any other key to proceed to the end: ";
					std::cin >> error;
					std::cout << std::endl << std::endl;

					if (error == "6") {
						goto workMain;
					}

					else if (error == "a") {
						goto appMain;
					}

					else if (error == "m") {
						goto mainSCREEN;
					}

					else {
						break;
					}

				}

			}
			else if (app == "7") {

				std::cout << "You have selected Torque." << std::endl << std::endl;
			torqueMain:
				std::cout << "Do you have the vectors [v] or magnitudes and directions [m]? [v/m] ";
				std::cin >> applications;

				if (applications == "v") {

					getInputVector1(a, b, c);
					getInputVector2(d, e, f);
					std::cout << "The torque is: ";
					std::cout << crossAbsolute(a, b, c, d, e, f) << " Joules" << std::endl;
					break;

				}
				else if (applications == "m") {

					getInputMagnitude(a, b, c);
					std::cout << "The torque is: ";
					std::cout << crossMag(a, b, c) << " Joules" << std::endl;
					break;

				}
				else {

					std::cout << std::endl << "Invalid input." << std::endl << std::endl;

					std::cout << "Back to Torque [7], Applications [a], MAIN SCREEN [m], or hit any other key to proceed to the end: ";
					std::cin >> error;
					std::cout << std::endl << std::endl;

					if (error == "7") {
						goto torqueMain;
					}

					else if (error == "a") {
						goto appMain;
					}

					else if (error == "m") {
						goto mainSCREEN;
					}

					else {
						break;
					}

				}

			}
			else {

				std::cout << std::endl << "Invalid input." << std::endl << std::endl;

				std::cout << "Back to Applications [3], MAIN SCREEN [m], or hit any other key to proceed to the end: ";
				std::cin >> error;
				std::cout << std::endl << std::endl;

				if (error == "3") {
					goto appMain;
				}
				else if (error == "m") {
					goto mainSCREEN;
				}
				else {
					break;
				}

			}

		case '4':	// Help menu 

			help(a);
			break;

		case '0':	// Welcome to the credits menu ft. Nirosh 

			credits(a);
			break;

		default:	// This will lead to the end of the do-while function and will lead to a return to the main screen 

			std::cout << "Invalid input." << std::endl;
			std::cout << std::endl;
			break;

		}


	} while (dotcrossapp == 1 && dotcrossapp == 2 && dotcrossapp == 3 && dotcrossapp == 4 && dotcrossapp == 0);

	// goto for returning back to the Main Screen 
	std::cout << "Press [m] to go back to the MAIN SCREEN or any other key to exit the program. ";
	std::string end;
	std::cin >> end;
	std::cout << std::endl;
	if (end != "m") {
		goto goEND;
	}
	else if (end == "m") {
		goto mainSCREEN;
	}

goEND:

	return 0;	// End Program

}
// My name is Nirosh Ratnarajah and I do not approve this message :)
