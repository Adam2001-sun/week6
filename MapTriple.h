//
// Created by Sun Haoxian on 24/4/22.
//
#ifndef CMAKE_CLION_CONAN_TEMPLATE_MAPTRIPLE_H
#define CMAKE_CLION_CONAN_TEMPLATE_MAPTRIPLE_H

#include "MapGeneric.h"
class MapTriple : public MapGeneric {
public:
    MapTriple();

    virtual ~MapTriple();

protected:
    int f(int x) override;


};


#endif //CMAKE_CLION_CONAN_TEMPLATE_MAPTRIPLE_H
