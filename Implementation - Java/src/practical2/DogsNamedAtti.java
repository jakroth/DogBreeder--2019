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
public class DogsNamedAtti implements DogCondition {
    @Override
    public boolean satisfies(Dog d) {
        boolean satisfied = d.getName() == "Atti";  
        return satisfied;
    }
}
