//
// Created by Sun Haoxian on 25/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_REDUCEGENERIC_H
#define CMAKE_CLION_CONAN_TEMPLATE_REDUCEGENERIC_H

#include<vector>
#include<string>


class ReduceGeneric {
public:
    ReduceGeneric();
    virtual ~ReduceGeneric();

    virtual int binaryOperator(int x, int y) = 0;
    int reduce(std::vector<int> input);

private:
     int reduce(int result, std::vector<int> input, int index);
};


#endif //CMAKE_CLION_CONAN_TEMPLATE_REDUCEGENERIC_H
