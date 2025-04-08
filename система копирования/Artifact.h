#pragma once
#include <iostream>
#include "GameObject.h"
using namespace std;
class Artifact : public GameObject
{
	string rarity;
public:
	Artifact(string, string);
	Artifact* clone();

};

