//
// Created by Sun Haoxian on 22/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_REDUCEMINIMUM_H
#define CMAKE_CLION_CONAN_TEMPLATE_REDUCEMINIMUM_H

#include "ReduceGeneric.h"
#include <cmath>

class ReduceMinimum : public ReduceGeneric {
public:
    ReduceMinimum();


protected:
int binaryOperator(int first_number, int second_number) override;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_REDUCEMINIMUM_H
