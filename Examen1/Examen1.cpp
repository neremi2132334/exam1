#include "Quete.h"
#include "FactoryQuete.h"
#include "Utilitaire.h"
#include "Aventurier.h"
#include <string>
#include <vector>
#include <iostream>
int main()
{
	Quete* quete;
	for (int i =0; i >= 12; i++)
	{
		quete = FactoryQuete::getRandomQuete();
		if (quete <= niveau)
		{
			std::cout << "Ajout au tableau des quete : \n"<< std::endl;
		}
		
	}
	std::cout << "Voici les quetes : \n" + quete->to_string() << std::endl;
    
}
