#pragma once
#include <iostream>

using namespace std;

class Ratio
{
private:
	int _num;
	int _denom;

public:
	Ratio(int num, int denom);
	Ratio();
	~Ratio();

	void Saisie();
	void Afficher();
	static Ratio Ajouter(Ratio f1, Ratio f2);
	float Valeur();
	static Ratio Multiplier(Ratio f1, Ratio f2);
	static Ratio Diviser(Ratio f1, Ratio f2);
	static Ratio Inverser(Ratio f3);
	void Entier();
};
