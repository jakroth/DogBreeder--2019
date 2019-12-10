#ifndef DOGREGISTER_H_
#define DOGREGISTER_H_

#include "Dog.h"
#include "DogCondition.h"
#include <iostream>
#include <vector>

/**
 * DogRegister: a header class for storing dog objects in a register.
 *
 * Written for COMP8741 Application Development - Research Project
 * by Joel Pillar-Rogers
 * on 4 June 2019
 */


// class DogsNamedAtti implements the DogCondition abstract class
class DogsNamedAtti : public DogCondition
{
public:
    bool satisfies(Dog d) const;
};



class DogRegister
{
public:
    /**
 * Creates a Dog Register
 */
    DogRegister();

    /** 
 * Adds a dog to the Register
 */
    void addDog(Dog dog);

    /** 
 * Gets a dog from the Register
 */
    Dog *getDog(int regNum);

    /** 
 * Deletes a dog from the Register
 */
    void deleteDog(int regNum);

    /**
 * Compares two dogs for the sort method
 */
    static bool compareDogs(Dog d1, Dog d2);

    /** 
 * Sorts dogs by breed in the Register
 */
    void groupByBreed();

    /** 
 * Returns a new DogRegister of dogs whose names contain the given character sequence 
 */
    DogRegister getDogsWhoseNameContains(std::string charSequence);

    /** 
 * Returns a new DogRegister of dogs whose meet the given condition
 */
    DogRegister getByCondition(const DogCondition &c);

    /** 
 * Prints the names of all the dogs in the register
 */
    void print();

private:
    std::vector<Dog> register_;
};

#endif // DOGREGISTER_H_
