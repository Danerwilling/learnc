#pragma once
#include <iostream>
using namespace std;


class Rect
{
	int left;
	int right;
	int top;
	int buttom;
};


class NPC
{
public:
	NPC();
	NPC(string name, int hp);
	~NPC();
	string nName;
	int px, py;
	Rect* pRect;

	int main(int argc, const char * argv[]);
	void move(int x, int y);
	void fire(int x, int y);
	virtual void fire(int x, int y,int z);
	void sethp(int h);
	int gethp();
	void operator++();

private:
	
protected:
	int hp;
};

