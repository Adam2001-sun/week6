//
// Created by Sun Haoxian on 22/4/22.
//

#include "FilterForTwoDigitPositive.h"

#include<string>

FilterForTwoDigitPositive::FilterForTwoDigitPositive() = default;



bool FilterForTwoDigitPositive::g(int a) {

    return (a > 0 && std::to_string(a).size() ==2);
}
