//
// Created by Sun Haoxian on 25/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_FILTERGENERIC_H
#define CMAKE_CLION_CONAN_TEMPLATE_FILTERGENERIC_H

#include<cmath>
#include<vector>


class FilterGeneric {
public:
    FilterGeneric();
   
    std::vector <int>filter(std::vector<int>);


private:

virtual bool g(int x) = 0;
std::vector<int> filter(std::vector<int>result,std::vector<int>, int index);
};


#endif //CMAKE_CLION_CONAN_TEMPLATE_FILTERGENERIC_H
