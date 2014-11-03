//
//  Question 2.cpp
//  
//
//  Created by Cory Lee on 2014-11-03.
//
//

#include <iostream>

int findEvenFibonacchiTotal(int max) {
    int total = 2;
    int index1 = 1;
    int index2 = 2;
    int currentIndex = 0;
    while (index2< max){
        currentIndex = index1 + index2;
        index1 = index2;
        index2 = currentIndex;
        if (currentIndex%2== 0){
            total += currentIndex;
        }
    }
    return total;
}

int main(int argc, const char * argv[]) {
    int total = findEvenFibonacchiTotal(4000000);
    std::cout << total;
    return 0;
}