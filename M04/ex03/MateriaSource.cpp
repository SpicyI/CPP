/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:03:24 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/17 01:44:30 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "MateriaSource.hpp"

 MateriaSource::MateriaSource()
{   int  i = 0;
    while (i < memory_size)
    {
        memory[i] = NULL;
        i++;
    }
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < memory_size ; i++)
    {
        if (memory[i])
            delete memory[i];
    }  
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if(this == &other)
        return *this;
    for(int i = 0; i < memory_size ; i++)
    {
        if (memory[i])
        {
            delete memory[i];
            memory[i] = NULL;
        }
        if (other.memory[i])
            memory[i] = other.memory[i]->clone();
    }
    return *this;
}

/*              member Func      */

void    MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    
    while (i < memory_size && memory[i])
        i++;
    if (i == memory_size)
    {
        delete m;
        return ; // can't be added to the memry cause it's full
    }
    if (m)
    {
        this->memory[i] = m->clone();
        delete m;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;

    while (i < memory_size)
    {
        if (memory[i])
        {
            if (memory[i]->getType() == type)
                return memory[i]->clone();
        }
        i++;
    }
    return (0);
}

