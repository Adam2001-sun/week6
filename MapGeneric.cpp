//
// Created by Sun Haoxian on 24/4/22.
//

#include "MapGeneric.h"

MapGeneric::MapGeneric() = default;

std::vector<int> MapGeneric::map(std::vector<int> input){
return map(std::vector<int>(),input,0);
}


std::vector<int> MapGeneric::map(std::vector<int> result, std::vector<int>input, int index){
    if(index == (int)input.size()){
        return result;
    }
    result.push_back(f(input[index]));

    return map(result,input,index+1);

}

