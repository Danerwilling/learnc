#pragma once
#include <iostream>
#include "Sound.h"
using namespace std;

class Scene:Sound
{
public:
	Scene();
	~Scene();
	virtual void play();
};

