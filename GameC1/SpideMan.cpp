#include "SpideMan.h"
#include <iostream>
#include <string>

SpideMan::SpideMan()
{
	this->hp = 300;
}

SpideMan::SpideMan(string name) :NPC(name,300)
{
	this->nName = name;
	this->hp = 300;
	cout << this->nName << "�������ڳ�ʼ��" << endl;
}


SpideMan::~SpideMan()
{
}

void SpideMan::fly()
{
	cout << this->nName << "���ڷɡ�����" << endl;
}

void SpideMan::fire(int x, int y, int z)
{
	cout << this->nName << "���ڷ��䳬������" << x << y << z << endl;
}
