#pragma once

class screenForProjector
{
private:
	int corpusHeight;
	int corpusWidth;
	string projectorCreator;
	string typeOfBracing;

public:
	int getHeight();
	string getCreator();
	int getWidth();
	string getTypeOfBracing();
	string getOwner();
	int getPower();

	ScreenForProjector(int height, int width, string creator, string type, string material, int length, int power, string owner);
	ScreenForProjector();
	~ScreenForProjector();

	string corpusMaterial;
	int corpusLength;

protected:
	int projectorPower;
	string projectorOwner;
};