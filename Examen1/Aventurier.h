#pragma once
#include "Quete.h"

#include <string>
#include <vector>

class Aventurier
{
public:
	int niveau;
	std::vector<Quete*> tabQuete;
	
	Aventurier(int inv);
	~Aventurier();

	void AfficherQuete();
	void AjouterQuete(Quete* quete);
	int getNiv();


	Aventurier(int niveau);
};

