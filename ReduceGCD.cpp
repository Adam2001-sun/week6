//
// Created by Sun Haoxian on 22/4/22.
//

#include "ReduceGCD.h"
ReduceGCD:: ReduceGCD() = default;



int ReduceGCD::binaryOperator(int first_number, int second_number) {
    if (second_number ==0) return first_number;
    return binaryOperator(second_number ,first_number%second_number );
}