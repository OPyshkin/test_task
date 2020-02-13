#include "module.h"
#include "stdio.h"
int numberGlobal=0;
int maxValGlobal=2147483647;

int getNumber() {
    return numberGlobal;
}


void incrementNumber() {
    if (numberGlobal < maxValGlobal) 
        ++numberGlobal;
    else
        numberGlobal = 0;
    
}


void setMaximumValue(int maximumValue) {
    if (maximumValue < 0)
        printf("error occured");
    if (maximumValue<numberGlobal)
        numberGlobal = 0;
    maxValGlobal = maximumValue;
}