#include "Battle.h"
#include "Battle.h"
#include <iostream>

using namespace std;

Battle::Battle()
{
	mpFighters[0] = nullptr;
	mpFighters[1] = nullptr;
}

Battle::Battle(Pokemon& first, Pokemon& second)
{
	mpFighters[0] = &first;
	mpFighters[1] = &second;
}

Battle::~Battle()
{

}

void Battle::StartBattle()
{
	cout << "You look a dresser in the eyes, He now wants to battle you, your pokemon is " << mpFighters[0] << "and His is " << mpFighters[1];
	PlayTurn();
	turn = true;
}

void Battle::PlayTurn()
{
	int whoAttack = 0, whoDefend = 1;

	if (turn == false)
	{
		whoAttack = 1;
		whoDefend = 0;
	}

	int choice = 0;
	if (turn == true) 
	{
		mpFighters[whoAttack]->DisplayAbilities();
		cout << "Choose an attack";	

		do 
		{
			cin >> choice;
		} while (choice < 1 || choice > mpFighters[whoAttack]->GetAbility());
	}
	else
	{
		choice = (rand() % mpFighters[whoAttack]->GetAbilityCount());
	}

	mpFighters[whoAttack]->Attack(*mpFighters[whoDefend], choice - 1);

	if (mpFighters[whoDefend]->GetCurrentLifePoints() = 0) 
	{
		cout << mpFighters[whoDefend]->petName << " passed out of exhaustion " << endl;
		cout << "congrats, you won";
		EndBattle();
	}
	else 
	{
		NextTurn();
	}
}

void Battle::NextTurn()
{
	cout << "=====================";
	cout << mpFighters[0]->petName << " : " << mpFighters[0]->GetCurrentLifePoints() << "/" << mpFighters[0]->GetMaxLifePoints() << endl;
	cout << mpFighters[1]->petName << " : " << mpFighters[1]->GetCurrentLifePoints() << "/" << mpFighters[1]->GetMaxLifePoints() << endl;
	cout << "=====================";
	turn = !turn;
	PlayTurn();
}

void Battle::EndBattle()
{
	
}
