//
// Created by Sun Haoxian on 25/4/22.
//

#include "ReduceGeneric.h"
    ReduceGeneric::ReduceGeneric() =  default;



int ReduceGeneric::reduce(std::vector<int> input){
    return reduce(input[0],input,0);
}
int ReduceGeneric::reduce(int result, std::vector<int> magicNumber, int array_index) {
    if (array_index >= (int)magicNumber.size() - 1){
        return result;
    }


    return reduce(binaryOperator(result,magicNumber[array_index+1]),magicNumber,array_index+1);
}