//
// Created by Sun Haoxian on 25/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_REDUCEGCD_H
#define CMAKE_CLION_CONAN_TEMPLATE_REDUCEGCD_H

#include "ReduceGeneric.h"
class ReduceGCD : public ReduceGeneric{
public:
    ReduceGCD();
 

protected:
    int binaryOperator(int x, int y) override;
};


#endif //CMAKE_CLION_CONAN_TEMPLATE_REDUCEGCD_H
