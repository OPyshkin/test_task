/**
 * Module for incrementinig
 * Author OPyshkin
 * Version 1.0
 * Function prototypes an module.h
*/

#include "stdio.h"

/** Declaring global variable for incremented number */
int numberGlobal=0;

/** Declaring global variable for setting maximum value of incremented number */
int maxValGlobal=2147483647;

/** Returning current number */
int getNumber() {
    return numberGlobal;
}

/** Incrementing global variable if it's less than maxValGlobal
 * Zero value by default
*/
void incrementNumber() {
    if (numberGlobal < maxValGlobal) 
        ++numberGlobal;
    else
        numberGlobal = 0;
}

/** Setting maximum value for incrementation
 * Throwing an error at setting maximumValue less than 0
 * Setting global number value to zero at reaching max value 
 * Params: int maximumValue
*/
void setMaximumValue(int maximumValue) {
    if (maximumValue < 0)
        printf("error occured");
    if (maximumValue<numberGlobal)
        numberGlobal = 0;
    maxValGlobal = maximumValue;
}