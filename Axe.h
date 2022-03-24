#include "tools.h"
#include <iostream>
#include <cstring>
#define WOOD 1
#define STONE 2
#define STEEL 3
#define GOLD 4
#define DIAMOND 5
using namespace std;

class Axe : protected Tools {
    public:
    Axe(string name, int material) {
        sharpness = 100;
        setName(name);
        setHealth(100);
        switch(material) {
            case WOOD:
            setDurability(150);
            setDamage(50);
            break;
            case STONE:
            setDurability(200);
            setDamage(75);
            break;
            case STEEL:
            setDurability(250);
            setDamage(100);
            break;
            case GOLD:
            setDurability(300);
            setDamage(175);
            break;
            case DIAMOND:
            setDurability(400);
            setDamage(225);
            break;
        }
    }
    void showAxe() {
        cout << "Salud: " << getHealth() << endl;
        cout << "Nombre: " << getName() << endl;
        cout << "Durabilidad " << getDurability() << endl;
    }
    void attack() {
        setHealth(getHealth() - (1000 / getDurability()));
        cout << "Daño realizado: " << (sharpness * getDamage() / 1000) << endl;
    }
    void repair() {
        setHealth(100);
    }
    void attackTree() {
        setHealth(getHealth() - (1000 / getDurability() / 2));
        cout << "Daño realizado: " << (sharpness * getDamage() / 1000) << endl;
    }
    private:
    int sharpness;
};