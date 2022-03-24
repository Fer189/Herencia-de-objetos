#include <iostream>
#include "Sword.h"
#include "tools.h"
#include "Axe.h"
#include "Picaxe.h"
#include "Shovel.h"
#include "Machete.h"
#define WOOD 1
#define STONE 2
#define STEEL 3
#define GOLD 4
#define DIAMOND 5
using namespace std;

int main() {
    Sword sword("MataPuercos", DIAMOND);
    Axe axe("CortaTroncos", DIAMOND);
    Picaxe picaxe("PikaPiedras", DIAMOND);
    Shovel shovel("ExcavaTierra", DIAMOND);
    Machete machete("CortaCocos", DIAMOND);
    sword.showSword();
    sword.setEnchantment(3);
    sword.attack();
    sword.showSword();
    sword.attack();
    sword.showSword();
    cout << " " << endl;
    axe.showAxe();
    axe.attack();
    axe.attack();
    axe.attackTree();
    axe.showAxe();
    cout << " " << endl;
    picaxe.showPicaxe();
    picaxe.attack();
    picaxe.attackMineralOre();
    picaxe.showPicaxe();
    cout << " " << endl;
    shovel.showShovel();
    shovel.attack();
    shovel.attackDirt();
    shovel.showShovel();
    cout << " " << endl;
    machete.showMachete();
    machete.attack();
    machete.showMachete();
    return 0;
}