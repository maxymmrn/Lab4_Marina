#include "ScreenForProjector.h"

int ScreenForProjector::getHeight() {
	return corpusHeight;
}

string ScreenForProjector::getCreator() {
	return projectorCreator;
}

int ScreenForProjector::getWidth() {
	return corpusWidth;
}

string ScreenForProjector::getTypeOfBracing() {
	return TypeOfBracing;
}

string ScreenForProjector::getOwner() {
	return projectorOwner;
}

int ScreenForProjector::getPower() {
	return projectorPower;
}

ScreenForProjector::ScreenForProjector(int height, int width, string creator, string type, string material, int length, int power, string owner) :
	corpusHeight(height),
	corpusWidth(width),
	projectorCreator(creator),
	typeOfBracing(type),
	corpusMaterial(material),
	corpusLength(lelgth),
	projectorPower(power),
	projectorOwner(owner)
{
}

ScreenForProjector::ScreenForProjector() :
	corpusHeight(20),
	corpusWidth(2),
	projectorCreator("Panasonic"),
	typeOfBracing("None"),
	corpusMaterial("Plastic"),
	corpusLength(15),
	projectorPower(220),
	projectorOwner("Me")
{}

ScreenForProjector::~ScreenForProjector() {
	cout << "Yep" << endl;
}