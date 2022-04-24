//
// Created by Sun Haoxian on 25/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_FILTERFORTWODIGITPOSITIVE_H
#define CMAKE_CLION_CONAN_TEMPLATE_FILTERFORTWODIGITPOSITIVE_H

#include "FilterGeneric.h"


class FilterForTwoDigitPositive : public FilterGeneric {
public:
    FilterForTwoDigitPositive();
    virtual ~FilterForTwoDigitPositive();

protected:
    bool g(int x) override;
};


#endif //CMAKE_CLION_CONAN_TEMPLATE_FILTERFORTWODIGITPOSITIVE_H
