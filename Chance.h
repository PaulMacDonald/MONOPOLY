#pragma once
#include <string>
#include <iostream>
using namespace std;

//Object for chance cards
class Chance {
public:
	string text;
	int getMoney;
	int getMoneyFromPlayers;
	bool movePlayer;
	int moveTo;
	bool goToJail;
	bool getOutOfJail;
};