#pragma once
#include <string>

class Quete
{
public:
	int nivDiff;
	int niveauMin;
	int recompenseenOr;
	int exp;
	std::string name;
	Quete();
	~Quete();

	int getnivDifficulte();
	int getNivMin();
	int getRecompense();
	int getExp();

	std::string to_string();

	Quete(int nivDifficulte, int nivMin, int recompenseOr, int expRecu, std::string nom);
};

