#ifndef TOOLS_H
#define TOOLS_H

class Tools {
    public:
    void setName(std::string name) {
        this -> name = name;
    }
    std::string getName() {
        return this->name;
    } 
    void setHealth(float health) {
        this -> health = health; 
    }
    float getHealth() {
        return this -> health; 
    }
    void setDurability(float durability) {
        this -> durability = durability;
    }
    float getDurability() {
        return this -> durability;
    }
    void setDamage(int damage) {
        this -> damage = damage;
    }
    int getDamage() {
        return this -> damage;
    }
    private:
    float health;
    float durability;
    int damage;
    std::string name;
};
#endif