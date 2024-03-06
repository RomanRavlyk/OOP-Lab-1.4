#include <iostream>
#include "Figures.h"

using namespace std;

Circle Create_Circle() {
	Circle circle;
	circle.Read();
	circle.CheckFunctions();
	circle.Display();
	return circle;
}

Square Create_Square() {
	Square square;
	square.Read();
	square.CheckFunctions();
	square.Display();
	return square;
}

Rectangle Create_Rectangle() {
	Rectangle rectangle;
	rectangle.Read();
	rectangle.CheckFunctions();
	rectangle.Display();
	return rectangle;
}

int main() {
	Circle circle = Create_Circle();
	Square square = Create_Square();
	Rectangle rectangle = Create_Rectangle();
	return 0;
}