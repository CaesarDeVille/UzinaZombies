#include <iostream>
#include "Zombie.h"
#include "Rapace.h"
#include "Bomber.h"

using namespace std;

int main() {
    srand(time(NULL));
	Zombie p1;

	p1.setNom("Jean");
	p1.setAttack(50);
	p1.setArmure(20);
	p1.showInfos();
	cout << endl;

	cout << "	Zombie 2  " << endl;
	Zombie z2(z1);
	p2.setNom("Alliot");
	p2.setAttack(20);
	p2.showInfos();
	cout << endl;

	z1.~Zombie();

	cout << "	personnage 3  " << endl;
	Zombie p3(200,50,0.2);
    z3.showInfos();
	cout << endl;

	cout << "	personnage 4 " << endl;
	Zombie z4("Celine");
    z4.showInfos();
	cout << endl;

	cout << "Attack de p4 = "<<z4.getAttack()<<endl;
	cout << "PV de P3 = "<<z3.getPv()<<endl;

    cout <<"ATTACK"<<endl;
	z4.attackPlayer(&z3);

	cout << "Attack de p4 = "<<z4.getAttack()<<endl;
	cout << "PV de P3 = "<<z3.getPv()<<endl;

	cout << "heal de p2 = "<<z2.getLeech()<<endl;
	cout << "PV de P3 = "<<z3.getPv()<<endl;

    cout <<"HEAL"<<endl;
	z2.healPlayer(&z3);

	cout << "heal de p2 = "<<z2.getHeal()<<endl;
	cout << "PV de P3 = "<<z3.getPv()<<endl;

	if(z1 != z2){
        cout<<z1.getNom()<< " pas egal a "<<z2.getNom()<<endl;
	}else{
        cout<<z1.getNom()<< " egal a "<<z2.getNom()<<endl;
	}

	Zombie fusion;
	fusion = z2 + z3;
    fusion.showInfos();

    fusion += z4;
    fusion.showInfos();
    return 0;
}
