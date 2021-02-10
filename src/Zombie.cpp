#include "Zombie.h"

Zombie::Zombie(){
    pv = 100;
	nom = "Default";
	attack = 0;
	armure = 0;
}

Zombie::Zombie(int p,int a,float pc){
    pv = p;
    attack = a;
}

Zombie::Zombie(string n){
    nom = n;
}

Zombie::~Zombie(){
    cout<<"Mon zombie a ete detruit"<<endl;
}


int Zombie::getPv() const
{
	return pv;
}

void Zombie::setPv(int s) {
	if (s > 1000 || s < 0) {
		cerr << "pv non autorise" << endl;
		pv = 0;
	}
	else {
		pv = s;
	}
}

string Zombie::getNom() const
{
	return nom;
}

void Zombie::setNom(string n)
{
	nom = n;
}

int Zombie::getAttack() const
{
	return attack;
}

void Zombie::setAttack(int a)
{
	if (a < 0) {
		attack = 0;
	}
	else {
		attack = a;
	}
}

int Zombie::getArmure() const
{
	return armure;
}

void Zombie::setArmure(int ar)
{
	if (ar < 0) {
		armure = 0;
	}
	else {
		armure = ar;
	}
}



void Zombie::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attaque : " << getAttack() << endl;
	cout << "armure : " << getArmure() << endl;
}

bool Zombie::operator==(Zombie & z){
    return z.getPv() == getPv() && z.getAttack() == getAttack()&& z.getDefense() == getDefense()&& z.getHeal() == getHeal();
}

Zombie Zombie::operator+(Zombie const & z){
    Zombie temp;
    temp.setPv(getPv() + z.getPv());
    temp.setAttack(getAttack() + z.getAttack());
    temp.setArmure(getArmure() + z.getArmure());
    return temp;
}


void Zombie::operator+=(Zombie const & z){
    setPv(getPv() + z.getPv());
    setAttack(getAttack() + z.getAttack());
    setDefense(getArmure() + z.getArmure());
}

bool Zombie::operator!=(Zombie & z){
    return !(z == *this);
}
