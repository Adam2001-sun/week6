//
// Created by Sun Haoxian on 22/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_REDUCEGCD_H
#define CMAKE_CLION_CONAN_TEMPLATE_REDUCEGCD_H

#include "ReduceGeneric.h"
class ReduceGCD : public ReduceGeneric{
public:
    ReduceGCD();
 

protected:
    int binaryOperator(int first_number, int second_number) override;
};


#endif //CMAKE_CLION_CONAN_TEMPLATE_REDUCEGCD_H
