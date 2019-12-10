#include "Dog.h"
#include <set>
#include <iostream>

using namespace std;

/**
 * Dog: an implementation class for storing the details of dogs.
 *
 * Written for COMP8741 Application Development - Research Project
 * by Joel Pillar-Rogers
 * on 4 June 2019
 */


/**
* Creates a dog
*/
Dog::Dog(string name, string dogBreed, int regNum)
{
    name_ = name;
    dogBreed_ = dogBreed;
    regNum_ = regNum;
    dogCount_++;
    seqNum_ = dogCount_;
}

/**
* Getters and Setters
*/
string Dog::getName()
{
    return name_;
}

void Dog::setName(string name)
{
    name_ = name;
}

string Dog::getDogBreed()
{
    return dogBreed_;
}

void Dog::setDogBreed(string dogBreed)
{
    dogBreed_ = dogBreed;
}

int Dog::getRegNum()
{
    return regNum_;
}

void Dog::setRegNum(int regNum)
{
    regNum_ = regNum;
}

set<string> Dog::getOwners()
{
    return owners_;
}

void Dog::addOwner(string newOwner)
{
    owners_.insert(newOwner);
}

/**
* Prints the total number of dogs bred
*/
void Dog::printTotal()
{
    cout << "Total number of dogs bred = " << dogCount_ << endl;
}
/**
* Prints all the details of this dog
*/
void Dog::print()
{
    cout << "Dog " << name_ << ", Breed = " << dogBreed_ << ", #owners = " << owners_.size() << ", Registration # = " << regNum_ << ", Sequence # = " << seqNum_ << endl;
}
/**
 * definition of the dogCount static variable
 */
int Dog::dogCount_;
