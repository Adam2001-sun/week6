//
// Created by Sun Haoxian on 22/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_FILTERNONPOSITIVE_H
#define CMAKE_CLION_CONAN_TEMPLATE_FILTERNONPOSITIVE_H

#include "FilterGeneric.h"
class FilterNonPositive: public FilterGeneric{

public:
    FilterNonPositive();

    

protected:
    bool g(int a) override;


};


#endif //CMAKE_CLION_CONAN_TEMPLATE_FILTERNONPOSITIVE_H
