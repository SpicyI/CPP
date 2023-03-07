#pragma once
#include <iostream>

class Zombie
{
private:
    std::string _name;

public:
    void annonce(void);
    Zombie(const std::string name);
    ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);