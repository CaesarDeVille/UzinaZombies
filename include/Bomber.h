#ifndef BOMBER_H
#define BOMBER_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Bomber
{
private:
	int pv = 50;
	string nom = "Louis";
	int attack = 5;
	int armure = 0;
	float attackSpe = 0.5f;
	int leech = 5;

public:
    //CONSTRUCTEURS
    Bomber();
    Bomber(int rz, int a, float pc);
    Bomber(string n);


    //DESTRUCTEUR
    ~Bomber();

    //GETTER/SETTER PV
	int getPv() const;
	void setPv(int s);

    //GETTER/SETTER NOM
	string getNom() const;
	void setNom(string n);

    //GETTER/SETTER LEECH
	int getLeech() const;
	void setLeech(int l);

    //GETTER/SETTER ATTACKSPE
	float getAttackSpe() const;
	void setAttackSpe(float d);

    //GETTER/SETTER ATTACK
	int getAttack() const;
	void setAttack(int a);

    //GETTER/SETTER ARMURE
	int getArmure() const;
	void setArmure(int d);

    //AFFICHE LES INFOS DU PERSO
	void showInfos() const;

    void attackPlayer(Bomber* cible);

    bool operator==(Bomber & rz);

    Bomber operator+(Bomber const & rz);
    void operator+=(Bomber const & rz);

    bool operator!=(Bomber & rz);
};

#endif // RAPACE_H
