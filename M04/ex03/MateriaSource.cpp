/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:03:24 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 23:23:22 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "MateriaSource.hpp"

 MateriaSource::MateriaSource()
{
    for(int i = 0; i < memory_size ; i++)
        memory[i] = NULL;
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
    
    while (i < memory_size && !this->memory[i])
        i++;
    if (i == memory_size)
        return ; // can't be added to the memry cause it's full
    this->memory[i] = m->clone();
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
    }
    return (0);
}

