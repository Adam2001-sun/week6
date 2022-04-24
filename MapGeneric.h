//
// Created by Sun Haoxian on 24/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_MAPGENERIC_H
#define CMAKE_CLION_CONAN_TEMPLATE_MAPGENERIC_H

#include <vector>


class MapGeneric {



public:
MapGeneric();

    

    std::vector<int> map(std::vector<int> input);


private:

    std::vector<int> map(std::vector<int> result, std::vector<int> input, int index);

protected:
    virtual int f(int x) = 0;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_MAPGENERIC_H
