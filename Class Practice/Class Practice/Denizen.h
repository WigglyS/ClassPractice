#pragma once
#include "stdafx.h"

//denizen is base class / parent class
class denizen
{
public:
	//constructor forces you to enter things when you make something
	denizen(string name, float height, string location);
	void talk(string stuff);
	string getName();

private:
	string Mname;
	float Mheight;
	string Mlocation;

};
