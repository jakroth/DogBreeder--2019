/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practical2;

import java.util.HashSet;
import java.util.Set;

/**
 *
 * @author Joel
 */
public class Dog {

    private String name = "unknown";
    private String dogBreed = "unknown";
    private int regNum = -1;
    private final Set<String> owners = new HashSet<>();
    private static int dogCount = 0;
    private int seqNum = 0;

    public Dog() {
        dogCount++;
        seqNum = dogCount;
    }

    public Dog(String name, String breed, int regNum) {
        this.name = name;
        this.dogBreed = breed;
        this.regNum = regNum;
        dogCount++;
        seqNum = dogCount;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getDogBreed() {
        return dogBreed;
    }

    public void setDogBreed(String dogBreed) {
        this.dogBreed = dogBreed;
    }

    public int getRegNum() {
        return regNum;
    }

    public void setRegNum(int regNum) {
        this.regNum = regNum;
    }

    public Set<String> getOwners() {
        return owners;
    }

    public int getNumberOwners() {
        return owners.size();
    }

    public void addOwner(String newOwner) {
        owners.add(newOwner);
    }

    public static void printTotal() {
        System.out.println("Total number of dogs bred = " + dogCount);
    }

    public String toString() {
        return "Dog " + name + ", Breed = " + dogBreed + ", #owners = " + owners.size() + ", Registration # = " + regNum + ", Sequence # = " + seqNum;
    }

}
