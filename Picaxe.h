#include "tools.h"
#include <iostream>
#include <cstring>
#define WOOD 1
#define STONE 2
#define STEEL 3
#define GOLD 4
#define DIAMOND 5
using namespace std;

class Picaxe : protected Tools {
    public:
    Picaxe(string name, int material) {
        hardness = 100;
        setName(name);
        setHealth(100);
        switch(material) {
            case WOOD:
            setDurability(150);
            setDamage(25);
            break;
            case STONE:
            setDurability(220);
            setDamage(40);
            break;
            case STEEL:
            setDurability(280);
            setDamage(50);
            break;
            case GOLD:
            setDurability(340);
            setDamage(90);
            break;
            case DIAMOND:
            setDurability(450);
            setDamage(110);
            break;
        }
    }
    void showPicaxe() {
        cout << "Salud: " << getHealth() << endl;
        cout << "Nombre: " << getName() << endl;
        cout << "Durabilidad " << getDurability() << endl;
    }
    void attack() {
        setHealth(getHealth() - (1000 / getDurability()));
        cout << "Daño realizado: " << (hardness * getDamage() / 1000) << endl;
    }
    void repair() {
        setHealth(100);
    }
    void attackMineralOre() {
        setHealth(getHealth() - (1000 / getDurability() / 2));
        cout << "Daño realizado: " << (hardness * getDamage() * 3 * enchantmentLevel/ 1000) << endl;
    }
    void setEnchantment(int level) {
        this -> enchantmentLevel = level;
    }
    int getEnchantment() {
        return this -> enchantmentLevel;
    }
    private:
    int enchantmentLevel = 1;
    int hardness;
};