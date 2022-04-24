//
// Created by Sun Haoxian on 25/4/22.
//

#include "ReduceGCD.h"
ReduceGCD:: ReduceGCD() = default;
ReduceGCD:: ~ReduceGCD() = default;

int ReduceGCD::binaryOperator(int x, int y) {
    if (y==0) return x;
    return binaryOperator(y,x%y);
}