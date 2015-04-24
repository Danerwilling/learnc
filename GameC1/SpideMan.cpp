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
	cout << this->nName << "子类正在初始化" << endl;
}


SpideMan::~SpideMan()
{
}

void SpideMan::fly()
{
	cout << this->nName << "正在飞。。。" << endl;
}

void SpideMan::fire(int x, int y, int z)
{
	cout << this->nName << "正在发射超级技能" << x << y << z << endl;
}
