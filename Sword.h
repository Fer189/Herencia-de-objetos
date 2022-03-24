#include "tools.h"
#include <iostream>
#include <cstring>
using namespace std;

class Sword : protected Tools {
    public:
    Sword(float filo, char nombre) {
        this -> filo = filo;
        //strcpy(this -> nombre, nombre);
        this -> nombre = nombre;
        this -> setHealth(100);
        this -> setDamage(100);
        this -> setDurability(100);
    }
    void showSword() {
        cout << "Salud: " << this -> getHealth() << endl;
    }
    private:
    float filo;
    char nombre;
};