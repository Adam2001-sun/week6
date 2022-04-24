//
// Created by Sun Haoxian on 25/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_REDUCEMINIMUM_H
#define CMAKE_CLION_CONAN_TEMPLATE_REDUCEMINIMUM_H

#include "ReduceGeneric.h"
#include <cmath>

class ReduceMinimum : public ReduceGeneric {
public:
    ReduceMinimum();


protected:
int binaryOperator(int x, int y) override;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_REDUCEMINIMUM_H
