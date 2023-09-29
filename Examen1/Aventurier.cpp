#include "Aventurier.h"
#include "Quete.h"
#include "FactoryQuete.h"
#include "Utilitaire.h"
#include <string>
#include <vector>
#include <iostream>

Aventurier::Aventurier(int niv)
{
	niveau = niv;
}
Aventurier::Aventurier(int niv)
{
	niveau = Utilitaire::genererNb(1, 10);
}
void Aventurier::AfficherQuete()
{
	Quete* quete;
	std::cout << "Voici les quetes : \n" + quete->to_string() << std::endl;
}

void Aventurier::AjouterQuete(Quete* quete)
{
	quete = FactoryQuete::getRandomQuete();
}

int Aventurier::getNiv()
{
	return niveau;
}