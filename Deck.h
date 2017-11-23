#pragma once
#include "Chance_and_Community_Chest.h"

class Deck
{
public:

	Stack chance[16];
	Stack communityChest[16];

	void createDecks(short communityChestSequence [], short chanceSequence []) {

		/*Sets text, money, movement, jailing, held get out for each card.*/
		communityChest[communityChestSequence[0]].text = "Advance to Go (Collect $200)";
		communityChest[communityChestSequence[0]].getMoney = 200;
		communityChest[communityChestSequence[0]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[0]].movePlayer = true;
		communityChest[communityChestSequence[0]].moveTo = 0;
		communityChest[communityChestSequence[0]].goToJail = false;
		communityChest[communityChestSequence[0]].getOutOfJail = false;

		communityChest[communityChestSequence[1]].text = "Bank error in your favor, Collect $200";
		communityChest[communityChestSequence[1]].getMoney = 200;
		communityChest[communityChestSequence[1]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[1]].movePlayer = false;
		communityChest[communityChestSequence[1]].moveTo = 0;
		communityChest[communityChestSequence[1]].goToJail = false;
		communityChest[communityChestSequence[1]].getOutOfJail = false;

		communityChest[communityChestSequence[2]].text = "Doctor's fee, Pay $50";
		communityChest[communityChestSequence[2]].getMoney = -50;
		communityChest[communityChestSequence[2]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[2]].movePlayer = false;
		communityChest[communityChestSequence[2]].moveTo = 0;
		communityChest[communityChestSequence[2]].goToJail = false;
		communityChest[communityChestSequence[2]].getOutOfJail = false;

		communityChest[communityChestSequence[3]].text = "From sale of stock you get $50";
		communityChest[communityChestSequence[3]].getMoney = 50;
		communityChest[communityChestSequence[3]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[3]].movePlayer = false;
		communityChest[communityChestSequence[3]].moveTo = 0;
		communityChest[communityChestSequence[3]].goToJail = false;
		communityChest[communityChestSequence[3]].getOutOfJail = false;

		communityChest[communityChestSequence[4]].text = "Get Out of Jail Free";
		communityChest[communityChestSequence[4]].getMoney = 0;
		communityChest[communityChestSequence[4]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[4]].movePlayer = false;
		communityChest[communityChestSequence[4]].moveTo = 0;
		communityChest[communityChestSequence[4]].goToJail = false;
		communityChest[communityChestSequence[4]].getOutOfJail = true;

		communityChest[communityChestSequence[5]].text = "Go to Jail, Go directly to jail, Do not pass Go, Do not collect $200";
		communityChest[communityChestSequence[5]].getMoney = 0;
		communityChest[communityChestSequence[5]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[5]].movePlayer = true;
		communityChest[communityChestSequence[5]].moveTo = 10;
		communityChest[communityChestSequence[5]].goToJail = true;
		communityChest[communityChestSequence[5]].getOutOfJail = false;

		communityChest[communityChestSequence[6]].text = "Holiday Fund matures, Receive $100";
		communityChest[communityChestSequence[6]].getMoney = 100;
		communityChest[communityChestSequence[6]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[6]].movePlayer = false;
		communityChest[communityChestSequence[6]].moveTo = 0;
		communityChest[communityChestSequence[6]].goToJail = false;
		communityChest[communityChestSequence[6]].getOutOfJail = false;

		communityChest[communityChestSequence[7]].text = "Income tax refund, Collect $20";
		communityChest[communityChestSequence[7]].getMoney = 20;
		communityChest[communityChestSequence[7]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[7]].movePlayer = false;
		communityChest[communityChestSequence[7]].moveTo = 0;
		communityChest[communityChestSequence[7]].goToJail = false;
		communityChest[communityChestSequence[7]].getOutOfJail = false;

		communityChest[communityChestSequence[8]].text = "It is your birthday, Collect $10";
		communityChest[communityChestSequence[8]].getMoney = 10;
		communityChest[communityChestSequence[8]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[8]].movePlayer = false;
		communityChest[communityChestSequence[8]].moveTo = 0;
		communityChest[communityChestSequence[8]].goToJail = false;
		communityChest[communityChestSequence[8]].getOutOfJail = false;

		communityChest[communityChestSequence[9]].text = "Life insurance matures, Collect $100";
		communityChest[communityChestSequence[9]].getMoney = 100;
		communityChest[communityChestSequence[9]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[9]].movePlayer = false;
		communityChest[communityChestSequence[9]].moveTo = 0;
		communityChest[communityChestSequence[9]].goToJail = false;
		communityChest[communityChestSequence[9]].getOutOfJail = false;

		communityChest[communityChestSequence[10]].text = "Pay hospital fees of $100";
		communityChest[communityChestSequence[10]].getMoney = -100;
		communityChest[communityChestSequence[10]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[10]].movePlayer = false;
		communityChest[communityChestSequence[10]].moveTo = 0;
		communityChest[communityChestSequence[10]].goToJail = false;
		communityChest[communityChestSequence[10]].getOutOfJail = false;

		communityChest[communityChestSequence[11]].text = "Pay school fees of $150";
		communityChest[communityChestSequence[11]].getMoney = -150;
		communityChest[communityChestSequence[11]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[11]].movePlayer = false;
		communityChest[communityChestSequence[11]].moveTo = 0;
		communityChest[communityChestSequence[11]].goToJail = false;
		communityChest[communityChestSequence[11]].getOutOfJail = false;

		communityChest[communityChestSequence[12]].text = "Receive $25 consultancy fee";
		communityChest[communityChestSequence[12]].getMoney = 25;
		communityChest[communityChestSequence[12]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[12]].movePlayer = false;
		communityChest[communityChestSequence[12]].moveTo = 0;
		communityChest[communityChestSequence[12]].goToJail = false;
		communityChest[communityChestSequence[12]].getOutOfJail = false;

		communityChest[communityChestSequence[13]].text = "You are assessed for street repairs, $40 per house, $115 per hotel";
		communityChest[communityChestSequence[13]].getMoney = 0; //(-40 * player[count].numberOfHouses) on all properties;
		communityChest[communityChestSequence[13]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[13]].movePlayer = false;
		communityChest[communityChestSequence[13]].moveTo = 0;
		communityChest[communityChestSequence[13]].goToJail = false;
		communityChest[communityChestSequence[13]].getOutOfJail = false;

		communityChest[communityChestSequence[14]].text = "You have won second prize in a beauty contest, Collect $10";
		communityChest[communityChestSequence[14]].getMoney = 10;
		communityChest[communityChestSequence[14]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[14]].movePlayer = false;
		communityChest[communityChestSequence[14]].moveTo = 0;
		communityChest[communityChestSequence[14]].goToJail = false;
		communityChest[communityChestSequence[14]].getOutOfJail = false;

		communityChest[communityChestSequence[15]].text = "You inherit $100";
		communityChest[communityChestSequence[15]].getMoney = 100;
		communityChest[communityChestSequence[15]].getMoneyFromPlayers = 0;
		communityChest[communityChestSequence[15]].movePlayer = false;
		communityChest[communityChestSequence[15]].moveTo = 0;
		communityChest[communityChestSequence[15]].goToJail = false;
		communityChest[communityChestSequence[15]].getOutOfJail = false;
		
		chance[chanceSequence[0]].text = "Advance to Go (Collect $200)";
		chance[chanceSequence[0]].getMoney = 200;
		chance[chanceSequence[0]].getMoneyFromPlayers = 0;
		chance[chanceSequence[0]].movePlayer = true;
		chance[chanceSequence[0]].moveTo = 0;
		chance[chanceSequence[0]].goToJail = false;
		chance[chanceSequence[0]].getOutOfJail = false;

		chance[chanceSequence[1]].text = "Advance to Illinois Ave, If you pass Go, collect $200";
		chance[chanceSequence[1]].getMoney = 0;
		chance[chanceSequence[1]].getMoneyFromPlayers = 0;
		chance[chanceSequence[1]].movePlayer = true;
		chance[chanceSequence[1]].moveTo = 24;
		chance[chanceSequence[1]].goToJail = false;
		chance[chanceSequence[1]].getOutOfJail = false;

		chance[chanceSequence[2]].text = "Advance to St. Charles Place, If you pass Go, collect $200";
		chance[chanceSequence[2]].getMoney = 0;
		chance[chanceSequence[2]].getMoneyFromPlayers = 0;
		chance[chanceSequence[2]].movePlayer = true;
		chance[chanceSequence[2]].moveTo = 11;
		chance[chanceSequence[2]].goToJail = false;
		chance[chanceSequence[2]].getOutOfJail = false;

		chance[chanceSequence[3]].text = "Advance token to nearest Utility. If unowned, you may buy it from the Bank. If owned, throw dice and pay owner a total ten times the amount thrown.";
		chance[chanceSequence[3]].getMoney = 0;
		chance[chanceSequence[3]].getMoneyFromPlayers = 0;
		chance[chanceSequence[3]].movePlayer = true;
		chance[chanceSequence[3]].moveTo = 12;
		chance[chanceSequence[3]].goToJail = false;
		chance[chanceSequence[3]].getOutOfJail = false;

		chance[chanceSequence[4]].text = "Advance token to the nearest Railroad and pay owner twice the rental to which he/she is otherwise entitled. If Railroad is unowned, you may buy it from the Bank.";
		chance[chanceSequence[4]].getMoney = 0;
		chance[chanceSequence[4]].getMoneyFromPlayers = 0;
		chance[chanceSequence[4]].movePlayer = true;
		chance[chanceSequence[4]].moveTo = 5;
		chance[chanceSequence[4]].goToJail = false;
		chance[chanceSequence[4]].getOutOfJail = true;

		chance[chanceSequence[5]].text = "Bank pays you dividend of $50";
		chance[chanceSequence[5]].getMoney = 50;
		chance[chanceSequence[5]].getMoneyFromPlayers = 0;
		chance[chanceSequence[5]].movePlayer = false;
		chance[chanceSequence[5]].moveTo = 0;
		chance[chanceSequence[5]].goToJail = false;
		chance[chanceSequence[5]].getOutOfJail = false;

		chance[chanceSequence[6]].text = "Get Out of Jail Free";
		chance[chanceSequence[6]].getMoney = 0;
		chance[chanceSequence[6]].getMoneyFromPlayers = 0;
		chance[chanceSequence[6]].movePlayer = false;
		chance[chanceSequence[6]].moveTo = 0;
		chance[chanceSequence[6]].goToJail = false;
		chance[chanceSequence[6]].getOutOfJail = true;

		chance[chanceSequence[7]].text = "Go Back 3 Spaces";
		chance[chanceSequence[7]].getMoney = 0;
		chance[chanceSequence[7]].getMoneyFromPlayers = 0;
		chance[chanceSequence[7]].movePlayer = true;
		chance[chanceSequence[7]].moveTo = 0; //Does not count as player roll. Move player so on tile whatever they were on -3
		chance[chanceSequence[7]].goToJail = false;
		chance[chanceSequence[7]].getOutOfJail = false;

		chance[chanceSequence[8]].text = "Go to Jail, Go directly to Jail, Do not pass Go, do not collect $200";
		chance[chanceSequence[8]].getMoney = 0;
		chance[chanceSequence[8]].getMoneyFromPlayers = 0;
		chance[chanceSequence[8]].movePlayer = true;
		chance[chanceSequence[8]].moveTo = 10;
		chance[chanceSequence[8]].goToJail = true;
		chance[chanceSequence[8]].getOutOfJail = false;

		chance[chanceSequence[9]].text = "Make general repairs on all your property, For each house pay $25, For each hotel $100";
		chance[chanceSequence[9]].getMoney = 0; //(-25 * player[count].numberOfHouses) on all properties;
		chance[chanceSequence[9]].getMoneyFromPlayers = 0;
		chance[chanceSequence[9]].movePlayer = false;
		chance[chanceSequence[9]].moveTo = 0;
		chance[chanceSequence[9]].goToJail = false;
		chance[chanceSequence[9]].getOutOfJail = false;

		chance[chanceSequence[10]].text = "Pay poor tax of $15";
		chance[chanceSequence[10]].getMoney = -15;
		chance[chanceSequence[10]].getMoneyFromPlayers = 0;
		chance[chanceSequence[10]].movePlayer = false;
		chance[chanceSequence[10]].moveTo = 0;
		chance[chanceSequence[10]].goToJail = false;
		chance[chanceSequence[10]].getOutOfJail = false;

		chance[chanceSequence[11]].text = "Take a trip to Reading Railroad, If you pass Go, collect $200";
		chance[chanceSequence[11]].getMoney = 0;
		chance[chanceSequence[11]].getMoneyFromPlayers = 0;
		chance[chanceSequence[11]].movePlayer = true;
		chance[chanceSequence[11]].moveTo = 5; //counts as roll
		chance[chanceSequence[11]].goToJail = false;
		chance[chanceSequence[11]].getOutOfJail = false;

		chance[chanceSequence[12]].text = "Take a walk on the Boardwalk, Advance token to Boardwalk";
		chance[chanceSequence[12]].getMoney = 0;
		chance[chanceSequence[12]].getMoneyFromPlayers = 0;
		chance[chanceSequence[12]].movePlayer = true;
		chance[chanceSequence[12]].moveTo = 39;
		chance[chanceSequence[12]].goToJail = false;
		chance[chanceSequence[12]].getOutOfJail = false;

		chance[chanceSequence[13]].text = "You have been elected Chairman of the Board, Pay each player $50";
		chance[chanceSequence[13]].getMoney = 0;
		chance[chanceSequence[13]].getMoneyFromPlayers = -50;
		chance[chanceSequence[13]].movePlayer = false;
		chance[chanceSequence[13]].moveTo = 0;
		chance[chanceSequence[13]].goToJail = false;
		chance[chanceSequence[13]].getOutOfJail = false;

		chance[chanceSequence[14]].text = "You have won a crossword competition, Collect $100";
		chance[chanceSequence[14]].getMoney = 100;
		chance[chanceSequence[14]].getMoneyFromPlayers = 0;
		chance[chanceSequence[14]].movePlayer = false;
		chance[chanceSequence[14]].moveTo = 0;
		chance[chanceSequence[14]].goToJail = false;
		chance[chanceSequence[14]].getOutOfJail = false;

		chance[chanceSequence[15]].text = "Your building and loan matures, Collect $150";
		chance[chanceSequence[15]].getMoney = 10;
		chance[chanceSequence[15]].getMoneyFromPlayers = 0;
		chance[chanceSequence[15]].movePlayer = false;
		chance[chanceSequence[15]].moveTo = 0;
		chance[chanceSequence[15]].goToJail = false;
		chance[chanceSequence[15]].getOutOfJail = false;
	}
};