#include "Rapace.h"

Rapace::Rapace(){
    pv = 100;
	nom = "Default";
	attack = 0;
	armure = 0;
	attackSpe = 0.0f;
}

Rapace::Rapace(int p,int a,float pc){
    pv = p;
    attack = a;
    attackSpe = as;
}

Rapace::Rapace(string n){
    nom = n;
}

Rapace::~Rapace(){
    cout<<"Mon Rapace a ete detruit"<<endl;
}


int Rapace::getPv() const
{
	return pv;
}

void Rapace::setPv(int s) {
	if (s > 1000 || s < 0) {
		cerr << "pv non autorise" << endl;
		pv = 0;
	}
	else {
		pv = s;
	}
}

string Rapace::getNom() const
{
	return nom;
}

void Rapace::setNom(string n)
{
	nom = n;
}

int Rapace::getAttack() const
{
	return attack;
}

void Rapace::setAttack(int a)
{
	if (a < 0) {
		attack = 0;
	}
	else {
		attack = a;
	}
}


int Rapace::getLeech() const
{
	return leech;
}

void Rapace::setLeech(int l)
{
	if (l < 0) {
		Leech = 0;
	}
	else {
		leech = l;
	}
}

int Rapace::getArmure() const
{
	return armure;
}

void Rapace::setArmure(int ar)
{
	if (ar < 0) {
		armure = 0;
	}
	else {
		armure = ar;
	}
}

float Rapace::getAttackSpe() const
{
	return attackSpe;
}

void Rapace::setAttackSpe(float as)
{
	if (attackSpe > 1 || attackSpe < -1) {
		attackSpe = 0;
	}
	else {
		attackSpe = ar;
	}
}

void Rapace::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
	cout << "defense : " << getArmure() << endl;
	cout << "crit : " << getAttackSpe() * 100 << "%" << endl;
}

void Rapace::attackPlayer(Rapace* cible){
    float random = rand()%100;
    if(random <= (getAttackSpe()*100)){
        cout<<"Attaque Speciale"<<endl;
        cible->setPv(cible->getPv() - (getAttack()));
        Rapace->setPv(Rapace->getPv()+ (getAttack()));
    }else{
        cible->setPv(cible->getPv() - getAttack());
    }
}

bool Rapace::operator==(Rapace & p){
    return p.getPv() == getPv() && p.getAttack() == getAttack()&& p.getArmure() == getArmure()&& p.getLeecg() == getLeech();
}

Rapace Rapace::operator+(Rapace const & p){
    Rapace temp;
    temp.setPv(getPv() + p.getPv());
    temp.setAttack(getAttack() + p.getAttack());
    temp.setArmure(getArmure() + p.getArmure());
    temp.setLeech(getLeech() - p.getLeech());
    temp.setAttackSpe(max(getAttackSpe(), p.getAttackSpe()));
    return temp;
}


void Rapace::operator+=(Rapace const & p){
    setPv(getPv() + p.getPv());
    setAttack(getAttack() + p.getAttack());
    setArmure(getArmure() + p.getArmure());
    setLeech(getLeech() - p.getLeech());
    setAttackSpe(max(getAttackSpe(), p.getAttackSpe()));
}

bool Rapace::operator!=(Rapace & p){
    return !(p == *this);
}
