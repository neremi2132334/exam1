#include "FactoryQuete.h"
#include "Quete.h"
#include "Utilitaire.h"
#include <string>

Quete* FactoryQuete::getRandomQuete()
{
	Quete* quete(0);

	int nb = Utilitaire::genererNb(1, 100);

	if (nb <= 75)
	{
		std::string name = "quête facile";
		int nivDiff = 1;
		int nivMin = Utilitaire::genererNb(1, 10);
		int recompenseenOr = Utilitaire::genererNb(100, 1000);
		int exp = Utilitaire::genererNb(100, 2000);

	}
	else if (nb > 75 && nb <= 90)
	{
		std::string name = "quête moyenne";
		int nivDiff = 2;
		int nivMin = Utilitaire::genererNb(10, 25);
		int recompenseenOr = Utilitaire::genererNb(1000, 5000);
		int exp = Utilitaire::genererNb(2000, 4000);

	}
	else
	{
		std::string name = "quête difficile";
		int nivDiff = 3;
		int nivMin = Utilitaire::genererNb(25, 99);
		int recompenseenOr = Utilitaire::genererNb(5000, 35000);
		int exp = Utilitaire::genererNb(4000, 14000);


	}
	
	return quete;
}