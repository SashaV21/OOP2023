#include <iostream>
using namespace std;

#include "line.h"

void Line::print(){
    for(int i = 0; i < lineSize; i++)
        cout << line[i] << endl;
    return;
}
