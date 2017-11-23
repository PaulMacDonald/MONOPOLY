#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

#include "Chance.h"
#include "CommunityChest.h"
#include "Player.h"
#include "Tile.h"
#include "Board.h"



using namespace std;

void numberOfPlayers(int& howManyPlayers);
void chooseTokens(int howManyPlayers);

Player player[8];
Board board;

int main()
{
	int howManyPlayers;
	numberOfPlayers(howManyPlayers);
	chooseTokens(howManyPlayers);
	board.createBoard();
}

void numberOfPlayers(int& howManyPlayers)
{
	for (;;)
	{
		cout << "Enter how many players are playing: ";
		cin >> howManyPlayers;

		if (howManyPlayers < 2)
			cout << "That's not enough players.\n";

		else if (howManyPlayers > 8)
			cout << "That's too many players.\n";

		else break;
	}
	for (int count = 0; count < howManyPlayers; count++)
	{
		player[count].isPlaying = 1;
	}
}
void chooseTokens(int howManyPlayers)
{
	bool tokensLeft[8] = { 1,1,1,1,1,1,1,1 };

	for (int count = 0; count < howManyPlayers; count++)
	{
		int tokenSelected;
		cout << "Which token Player " << count + 1 << " would you like to use?" << endl;
		if (tokensLeft[0])
			cout << "1. Scottish Terrier\n";
		if (tokensLeft[1])
			cout << "2. Battleship\n";
		if (tokensLeft[2])
			cout << "3. Automobile\n";
		if (tokensLeft[3])
			cout << "4. Top Hat\n";
		if (tokensLeft[4])
			cout << "5. Thimble\n";
		if (tokensLeft[5])
			cout << "6. Shoe\n";
		if (tokensLeft[6])
			cout << "7. Wheelbarrow\n";
		if (tokensLeft[7])
			cout << "8. Cat\n";


		cin >> tokenSelected;


		if ((tokenSelected < 1) || (tokenSelected > 8))
		{
			cout << "That is not a token.\n";
			count--;
			continue;
		}

		if ((tokenSelected == 1) && (tokensLeft[0]))
			player[count].token = "Scottish Terrier";
		else if ((tokenSelected == 2) && (tokensLeft[1]))
			player[count].token = "Battleship";
		else if ((tokenSelected == 3) && (tokensLeft[2]))
			player[count].token = "Automobile";
		else if ((tokenSelected == 4) && (tokensLeft[3]))
			player[count].token = "Top Hat";
		else if ((tokenSelected == 5) && (tokensLeft[4]))
			player[count].token = "Thimble";
		else if ((tokenSelected == 6) && (tokensLeft[5]))
			player[count].token = "Shoe";
		else if ((tokenSelected == 7) && (tokensLeft[6]))
			player[count].token = "Wheelbarrow";
		else if ((tokenSelected == 8) && (tokensLeft[7]))
			player[count].token = "Cat";
		else
		{
			cout << "That token has already been taken. Please choose another.\n";
			count--;
			continue;
		}

		if (tokenSelected == 1)
			tokensLeft[0] = 0;
		else if (tokenSelected == 2)
			tokensLeft[1] = 0;
		else if (tokenSelected == 3)
			tokensLeft[2] = 0;
		else if (tokenSelected == 4)
			tokensLeft[3] = 0;
		else if (tokenSelected == 5)
			tokensLeft[4] = 0;
		else if (tokenSelected == 6)
			tokensLeft[5] = 0;
		else if (tokenSelected == 7)
			tokensLeft[6] = 0;
		else if (tokenSelected == 8)
			tokensLeft[7] = 0;
	}
}