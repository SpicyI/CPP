/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:44:19 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 18:00:10 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void test2()
{
    Animal* pets[10];
    std::cout <<"\n--------------------------------------" << std::endl;
    for(int i = 0 ; i < 5 ; i++)
        pets[i] = new Dog();
    std::cout <<"\n--------------------------------------" << std::endl;
    for(int i = 5 ; i < 10; i++)
        pets[i] = new Cat();
    std::cout <<"\n--------------------------------------" << std::endl;
    for(int i = 0 ; i < 10 ; i++)
        delete pets[i];  
}

void test1()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;//should not create a leak
    delete i;
}

void test3()
{
    Dog *jhon = new Dog;
    Dog *sara = new Dog;
    
    *jhon = *sara;
    delete sara;
    jhon->makeSound();
    delete jhon;
    
}

int main()
{
    
    std::cout << "* * * * * * * * * TEST1 * * * * * * * * *" << std::endl;
    test1();
    std::cout << "* * * * * * * * * TEST2 * * * * * * * * *" << std::endl;
    test2();
    std::cout << "* * * * * * * * * TEST3 * * * * * * * * *" << std::endl;
    test3();
    system ("leaks Animal");
}