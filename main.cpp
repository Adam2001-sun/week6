//
// Created by Sun Haoxian on 24/4/22.
//

//
// Created by Sun Haoxian on 4/4/22.
//

#include<iostream>
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"



MapGeneric *triple = new MapTriple();
MapGeneric *square = new MapSquare();
MapGeneric *absolute = new MapAbsoluteValue();
FilterGeneric *odd = new FilterOdd();
FilterGeneric *NP = new FilterNonPositive();
FilterGeneric *FTDP = new FilterForTwoDigitPositive();
ReduceGeneric *Min = new ReduceMinimum;
ReduceGeneric *GCD = new ReduceGCD;


using namespace std;
int main(){

}