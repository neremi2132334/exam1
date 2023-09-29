#include "Quete.h"
#include "Utilitaire.h"
#include "FactoryQuete.h"
#include <string>
#include <vector>
#include <iostream>


Quete::Quete(int nivDifficulte, int nivMin, int recompenseOr, int expRecu, std::string nom)
{
	nivDiff = nivDifficulte;
	niveauMin = nivMin;
	recompenseenOr = recompenseOr;
	exp = expRecu;
	name = nom;
}
Quete::Quete()
{
	nivDiff = Utilitaire::genererNb(3, 10);
	niveauMin = Utilitaire::genererNb(3, 8);
	recompenseenOr = Utilitaire::genererNb(50, 100);
	exp = Utilitaire::genererNb(1, 1000);


}


Quete::~Quete() {}

std::string Quete::to_string()
{

	std::string info;
	info.append("Difficulte :" + std::to_string(this->getnivDifficulte()) + "\n");
	info.append("Niveau minimum :" + std::to_string(niveauMin) + "\n");
	info.append("Recompense :" + std::to_string(this->getRecompense()) + "\n");
	info.append("exp :" + std::to_string(exp) + "\n");


	return info;
}

int Quete::getnivDifficulte()
{
	return nivDiff;
}

int Quete::getNivMin()
{

	return niveauMin;
}

int Quete::getRecompense()
{

	return exp;
}

int Quete::getExp()
{

	return exp;
}

