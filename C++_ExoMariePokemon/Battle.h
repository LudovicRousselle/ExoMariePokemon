#pragma once
#include <string>
#include "Pokemon.h"

using namespace std;

class Battle
{
private :

	//Choose your pokemon
	int pokemonThatFight;
	//Whose turn
	Pokemon* mpFighters[2]{};
	bool turn;


public :

	//Constructor / Destructor
	Battle();
	Battle(Pokemon& first, Pokemon& second);
	~Battle();

	//Playturn Function
	void PlayTurn();

	//StartBattle function
	void StartBattle();

	//Next turn Function
	void EndBattle();

	//End battle
	void NextTurn();

};

