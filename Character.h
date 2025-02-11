#pragma once
#include <string>
 
class asdf;  // placeholder
 
class Character
{
public:
    Character(const std::string &charClass, int health, const asdf *asdf); // Constructor
    virtual ~Character();  // Destructor
 
    virtual void purchaseParkingPass() = 0; // In order to make Person abstract
 
private:
    std::string charClass;
    int health;
    const asdf *asdf;
};