#pragma once
#include "Tile.h"

class Board
{
public:
	Tile tile[40];

	void createBoard() {
		//string name
		tile[0].name = "Go";
		tile[1].name = "Mediterranean Avenue";
		tile[2].name = "Community Chest";
		tile[3].name = "Baltic Avenue";
		tile[4].name = "Income Tax";
		tile[5].name = "Reading Railroad";
		tile[6].name = "Oriental Avenue";
		tile[7].name = "Chance";
		tile[8].name = "Vermont Avenue";
		tile[9].name = "Connecticut Avenue";
		tile[10].name = "Jail";
		tile[11].name = "St. Charles Place";
		tile[12].name = "Electric Company";
		tile[13].name = "States Avenue";
		tile[14].name = "Virginia Avenue";
		tile[15].name = "Pennsylvania Railroad";
		tile[16].name = "St. James Place";
		tile[17].name = "Community Chest";
		tile[18].name = "Tennessee Avenue";
		tile[19].name = "New York Avenue";
		tile[20].name = "Free Parking";
		tile[21].name = "Kentucky Avenue";
		tile[22].name = "Chance";
		tile[23].name = "Indiana Avenue";
		tile[24].name = "Illinois Avenue";
		tile[25].name = "B. & O. Railroad";
		tile[26].name = "Atlantic Aventue";
		tile[27].name = "Ventnor Avenue";
		tile[28].name = "Water Works";
		tile[29].name = "Marvin Gardens";
		tile[30].name = "Go To Jail";
		tile[31].name = "Pacific Avenue";
		tile[32].name = "North Carolina";
		tile[33].name = "Community Chest";
		tile[34].name = "Pennsylvania Avenue";
		tile[35].name = "Short Line";
		tile[36].name = "Chance";
		tile[37].name = "Park Place";
		tile[38].name = "Luxury Tax";
		tile[39].name = "Boardwalk";
		
		//string type
		for (int count = 0; count < 40; count++) {
			tile[count].type = "property";
		}

		tile[0].type = "go";
		tile[2].type = tile[17].type = tile[33].type = "community chest";
		tile[7].type = tile[22].type = tile[36].type = "chance";
		tile[4].type = tile[38].type = "tax";
		tile[10].type = "jail";
		tile[20].type = "free parking";
		tile[30].type = "go to jail";

		//string color
		tile[1].color = tile[3].color = "brown";
		tile[6].color = tile[8].color = tile[9].color = "light blue";
		tile[11].color = tile[13].color = tile[14].color = "magenta";
		tile[16].color = tile[18].color = tile[19].color = "orange";
		tile[21].color = tile[23].color = tile[24].color = "red";
		tile[26].color = tile[27].color = tile[29].color = "yellow";
		tile[31].color = tile[32].color = tile[34].color = "green";
		tile[37].color = tile[39].color = "blue";

		//bool canBeOwned
		for (int count = 0; count < 50; count++) {
			tile[0].canBeOwned = true;
		}

		tile[0].canBeOwned =
			tile[2].canBeOwned =
			tile[4].canBeOwned =
			tile[7].canBeOwned =
			tile[10].canBeOwned =
			tile[17].canBeOwned =
			tile[20].canBeOwned =
			tile[22].canBeOwned =
			tile[30].canBeOwned =
			tile[33].canBeOwned =
			tile[36].canBeOwned =
			tile[38].canBeOwned = false;
		
		//bool owned
		for (int count = 0; count < 50; count++) {
			tile[0].owned = false;
		}

		//short value
		tile[1].value = tile[3].value = 60;
		tile[5].value = tile[15].value = tile[25].value = tile[35].value = 200;
		tile[6].value = tile[8].value = 100;
		tile[9].value = 120;
		tile[11].value = tile[13].value = 140;
		tile[12].value = tile[28].value = 150;
		tile[14].value = 160;
		tile[16].value = tile[18].value = 180;
		tile[19].value = 200;
		tile[21].value = tile[23].value = 220;
		tile[24].value = 240;
		tile[26].value = tile[27].value = 260;
		tile[29].value = 280;
		tile[31].value = tile[32].value = 300;
		tile[34].value = 320;
		tile[37].value = 350;
		tile[39].value = 400;
		//(taxes)
		tile[4].value = 200;
		tile[38].value = 100;

		//short costOfHouse
		tile[1].costOfHouse =
			tile[3].costOfHouse =
			tile[6].costOfHouse =
			tile[8].costOfHouse =
			tile[9].costOfHouse = 50;
		tile[11].costOfHouse =
			tile[13].costOfHouse =
			tile[14].costOfHouse =
			tile[16].costOfHouse =
			tile[18].costOfHouse =
			tile[19].costOfHouse = 100;
		tile[21].costOfHouse =
			tile[23].costOfHouse =
			tile[24].costOfHouse =
			tile[26].costOfHouse =
			tile[27].costOfHouse =
			tile[29].costOfHouse = 150;
		tile[31].costOfHouse =
			tile[32].costOfHouse =
			tile[34].costOfHouse =
			tile[37].costOfHouse =
			tile[39].costOfHouse = 200;

		//short numberOfHouses
		for (int count = 0; count < 50; count++) {
			tile[0].numberOfHouses = 0;
		}

		//short rent[]
		tile[1].rent[0] = 2;
		tile[1].rent[1] = 10;
		tile[1].rent[2] = 30;
		tile[1].rent[3] = 90;
		tile[1].rent[4] = 160;
		tile[1].rent[5] = 250;
		
		tile[3].rent[0] = 4;
		tile[3].rent[1] = 20;
		tile[3].rent[2] = 60;
		tile[3].rent[3] = 180;
		tile[3].rent[4] = 320;
		tile[3].rent[5] = 450;

		tile[6].rent[0] = tile[8].rent[0] = 6;
		tile[6].rent[1] = tile[8].rent[1] = 30;
		tile[6].rent[2] = tile[8].rent[2] = 90;
		tile[6].rent[3] = tile[8].rent[3] = 270;
		tile[6].rent[4] = tile[8].rent[4] = 400;
		tile[6].rent[5] = tile[6].rent[5] = 550;

		tile[9].rent[0] = 8;
		tile[9].rent[1] = 40;
		tile[9].rent[2] = 100;
		tile[9].rent[3] = 300;
		tile[9].rent[4] = 450;
		tile[9].rent[5] = 600;

		tile[11].rent[0] = tile[13].rent[0] = 10;
		tile[11].rent[1] = tile[13].rent[1] = 50;
		tile[11].rent[2] = tile[13].rent[2] = 150;
		tile[11].rent[3] = tile[13].rent[3] = 450;
		tile[11].rent[4] = tile[13].rent[4] = 625;
		tile[11].rent[5] = tile[13].rent[5] = 750;

		tile[14].rent[0] = 12;
		tile[14].rent[1] = 60;
		tile[14].rent[2] = 180;
		tile[14].rent[3] = 500;
		tile[14].rent[4] = 700;
		tile[14].rent[5] = 900;

		tile[16].rent[0] = tile[18].rent[0] = 14;
		tile[16].rent[1] = tile[18].rent[1] = 70;
		tile[16].rent[2] = tile[18].rent[2] = 200;
		tile[16].rent[3] = tile[18].rent[3] = 550;
		tile[16].rent[4] = tile[18].rent[4] = 750;
		tile[16].rent[5] = tile[18].rent[5] = 950;

		tile[19].rent[0] = 16;
		tile[19].rent[1] = 80;
		tile[19].rent[2] = 220;
		tile[19].rent[3] = 600;
		tile[19].rent[4] = 800;
		tile[19].rent[5] = 1000;

		tile[21].rent[0] = tile[23].rent[0] = 18;
		tile[21].rent[1] = tile[23].rent[1] = 90;
		tile[21].rent[2] = tile[23].rent[2] = 250;
		tile[21].rent[3] = tile[23].rent[3] = 700;
		tile[21].rent[4] = tile[23].rent[4] = 875;
		tile[21].rent[5] = tile[23].rent[5] = 1050;

		tile[24].rent[0] = 20;
		tile[24].rent[1] = 100;
		tile[24].rent[2] = 300;
		tile[24].rent[3] = 750;
		tile[24].rent[4] = 925;
		tile[24].rent[5] = 1100;

		tile[26].rent[0] = tile[27].rent[0] = 22;
		tile[26].rent[1] = tile[27].rent[1] = 110;
		tile[26].rent[2] = tile[27].rent[2] = 330;
		tile[26].rent[3] = tile[27].rent[3] = 800;
		tile[26].rent[4] = tile[28].rent[4] = 1150;

		tile[29].rent[0] = 24;
		tile[29].rent[1] = 120;
		tile[29].rent[2] = 360;
		tile[29].rent[3] = 850;
		tile[29].rent[4] = 1025;
		tile[29].rent[5] = 1200;

		tile[31].rent[0] = tile[32].rent[0] = 26;
		tile[31].rent[1] = tile[32].rent[1] = 130;
		tile[31].rent[2] = tile[32].rent[2] = 390;
		tile[31].rent[3] = tile[32].rent[3] = 900;
		tile[31].rent[4] = tile[32].rent[4] = 1100;
		tile[31].rent[5] = tile[32].rent[5] = 1275;

		tile[34].rent[0] = 28;
		tile[34].rent[1] = 150;
		tile[34].rent[2] = 450;
		tile[34].rent[3] = 1000;
		tile[34].rent[4] = 1200;
		tile[34].rent[5];

		tile[37].rent[0] = 35;
		tile[37].rent[1] = 175;
		tile[37].rent[2] = 500;
		tile[37].rent[3] = 1100;
		tile[37].rent[4] = 1300;
		tile[37].rent[5] = 1500;

		tile[39].rent[0] = 50;
		tile[39].rent[1] = 200;
		tile[39].rent[2] = 600;
		tile[39].rent[3] = 1400;
		tile[39].rent[4] = 1700;
		tile[39].rent[5] = 2000;		

		//bool ifMortgaged
		for (int count = 0; count < 50; count++) {
			tile[0].ifMortgaged = false;
		}

		//bool ifMonopoly
		for (int count = 0; count < 50; count++) {
			tile[0].ifMonopoly = false;
		}
	}
};