#include "stdafx.h"
#include "Guest.h"

void  guest::die() 
{
	string name = getName();
	cout << name << " has died" << endl;
}