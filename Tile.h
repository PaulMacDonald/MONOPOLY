#pragma once
#include <string>
#include <iostream>
using namespace std;

//Tile class
class Tile {
public:
	string name;
	string type;
	string color;
	bool canBeOwned;
	bool owned;
	short ownedByPlayer = 8;
	short value;
	short costOfHouse;
	short numberOfHouses;
	short rent[6];
	bool ifMortgaged;
	bool ifMonopoly;
};