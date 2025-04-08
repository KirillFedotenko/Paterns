#pragma once
#include <iostream>
#include "GameObject.h"
using namespace std;

class Unit:public GameObject
{
	int damage;
	int hp;
public:
	Unit(int, int, string);
	Unit* clone();
};

