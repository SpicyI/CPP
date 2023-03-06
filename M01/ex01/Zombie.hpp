#pragma once
#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    void annonce( void );
    Zombie();
    void set_name(std::string name);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );