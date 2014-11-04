//
//  Question 3.cpp
//  
//
//  Created by Cory Lee on 2014-11-03.
//
//

#include <iostream>

unsigned long largestPrimeFactor(long number) {
    unsigned long currentNumber = number;
    unsigned long currentPrime = 1;
    
    //reduce even numbers
    
    while ((currentNumber%2) == 0) {
        currentNumber = currentNumber / 2;
    }
    if (currentNumber == 1){
        return 2;
    }
    
    while (currentNumber != 1) {
        currentPrime += 2;
        while (currentNumber%currentPrime == 0) {
            currentNumber=currentNumber / currentPrime;
        }
    }
    return currentPrime;
}

int main(int argc, const char * argv[]) {
    int total = largestPrimeFactor(600851475143);
    std::cout << total;
    return 0;
}