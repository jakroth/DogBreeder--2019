#include "Dog.h"
#include "DogRegister.h"
#include <iostream>

using namespace std;

/**
 * A program to breed dogs and store their details. 
 * 
 * Written for COMP8741 Application Development - Research Project
 * by Joel Pillar-Rogers
 * on 4 June 2019
 */



int main(int argc, char *argv[])
{
    cout << "Starting dog application..." << endl;

    DogRegister myRegister;

    Dog myDog1("Fido", "Labrador", 3200);
    Dog myDog2("Fluffy", "Poodle", 3496);
    Dog myDog3("Atti", "BrotherDog", 1337);
    Dog myDog4("Mike", "BrotherDog", 8008);
    Dog myDog5("Hallie", "Labrador", 1221);
    Dog myDog6("Korah", "Labrador", 4004);

    //myDog1.setName("Fido");
    //myDog1.setDogBreed("Poodle");
    //myDog1.setRegNum(3946);

    //myDog1.print();
    //myDog2.print();
    //cout << myDog1.getName() << endl;
    //cout << myDog2.getName() << endl;

    //Dog::printTotal();

    myDog1.addOwner("Anne");
    myDog1.addOwner("Bob");
    myDog2.addOwner("Martha");
    myDog3.addOwner("Belly");
    myDog3.addOwner("Daddy");
    myDog4.addOwner("Margy");
    myDog4.addOwner("Alex");
    myDog5.addOwner("Mum");
    myDog5.addOwner("Dad");
    myDog6.addOwner("Trev");

    //myDog1.print();
    //myDog2.print();

    myRegister.addDog(myDog1);
    myRegister.addDog(myDog2);
    myRegister.addDog(myDog3);
    myRegister.addDog(myDog4);
    myRegister.addDog(myDog5);
    myRegister.addDog(myDog6);

    myRegister.print();

    (*myRegister.getDog(3496)).print();
    //myRegister.deleteDog(3496);
    //myRegister.print();

    myRegister.groupByBreed();
    myRegister.print();

    myRegister.getDogsWhoseNameContains("i").print();
    myRegister.getByCondition(DogsNamedAtti()).print();

}
