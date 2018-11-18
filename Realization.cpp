#include "Header.h"

int Screen_for_projector::getHeight() {
	return Height;
}

string Screen_for_projector::getCreator() {
	return Creator;
}

int Screen_for_projector::getWidth() {
	return Width;
}

string Screen_for_projector::getType_of_kriplenya() {
	return Type_of_kriplenya;
}

string Screen_for_projector::getOwner() {
	return Owner;
}

int Screen_for_projector::getPower() {
	return Power;
}

Screen_for_projector::Screen_for_projector(int h, int w, string c, string t, string m, int l, int p, string o) :
	Height(h),
	Width(w),
	Creator(c),
	Type_of_kriplenya(t),
	Material(m),
	Length(l),
	Power(p),
	Owner(o)
{
}

Screen_for_projector::Screen_for_projector() :
	Height(20),
	Width(2),
	Creator("Panasonic"),
	Type_of_kriplenya("None"),
	Material("Plastic"),
	Length(15),
	Power(220),
	Owner("Me")
{}

Screen_for_projector::~Screen_for_projector() {
	cout << "Yep" << endl;
}