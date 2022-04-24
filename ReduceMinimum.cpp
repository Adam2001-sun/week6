//
// Created by Sun Haoxian on 25/4/22.
//

#include "ReduceMinimum.h"


ReduceMinimum::ReduceMinimum() = default;


int ReduceMinimum::binaryOperator(int x, int y) {
    if(x>y){
        return y;
    }else
        return x;
}