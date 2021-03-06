#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

#include "ScreenForProjector.cpp"

int main()
{
	ScreenForProjector firstProjector;
	ScreenForProjector secProjector(5, 7, "Sony", "On wall", "Ferum", 12, 220, "Vasya");
	ScreenForProjector thirdProjector(6, 5, "LG", "On ceiling", "Plastic", 15, 180, "Makaron");

	cout << "Height:" << firstProjector.getHeight() << endl;
	cout << "Width:" << firstProjector.getWidth() << endl;
	cout << "Creator:" << firstProjector.getCreator() << endl;
	cout << "Type of kriplenya:" << firstProjector.getTypeOfBracing() << endl;
	cout << "Material:" << firstProjector.Material << endl;
	cout << "Length:" << firstProjector.Length << endl;
	cout << "Power:" << firstProjector.getPower() << endl;
	cout << "Owner:" << firstProjector.getOwner() << endl;

	cout << endl;

	cout << "Height:" << secProjector.getHeight() << endl;
	cout << "Width:" << secProjector.getWidth() << endl;
	cout << "Creator:" << secProjector.getCreator() << endl;
	cout << "Type of kriplenya:" << secProjector.getTypeOfBracing() << endl;
	cout << "Material:" << secProjector.Material << endl;
	cout << "Length:" << secProjector.Length << endl;
	cout << "Power:" << secProjector.getPower() << endl;
	cout << "Owner:" << secProjector.getOwner() << endl;

}
