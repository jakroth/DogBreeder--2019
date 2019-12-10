/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practical2;

import java.util.Comparator;

/**
 *
 * @author Joel
 */
public class DogSorter implements Comparator<Dog> {

    @Override
    public int compare(Dog d1, Dog d2) {
        return d1.getDogBreed().compareTo(d2.getDogBreed());
    }
}
