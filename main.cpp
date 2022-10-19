#define CATCH_CONFIG_RUNNER

#include <iostream>
#include <cstring>
#include "Array.h"
#include "library.h"


using namespace std;

int main() {
    Array a(10);
    Matrix k(3);
    k.setMatrix(1, 1, 50);
    //cout<<k.getMatrix(1, 1)<<endl;
    Matrix b(k);
    //cout<<b.getMatrix(1,1)<<endl;
    cout<<b.toString()<<endl;



    // a.deleteArray(2);
    //cout<<a.get(2)<<endl;

    //cout<<a.getArrayPart(2, 5)<<endl;
    //cout<<a.Count<<endl;
    //a.existArray(14);

    //cout<<k.getMatrix(1, 0)<<endl;
    //cout<<l.getMatrix(1,1)<<endl;
    Matrix c;
    c = k + b;
    //cout<<c.getMatrix(0, 2)<<endl;
    Matrix t;
    t = k;
    //cout<<t.getMatrix(1,0)<<endl;
}