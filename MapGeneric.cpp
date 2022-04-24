//
// Created by Sun Haoxian on 21/4/22.
//

#include "MapGeneric.h"

MapGeneric::MapGeneric() = default;

std::vector<int> MapGeneric::map(std::vector<int> magicNumber){
return map(std::vector<int>(),magicNumber,0);
}


std::vector<int> MapGeneric::map(std::vector<int> result, std::vector<int>magicNumber, int array_index){
    if(array_index == (int)magicNumber.size()){
        return result;
    }
    result.push_back(f(magicNumber[array_index]));

    return map(result,magicNumber,array_index+1);

}

