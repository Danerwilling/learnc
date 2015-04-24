#include "NPC.h"
#include <iostream>
#include <string>
#include "SpideMan.h"
#include "BeeMan.h"
#include "Scene.h"
#include <list>
#include <vector>
using namespace std;

NPC::NPC()
{
	this->hp = 500;
	this->pRect = new Rect();
	cout << this->nName << "正在初始化" << endl;
}

NPC::NPC(string name,int hp)
{
	this->nName = name;
	this->hp = hp;
	this->pRect = new Rect();
	cout << this->nName << "正在初始化" << endl;
}

NPC::~NPC()
{
	delete this->pRect;
	cout << this->nName << "正在删除" << endl;
}

void NPC::operator++()
{
	this->hp = this->hp * 2;
	cout << this->nName << "升级" << endl;
}

void NPC::move(int x, int y)
{
	cout << this->nName << " move to " << x << y << endl;
	this->px = x;
	this->py = y;
}
void NPC::fire(int x, int y)
{
	cout << this->nName << " fire " << x << y << endl;
}

void NPC::fire(int x, int y,int z)
{
	cout << this->nName << " fire " << x << y << endl;
}

void NPC::sethp(int h)
{
	if (h >= 0 && h <= 300)
	{
		this->hp = h;
	}
}
int NPC::gethp()
{
	return this->hp;
}


template<class T>
T getMax(T a, T b)
{
	return a > b ? a : b;
}


template<class T>
class LinkList
{
	struct node{
		T* data;
		struct node* pNext;
	};
	node* head;
public:
	void addNewNode(T* dat);
	void deleteNode(int id);
	void insertNodeAt(T* dat,int index);
};


int main(int argc, const char * argv[])
{
	cout << getMax(3, 5) << endl;
	cout << getMax('3', '5') << endl;
	cout << getMax(3.22, 0.5) << endl;
	/*NPC n1;
	n1.sethp(50);
	cout << n1.gethp() << endl;
	n1.nName = "Daner";
	n1.px = 100;
	n1.py = 100;
	cout << "n1坐标为" << n1.px << "," << n1.py << endl;
	n1.move(20, 35);
	n1.fire(29, 18);
	n1.fire(29, 18,2);
	
	NPC * npc2;
	npc2 = new NPC();
	npc2->nName = "Daner2";
	delete npc2;

	NPC n3("Daner3", 80);
	cout << "npc3 hp=" << n3.gethp() << endl;

	NPC *n4=new NPC("Daner4", 90);
	cout << "npc4 hp=" << n4->gethp() << endl;*/

	SpideMan* sm=new SpideMan();
	sm->nName = "逍遥";
	++(*sm);
	cout << "sm hp=" << sm->gethp() << endl;

	SpideMan* sm2 = new SpideMan("李明");
	sm2->nName = "李明";
	cout << "sm2 hp=" << sm2->gethp() << endl;
	sm2->fire(30, 30, 5);

	BeeMan* bm = new BeeMan();
	bm->nName = "bee";

	NPC* npc;
	npc = sm2;
	npc->fire(30, 30, 2);
	npc = bm;
	bm->fire(50, 18, 6);

	Scene* s1 = new Scene();
	Sound* ns;
	ns = (Sound*)s1;
	ns->play();
	ns = (Sound*)bm;
	ns->play();

	vector<NPC *>allNpc;
	for (int i = 1; i <= 10; i++)
	{
		NPC* tmp = new SpideMan();
		char str[10];
		sprintf_s(str, "npc:%d", i);
		string name = str;
		tmp->nName = name;
		allNpc.push_back(tmp);
	}

	for (auto tmp : allNpc)
	{
		tmp->move(30, 15);
	}

	int map[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
	for (auto tmp : map)
	{
		cout << tmp << endl;
	}

	auto a = [=](){
		printf("hello~\n");
	};
	a();

	system("Pause");
	return 0;
}