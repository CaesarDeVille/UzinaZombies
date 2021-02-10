#include "Bomber.h"

Bomber::Bomber(){
    pv = 100;
	nom = "Default";
	attack = 20;
	armure = 0;
	attackSpe = 0.0f;
}

Bomber::Bomber(int p,int a,float pc){
    pv = p;
    attack = a;
    attackSpe = as;
}

Bomber::Bomber(string n){
    nom = n;
}

Bomber::~Bomber(){
    cout<<"Mon Bomber a ete detruit"<<endl;
}


int Bomber::getPv() const
{
	return pv;
}

void Bomber::setPv(int s) {
	if (s > 1000 || s < 0) {
		cerr << "pv non autorise" << endl;
		pv = 0;
	}
	else {
		pv = s;
	}
}

string Bomber::getNom() const
{
	return nom;
}

void Bomber::setNom(string n)
{
	nom = n;
}

int Bomber::getAttack() const
{
	return attack;
}

void Bomber::setAttack(int a)
{
	if (a < 0) {
		attack = 0;
	}
	else {
		attack = a;
	}
}

int Bomber::getArmure() const
{
	return armure;
}

void Bomber::setArmure(int ar)
{
	if (ar < 0) {
		armure = 0;
	}
	else {
		armure = ar;
	}
}

float Bomber::getAttackSpe() const
{
	return attackSpe;
}

void Bomber::setAttackSpe(float as)
{
	if (attackSpe > 1 || attackSpe < -1) {
		attackSpe = 0;
	}
	else {
		attackSpe = ar;
	}
}

void Bomber::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
	cout << "defense : " << getArmure() << endl;
	cout << "crit : " << getAttackSpe() * 100 << "%" << endl;
}

void Bomber::attackPlayer(Bomber* cible){
    float random = rand()%100;
    if(random <= (getAttackSpe()*100)){
        cout<<"Attaque Speciale"<<endl;
        cible->setPv(cible->getPv() - (getAttack()*3));
        Bomber->setPv(Bomber->getPv() - 1000);
    }else{
        cible->setPv(cible->getPv() - getAttack());
    }
}

bool Bomber::operator==(Bomber & p){
    return p.getPv() == getPv() && p.getAttack() == getAttack()&& p.getArmure() == getArmure()&& p.getLeecg() == getLeech();
}

Bomber Bomber::operator+(Bomber const & p){
    Bomber temp;
    temp.setPv(getPv() + p.getPv());
    temp.setAttack(getAttack() + p.getAttack());
    temp.setArmure(getArmure() + p.getArmure());
    temp.setLeech(getLeech() - p.getLeech());
    temp.setAttackSpe(max(getAttackSpe(), p.getAttackSpe()));
    return temp;
}


void Bomber::operator+=(Bomber const & p){
    setPv(getPv() + p.getPv());
    setAttack(getAttack() + p.getAttack());
    setArmure(getArmure() + p.getArmure());
    setLeech(getLeech() - p.getLeech());
    setAttackSpe(max(getAttackSpe(), p.getAttackSpe()));
}

bool Bomber::operator!=(Bomber & p){
    return !(p == *this);
}
