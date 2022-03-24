#include "tools.h"
#include <iostream>
#include <cstring>
#define WOOD 1
#define STONE 2
#define STEEL 3
#define GOLD 4
#define DIAMOND 5
using namespace std;

class Shovel : protected Tools {
    public:
    Shovel(string name, int material) {
        sharpness = 100;
        setName(name);
        setHealth(100);
        switch(material) {
            case WOOD:
            setDurability(200);
            setDamage(25);
            break;
            case STONE:
            setDurability(250);
            setDamage(40);
            break;
            case STEEL:
            setDurability(280);
            setDamage(50);
            break;
            case GOLD:
            setDurability(330);
            setDamage(90);
            break;
            case DIAMOND:
            setDurability(420);
            setDamage(110);
            break;
        }
    }
    void showShovel() {
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
    void attackDirt() {
        setHealth(getHealth() - (1000 / getDurability() / 2));
        cout << "Daño realizado: " << (sharpness * getDamage() * 10 * enchantmentLevel/ 1000) << endl;
    }
    void setEnchantment(int level) {
        this -> enchantmentLevel = level;
    }
    int getEnchantment() {
        return this -> enchantmentLevel;
    }
    private:
    int enchantmentLevel = 1;
    int sharpness;
};