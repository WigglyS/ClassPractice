#include "stdafx.h"
#include "Denizen.h"

//constructor forces you to set these when you make a object
denizen::denizen(string name, float height, string location) 
{
	Mname = name;
	Mheight = height;
	Mlocation = location;
}

void denizen::talk(string stuff) 
{
	cout << Mname << " at " << Mlocation << "say :" << stuff << endl;

}
string denizen::getName() 
{
	return Mname;
}


