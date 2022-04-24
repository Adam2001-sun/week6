//
// Created by Sun Haoxian on 25/4/22.
//

#include "ReduceGeneric.h"
    ReduceGeneric::ReduceGeneric() =  default;



int ReduceGeneric::reduce(std::vector<int> input){
    return reduce(input[0],input,0);
}
int ReduceGeneric::reduce(int result, std::vector<int> input, int index) {
    if (index >= (int)input.size() - 1){
        return result;
    }


    return reduce(binaryOperator(result,input[index+1]),input,index+1);
}