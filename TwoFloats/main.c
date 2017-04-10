//
//  main.c
//  TwoFloats
//
//  Created by Katherine Owens on 4/6/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float firstNumber;
    float secondNumber;
    
    firstNumber = 3.14;
    secondNumber = 42.0;
    
    double sum;
    
    sum = firstNumber + secondNumber;
    
    printf("%f \n", sum);
    
    return 0;
    
}
