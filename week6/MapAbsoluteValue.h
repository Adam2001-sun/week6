//
// Created by Sun Haoxian on 24/4/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_MAPABSOLUTEVALUE_H
#define CMAKE_CLION_CONAN_TEMPLATE_MAPABSOLUTEVALUE_H

#include "MapGeneric.h"
class MapAbsoluteValue : public MapGeneric {
public:

    MapAbsoluteValue();
   virtual  ~MapAbsoluteValue();

protected:
    int f(int x) override;
};



#endif //CMAKE_CLION_CONAN_TEMPLATE_MAPABSOLUTEVALUE_H
