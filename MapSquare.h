//
// Created by Sun Haoxian on 24/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_MAPSQUARE_H
#define CMAKE_CLION_CONAN_TEMPLATE_MAPSQUARE_H
#include <cmath>
#include"MapGeneric.h"

class MapSquare : public MapGeneric {

public:
    MapSquare();
   

protected:
    int f(int x) override;
};


#endif //CMAKE_CLION_CONAN_TEMPLATE_MAPSQUARE_H
