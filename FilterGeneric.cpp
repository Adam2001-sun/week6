//
// Created by Sun Haoxian on 22/4/22.
//

#include "FilterGeneric.h"

FilterGeneric::FilterGeneric() = default;


std::vector<int> FilterGeneric::filter(std::vector<int> magicNumber) {
    return filter(std::vector<int>(),magicNumber,0);
}

std::vector<int> FilterGeneric::filter(std::vector<int> result, std::vector<int> magicNumber, int array_index){
   if (array_index == (int)magicNumber.size()){
       return result;
   }

   if(g(magicNumber[array_index])){
       result.push_back(magicNumber[array_index]);
   }
   return filter(result,magicNumber,array_index+1);
}