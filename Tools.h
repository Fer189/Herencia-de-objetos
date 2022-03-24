#ifndef TOOLS_H
#define TOOLS_H

class Tools {
    public:
    void setHealth(int health) {
        this -> health = health; 
    }
    int getHealth() {
        return this -> health; 
    }
    void setDurability(int durability) {
        this -> durability = durability;
    }
    int getDurability() {
        return this -> durability;
    }
    void setDamage(int damage) {
        this -> damage = damage;
    }
    int getDamage() {
        return this -> damage;
    }
    private:
    int health;
    int durability;
    int damage;
};

#endif