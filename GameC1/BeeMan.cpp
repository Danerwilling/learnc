#include "BeeMan.h"
#include <iostream>
#include <string>

BeeMan::BeeMan()
{
}


BeeMan::~BeeMan()
{
}

void BeeMan::fire(int x, int y, int z)
{
	cout << this->nName << "beeman���ڷ��䳬������" << x << y << z << endl;
}

void BeeMan::play()
{
	cout << this->nName << "beeman��������" << endl;
}