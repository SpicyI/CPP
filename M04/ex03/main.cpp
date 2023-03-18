/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:05:52 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/17 16:21:12 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

void test1()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp = NULL;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;   
}

void test2()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    Character* me = new Character("Nunu");
    AMateria* tmp = NULL;
    tmp = src->createMateria("dcshb");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    ICharacter* enemy = new Character("scuttle crab");
    ICharacter* enemy2 = 0;
    me->use(0, *enemy);
    me->use(0, *enemy2);
    me->use(1, *enemy);
    AMateria *itemIntheFoor = me->getMateria(0);
    me->unequip(0);
    delete enemy;
    delete me;
    delete src;
    if (itemIntheFoor)
        delete itemIntheFoor;
    
    
}
int main(){ 
    
    std::cout<< "* * * * * * * * TEST1 * * * * * * * * " << std::endl;
    test1();   
    std::cout<< "* * * * * * * * TEST2 * * * * * * * * " << std::endl;
    test2();
    system("leaks test");
}