#include <iostream>
#include "Sword.h"
#include "tools.h"
#include "Axe.h"
#define WOOD 1
#define STONE 2
#define STEEL 3
#define GOLD 4
#define DIAMOND 5
using namespace std;

int main() {
    Sword sword("MataPuercos", DIAMOND);
    Axe axe("CortaTroncos", DIAMOND);
    sword.showSword();
    sword.attack();
    sword.showSword();
    cout << " " << endl;
    axe.showAxe();
    axe.attack();
    axe.attack();
    axe.attackTree();
    axe.showAxe();
    return 0;
}