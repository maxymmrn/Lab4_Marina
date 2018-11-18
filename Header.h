#pragma once

class Screen_for_projector
{
private:
	int Height;
	int Width;
	string Creator;
	string Type_of_kriplenya;
public:
	int getHeight();
	string getCreator();
	int getWidth();
	string getType_of_kriplenya();
	string getOwner();
	int getPower();

	Screen_for_projector(int h, int w, string c, string t, string m, int l, int p, string o);
	Screen_for_projector();
	~Screen_for_projector();

	string Material;
	int Length;
protected:
	int Power;
	string Owner;
};