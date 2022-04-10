#pragma once
#include <string>

using namespace std;

class Abilities 
{
private :
	//name
	string mName;
	//What does it do ?
	string mDesc;
	//How much Damage ?
	int mDamages;
	//How much Energy does it cost ?
	int mEnergyCost;


public:
	//constructor / destructor
	Abilities();
	Abilities(string name, string desc, int damages);
	Abilities(string name, string desc, int damages, int energy);

	~Abilities();
	//Getters for attributes
	string GetName();
	string GetDescription();
	int GetDamages();
	int GetEnergyCost();
	//If you need help, raise your hand on the
	//Google Meet ! :)

};
