//
// Created by Sun Haoxian on 22/4/22.
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

vector<int> result1 = triple-> map (vector<int>{1,2,3,4});
        for(int i = 0; i < result1.size();i++) {
            cout << result1[i] << " ";
        }
        cout<<endl;

    vector<int> result2 = square-> map (vector<int>{1,2,3,4});
    for(int i = 0; i < result2.size();i++) {
        cout << result2[i] << " ";
    }
    cout<<endl;


    vector<int> result3 = absolute -> map (vector<int>{1,2,3,4});
    for(int i = 0; i < result3.size();i++) {
        cout << result3[i] << " ";
    }
    cout<<endl;


    vector<int> result4 = odd -> filter(vector<int>{1,2,3,4,5,6,7});
    for(int i = 0; i < result4.size();i++) {
        cout << result4[i] << " ";
    }
    cout<<endl;


    vector<int> result5 = NP -> filter(vector<int>{1,-1,2,-2,4,7});
    for(int i = 0; i < result5.size();i++) {
        cout << result5[i] << " ";
    }
    cout<<endl;

    vector<int> result6 = FTDP -> filter(vector<int>{11,-1,23,4354,1,22,4,-22,00});
    for(int i = 0; i < result6.size();i++) {
        cout << result6[i] << " ";
    }
    cout<<endl;

   int result7 = Min -> reduce(vector<int>{1,2,3,4,5,6,-3,-99999999});
    cout << result7 << endl;

    int result8 = GCD -> reduce(vector<int>{8,10,10,600,60000,66666666});
    cout << result8 << endl;

}