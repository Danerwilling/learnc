#pragma once
#include <iostream>
#include "NPC.h"
#include "Sound.h"
using namespace std;

class BeeMan:public NPC,Sound
{
public:
	BeeMan();
	~BeeMan();
	void fire(int x, int y, int z) override;
	virtual void play();
};

