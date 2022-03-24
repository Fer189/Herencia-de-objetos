#include <iostream>
#include "Sword.h"
#include "tools.h"
using namespace std;

int main() {
    float filo = 100;
    cout << "Hello world!" << endl;
    Sword sword(filo, 'c');
    sword.showSword();
    return 0;
}