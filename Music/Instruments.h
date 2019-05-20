#pragma once
#include<string>
#include<iostream>
using namespace std;

class instruments abstract
{
	string name;
public:
	instruments(string name)
		:name(name)
	{}
	virtual string getName() { return name; }
	void setName(string name) {this->name = name;}
};