#pragma once
#include <string>
#include <iostream>
using namespace std;

//Player class
class Player {
public:
	string token;
	bool isPlaying = false;
	int heldMoney = 1500;
	short onTile = 0;
	bool hasRolled = false;
	short rolledDoubles = 0;
	bool inJail = false;
	short turnsInJail = 0;
	short heldOutOFJailCards = 0;
	bool hasMonopoly = false;
	short ownedRailroads = 0;
	short ownedUtlities = 0;
	bool specialRailroad = false;
	bool specialUtility = false;
};