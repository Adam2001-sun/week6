//
// Created by Sun Haoxian on 22/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_FILTERODD_H
#define CMAKE_CLION_CONAN_TEMPLATE_FILTERODD_H

#include "FilterGeneric.h"
#include <cmath>
class FilterOdd:public FilterGeneric {
public:
    FilterOdd();
    

protected:
    bool g(int a) override;
};


#endif //CMAKE_CLION_CONAN_TEMPLATE_FILTERODD_H
