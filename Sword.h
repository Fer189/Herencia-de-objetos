#include "tools.h"
#include <iostream>
#include <cstring>
#define WOOD 1
#define STONE 2
#define STEEL 3
#define GOLD 4
#define DIAMOND 5
using namespace std;

class Sword : protected Tools {
    public:
    Sword(string name, int material) {
        sharpness = 100;
        setName(name);
        setHealth(100);
        switch(material) {
            case WOOD:
            setDurability(100);
            setDamage(100);
            break;
            case STONE:
            setDurability(150);
            setDamage(150);
            break;
            case STEEL:
            setDurability(200);
            setDamage(200);
            break;
            case GOLD:
            setDurability(250);
            setDamage(350);
            break;
            case DIAMOND:
            setDurability(350);
            setDamage(450);
            break;
        }
    }
    void showSword() {
        cout << "Salud: " << getHealth() << endl;
        cout << "Nombre: " << getName() << endl;
        cout << "Durabilidad " << getDurability() << endl;
    }
    void attack() {
        setHealth(getHealth() - (1000 / getDurability()));
        cout << "Daño realizado: " << (sharpness * getDamage() * enchantmentLevel/ 1000) << endl;
    }
    void repair() {
        setHealth(100);
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