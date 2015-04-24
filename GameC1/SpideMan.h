#pragma once
#include <iostream>
#include "NPC.h"
using namespace std;

class SpideMan:public NPC
{
public:
	SpideMan();
	SpideMan(string name);
	~SpideMan();
	int flyHeight;
	int flySpeed;
	void fly();
	void fire(int x, int y, int z) override;
};

