#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

#include "Realization.cpp"

int main()
{
	Screen_for_projector First;
	Screen_for_projector Sec(5, 7, "Sony", "On wall", "Ferum", 12, 220, "Vasya");
	Screen_for_projector Third(6, 5, "LG", "On ceiling", "Plastic", 15, 180, "Makaron");

	cout << "Height:" << First.getHeight() << endl;
	cout << "Width:" << First.getWidth() << endl;
	cout << "Creator:" << First.getCreator() << endl;
	cout << "Type of kriplenya:" << First.getType_of_kriplenya() << endl;
	cout << "Material:" << First.Material << endl;
	cout << "Length:" << First.Length << endl;
	cout << "Power:" << First.getPower() << endl;
	cout << "Owner:" << First.getOwner() << endl;

	cout << endl;

	cout << "Height:" << Sec.getHeight() << endl;
	cout << "Width:" << Sec.getWidth() << endl;
	cout << "Creator:" << Sec.getCreator() << endl;
	cout << "Type of kriplenya:" << Sec.getType_of_kriplenya() << endl;
	cout << "Material:" << Sec.Material << endl;
	cout << "Length:" << Sec.Length << endl;
	cout << "Power:" << Sec.getPower() << endl;
	cout << "Owner:" << Sec.getOwner() << endl;

}
