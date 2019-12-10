/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practical2;

/**
 *
 * @author Joel
 */
public class DogBreeder {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        System.out.println("Starting dog application...");

        //Dog.printTotal();
        DogRegister myRegister = new DogRegister();

        Dog myDog1 = new Dog("Fido", "Labrador", 3200);
        Dog myDog2 = new Dog("Fluffy", "Poodle", 3496);
        Dog myDog3 = new Dog("Atti", "BrotherDog", 1337);
        Dog myDog4 = new Dog("Mike", "BrotherDog", 8008);
        Dog myDog5 = new Dog("Hallie", "Labrador", 1221);
        Dog myDog6 = new Dog("Korah", "Labrador", 4004);

        //myDog1.setName("Fido");
        //myDog1.setDogBreed("Poodle");
        //myDog1.setRegNum(3946);
        
        //System.out.println(myDog1);
        //System.out.println(myDog2);
        //System.out.println(myDog1.getName());
        //System.out.println(myDog2.getName());
        
        //Dog.printTotal(); 
        
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

        //System.out.println(myDog1);
        //System.out.println(myDog2);        
                    
        myRegister.addDog(myDog1);
        myRegister.addDog(myDog2);
        myRegister.addDog(myDog3);
        myRegister.addDog(myDog4);
        myRegister.addDog(myDog5);
        myRegister.addDog(myDog6);

        System.out.println(myRegister);
        
        System.out.println(myRegister.getDog(3496));
        //myRegister.deleteDog(3496);
        //System.out.println(myRegister);
        
        myRegister.GroupByBreed();
        System.out.println(myRegister);
                
        System.out.println(myRegister.getDogsWhoseNameContains("i"));
        System.out.println(myRegister.getByCondition(new DogsNamedAtti()));
    }

}
