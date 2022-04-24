//
// Created by Sun Haoxian on 25/4/22.
//

#include "FilterForTwoDigitPositive.h"

#include<string>

FilterForTwoDigitPositive::FilterForTwoDigitPositive() = default;



bool FilterForTwoDigitPositive::g(int x) {

    return (x > 0 && std::to_string(x).size() ==2);
}
