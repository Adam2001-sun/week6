//
// Created by Sun Haoxian on 25/4/22.
//

#include "FilterGeneric.h"

FilterGeneric::FilterGeneric() = default;


std::vector<int> FilterGeneric::filter(std::vector<int> input) {
    return filter(std::vector<int>(),input,0);
}

std::vector<int> FilterGeneric::filter(std::vector<int> result, std::vector<int> input, int index){
   if (index == (int)input.size()){
       return result;
   }

   if(g(input[index])){
       result.push_back(input[index]);
   }
   return filter(result,input,index+1);
}