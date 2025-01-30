#ifndef LINE_H
#define LINE_H

#include "utils.h"

class Line {
    public:
        Line () {
            lineSize = 0;
            line = NULL;
        };
        Line (int lineSize) {
            line = new int [lineSize];
            for(int i = 0; i < lineSize; i++){
                line[i] = readInt("ENTER NEW VALUE --> ");
            }
        };
        ~Line () {
            delete[] arr;
        };
    public:
        void print();
    private:
        int lineSize;
        int *line;
};

#endif 
