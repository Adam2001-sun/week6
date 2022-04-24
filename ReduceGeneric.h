//
// Created by Sun Haoxian on 22/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_REDUCEGENERIC_H
#define CMAKE_CLION_CONAN_TEMPLATE_REDUCEGENERIC_H

#include<vector>
#include<string>
#include<cmath>


class ReduceGeneric {
public:
    ReduceGeneric();
   

    int reduce(std::vector<int> magicNumber);

private:
     int reduce(int result, std::vector<int> magicNumber, int array_index);
      virtual int binaryOperator(int first_number, int second_number) = 0;
};


#endif //CMAKE_CLION_CONAN_TEMPLATE_REDUCEGENERIC_H
