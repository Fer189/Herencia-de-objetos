#include "tools.h"
#include <iostream>
#include <cstring>
#define WOOD 1
#define STONE 2
#define STEEL 3
#define GOLD 4
#define DIAMOND 5
using namespace std;

class Machete : protected Tools {
    public:
    Machete(string name, int material) {
        sharpness = 100;
        setName(name);
        setHealth(100);
        switch(material) {
            case WOOD:
            setDurability(90);
            setDamage(80);
            break;
            case STONE:
            setDurability(140);
            setDamage(130);
            break;
            case STEEL:
            setDurability(190);
            setDamage(170);
            break;
            case GOLD:
            setDurability(230);
            setDamage(300);
            break;
            case DIAMOND:
            setDurability(290);
            setDamage(380);
            break;
        }
    }
    void showMachete() {
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