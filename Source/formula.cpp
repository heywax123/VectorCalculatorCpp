#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include "formula.h"
#include "input.h"
#define PI 3.14159265359

double a, b, c, d, e, f, g, h, i;

double crossVec(double a, double b, double c, double d, double e, double f) {

	double x;
	x = b * f - e * c;
	double y;
	y = c * d - f * a;
	double z;
	z = a * e - d * b;

	std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
	return 0;

}


double crossAbsolute(double a, double b, double c, double d, double e, double f) {

	double x;
	x = b * f - c * e;
	double y;
	y = c * d - a * f;
	double z;
	z = a * e - b * d;

	double n;
	n = x * x + y * y + z * z;
	return sqrt(n);



}


double crossMag(double a, double b, double c) {

	double d;
	d = sin(c*PI / 180);
	return a * b*d;

}


double dotVec(double a, double b, double c, double d, double e, double f) {

	return a * d + b * e + c * f;

}


double dotMag(double a, double b, double c) {

	double d;
	d = cos(c*PI / 180);
	return a * b*d;

}


double dotBeta(double a, double b, double c) {

	double d;
	d = a * b;
	double e;
	e = c / d;
	double f;
	f = acos(e);
	return (180 / PI)*f;

}


double volPar(double a, double b, double c, double d, double e, double f, double g, double h, double i) {

	double m;
	m = b * f - c * e;
	double n;
	n = c * d - a * f;
	double o;
	o = a * e - b * d;
	double x;
	x = g * m;
	double y;
	y = h * n;
	double z;
	z = i * o;

	return fabs(x + y + z);

}


double scalPro(double a, double b, double c, double d, double e, double f) {

	double g;
	g = a * d + b * e + c * f;
	double j;
	j = d * d + e * e + f * f;
	double l;
	l = sqrt(j);
	return g / l;


}


void vecPro(double a, double b, double c, double d, double e, double f) {

	double g;
	g = a * d + b * e + c * f;
	double i;
	i = d * d + e * e + f * f;
	double j;
	j = g / i;
	double k;
	k = j * d;
	double l;
	l = j * e;
	double m;
	m = j * f;

	std::cout << "The vector projection of the first scalar on the second vector is: (" << k << "," << l << "," << m << ")" << std::endl;

}


void help(double &a) {

	std::cout << "Welcome to Help! " << std::endl << std::endl;

	std::cout << "This program is designed so you can do dot product, cross product, or the application of these." << std::endl << std::endl;
	std::cout << "Dot product can find the angle between vectors or find the dot product through vectors or magnitudes, you will be asked to confirm the correct entry of them during each step." << std::endl;
	std::cout << "Cross product can be done through vectors or through magnitudes, however this will result in a magnitude, not vector." << std::endl;
	std::cout << "In applications there are various options, you will be asked to confirm the steps that you have selected." << std::endl << std::endl;
	std::cout << "In general, you will be asked to confirm the step you have taken periodically. Once you have finished one calculation you will be prompted to go back the MAIN SCREEN or exit." << std::endl << std::endl;


}


void credits(double &a) {

	std::cout << "A program that was written by Nirosh Ratnarajah, a University of Waterloo Computer Engineering (2023) student; program written while a Grade 12 student at Mentor College. " << std::endl;
	std::cout << "2017-18" << std::endl << std::endl;


}
