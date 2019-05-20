#pragma once
#include"Strun.h"
#include"Duh.h"
#include"Udar.h"
#include <vector>

class Orcestr 
{
	vector<instruments*> inst;
public:
	void addPlayer(instruments* i)
	{
		inst.push_back(i);
	}
	void getOrcestr()	
	{
		for (instruments* i:inst)
		{
			cout << string(typeid(*i).name()).substr(6) << " ";
			cout << i->getName() << endl;
		}
	}
};