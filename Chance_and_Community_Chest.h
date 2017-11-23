#pragma once
#include <string>
#include <iostream>
using namespace std;

//Object for chance cards
class Stack {
public:
	string text;
	short getMoney;
	short getMoneyFromPlayers;
	bool movePlayer;
	short moveTo;
	bool goToJail;
	bool getOutOfJail;
};