/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practical2;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

/**
 *
 * @author Joel
 */
public class DogRegister {

    ArrayList<Dog> DogRegister = new ArrayList<>();

    public void addDog(Dog dog) {
        DogRegister.add(dog);
    }

    public Dog getDog(int regNum) {
        for (int i = 0; i < DogRegister.size(); i++) {
            if (DogRegister.get(i).getRegNum() == regNum) {
                return DogRegister.get(i);
            }
        }
        return null;
    }

    public void deleteDog(int regNum) {
        for (int i = 0; i < DogRegister.size(); i++) {
            if (DogRegister.get(i).getRegNum() == regNum) {
                DogRegister.remove(i);
            }
        }
    }

    public void GroupByBreed() {
        Collections.sort(DogRegister, new DogSorter());
    }

    public ArrayList<Dog> getDogsWhoseNameContains(String charSequence) {
        ArrayList<Dog> dogNames = new ArrayList<>();
        for (int i = 0; i < DogRegister.size(); i++) {
            if (DogRegister.get(i).getName().contains(charSequence)) {
                dogNames.add(DogRegister.get(i));
            }
        }
        return dogNames;
    }

    public ArrayList<Dog> getByCondition(DogCondition c) {
        ArrayList<Dog> dogList = new ArrayList<>();
        for (int i = 0; i < DogRegister.size(); i++) {
            if (c.satisfies(DogRegister.get(i))) {
                dogList.add(DogRegister.get(i));
            }
        }
        return dogList;
    }

    @Override
    public String toString() {
        String names = "";
        for (Dog d : DogRegister) {
            names = names + d.getName() + ", ";
        }
        return names;
    }

}
