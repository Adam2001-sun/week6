//
// Created by Sun Haoxian on 21/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_MAPABSOLUTEVALUE_H
#define CMAKE_CLION_CONAN_TEMPLATE_MAPABSOLUTEVALUE_H

#include "MapGeneric.h"
#include <cmath> 
class MapAbsoluteValue : public MapGeneric {
public:

    MapAbsoluteValue();
  

protected:
    int f(int a) override;
};



#endif //CMAKE_CLION_CONAN_TEMPLATE_MAPABSOLUTEVALUE_H
