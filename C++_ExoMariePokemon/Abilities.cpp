#include "Abilities.h"

using namespace std;

//Constructors / Desctructor
Abilities::Abilities()
{
	mName = "Default";
	mDesc = "Default";
	mDamages = 0;
	mEnergyCost = -1;
}
Abilities::Abilities(string name, string desc, int damages)
{
	mName = name;
	mDesc = desc;
	mDamages = damages;
	mEnergyCost = 0;
}
Abilities::Abilities(string name, string desc, int damages, int energy)
{
	mName = name;
	mDesc = desc;
	mDamages = damages;
	mEnergyCost = energy;
}

Abilities::~Abilities() {}
//Getters for attributes
string Abilities::GetName() { return mName; }
string Abilities::GetDescription() { return mDesc; }
int Abilities::GetDamages() { return mDamages; }
int Abilities::GetEnergyCost() { return mEnergyCost; }