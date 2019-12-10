#include "DogRegister.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/**
 * DogRegister: an implementation class for storing dog objects in a register.
 *
 * Written for COMP8741 Application Development - Research Project
 * by Joel Pillar-Rogers
 * on 4 June 2019
 */

// implements the DogNameAtti condition, based on the DogCondition class
bool DogsNamedAtti::satisfies(Dog d) const
{
    bool satisfied = d.getName() == "Atti";
    return satisfied;
}

/**
* Creates a Dog Register
*/
DogRegister::DogRegister() {}

/** 
 * Adds a dog to the Register
 */
void DogRegister::addDog(Dog dog)
{
    register_.push_back(dog);
}

/** 
 * Finds and returns a dog pointer from the Register
 */
Dog *DogRegister::getDog(int regNum)
{
    for (int i = 0; i < register_.size(); i++)
    {
        if (register_.at(i).getRegNum() == regNum)
        {
            return &register_.at(i);
        }
    }
    return nullptr;
}

/** 
 * Deletes a dog from the Register
 */
void DogRegister::deleteDog(int regNum)
{
    for (int i = 0; i < register_.size(); i++)
    {
        if (register_.at(i).getRegNum() == regNum)
        {
            register_.erase(register_.begin() + i);
        }
    }
}

/**
 * Compares two dogs for the sort method
 */
bool DogRegister::compareDogs(Dog d1, Dog d2)
{
    return d1.getDogBreed() < d2.getDogBreed();
}

/** 
 * Sorts dogs by breed in the Register
 */
void DogRegister::groupByBreed()
{
    sort(register_.begin(), register_.end(), compareDogs);
}

/** 
 * Returns a new DogRegister of dogs whose names contain the given character sequence 
 */
DogRegister DogRegister::getDogsWhoseNameContains(string charSequence)
{
    DogRegister dogNames;
    for (int i = 0; i < register_.size(); i++)
    {
        if (register_.at(i).getName().find(charSequence) != string::npos)
        {
            dogNames.addDog(register_.at(i));
        }
    }
    return dogNames;
}

/** 
 * Returns a new DogRegister of dogs whose meet the given condition
 */
DogRegister DogRegister::getByCondition(const DogCondition &c)
{
    DogRegister dogList;
    for (int i = 0; i < register_.size(); i++)
    {
        if (c.satisfies(register_.at(i)))
        {
            dogList.addDog(register_.at(i));
        }
    }
    return dogList;
}

/** 
 * Prints the names of all the dogs in the register
 */
void DogRegister::print()
{
    string names = "";
    for (int i = 0; i < register_.size(); i++)
    {
        names = names + register_.at(i).getName() + ", ";
    }
    cout << names << endl;
}
