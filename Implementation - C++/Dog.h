#ifndef DOG_H_
#define DOG_H_

#include <iostream>
#include <set>

/**
 * Dog: a header class for storing the details of dogs.
 *
 * Written for COMP8741 Application Development - Research Project
 * by Joel Pillar-Rogers
 * on 4 June 2019
 */

class Dog
{
public:
    /**
     * Creates a dog
     */
    Dog(std::string name = "unknown", std::string dogBreed = "unknown", int regNum = -1);

    /**
     * Getters and Setters
     */
    std::string getName();

    void setName(std::string name);

    std::string getDogBreed();

    void setDogBreed(std::string dogBreed);

    int getRegNum();

    void setRegNum(int regNum);

    std::set<std::string> getOwners();

    void addOwner(std::string newOwner);

    /**
     * Prints the details of this dog
     */
    void print();

    /**
     * Prints the total number of all dogs bred
     */
    static void printTotal();

    /**
     * Overloads the "<" operator to allow sorting
     */
    //friend Dog operator<(const Dog &d1, const Dog &d2);

private:
    std::string name_;
    std::string dogBreed_;
    int regNum_;
    int seqNum_;
    static int dogCount_;
    std::set<std::string> owners_;
    int numberOwners_;
};

#endif // DOG_H_
