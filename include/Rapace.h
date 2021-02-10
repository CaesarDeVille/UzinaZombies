#ifndef RAPACE_H
#define RAPACE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Rapace
{
private:
	int pv = 50;
	string nom = "Speedy";
	int attack = 5;
	int armure = 0;
	float attackSpe = 0.5f;
	int leech = 5;

public:
    //CONSTRUCTEURS
    Rapace();
    Rapace(int rz, int a, float pc);
    Rapace(string n);


    //DESTRUCTEUR
    ~Rapace();

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

    void attackPlayer(Rapace* cible);

    bool operator==(Rapace & rz);

    Rapace operator+(Rapace const & rz);
    void operator+=(Rapace const & rz);

    bool operator!=(Rapace & rz);
};

#endif // RAPACE_H
