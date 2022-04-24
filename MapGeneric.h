//
// Created by Sun Haoxian on 21/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_MAPGENERIC_H
#define CMAKE_CLION_CONAN_TEMPLATE_MAPGENERIC_H

#include <vector>


class MapGeneric {

public:
MapGeneric();

    std::vector<int> map(std::vector<int> magicNumber);

private:
    std::vector<int> map(std::vector<int> result, std::vector<int> magicNumber, int array_index);

    virtual int f(int a) = 0;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_MAPGENERIC_H
