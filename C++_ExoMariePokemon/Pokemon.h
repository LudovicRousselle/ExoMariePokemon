#pragma once
#include <string>
#include <vector>
#include "Abilities.h"

using namespace std;

class Pokemon
{
private:
	string mName;
	string mDescription;
	int mMaxLifePoints;
	int mCurrentLifePoints;
	//Should add Abilities later
	vector<Abilities> mAbilities;
public:
	string petName;
	const int maxAbilitiesCount = 2;
	Pokemon();
	Pokemon(string name, string desc, int maxLifePoints);
	//Add constructor with abilities parameter

	~Pokemon();

	string GetName();
	string GetDescription();
	int GetMaxLifePoints();
	int GetCurrentLifePoints();
	void Hurt(int points);
	void Heal(int points);
	//Add learn ability
	void LearnAbility(Abilities ability);
	void DisplayAbilities();
	int GetAbilityCount();
	Abilities GetAbility(int index);
	//Add attack
	void Attack(Pokemon& target, int ability);

	void DisplaySumUp();

};
