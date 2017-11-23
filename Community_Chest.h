#pragma once

//Object for community chest cards
class CommunityChest {
public:
	string text;
	short getMoney;
	short getMoneyFromPlayers;
	bool movePlayer;
	short moveTo;
	bool goToJail;
	bool getOutOfJail;
};
