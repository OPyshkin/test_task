#include "module.h"

int number=0;
int maxVal=2147483647;

int getNumber()
{
    return number;
}


void incrementNumber()
{
    if (number<maxVal)
    {
        ++number;
    }
    else
    {
        number=0;
    }
    
}


void setMaximumValue(int maximumValue)
{
   maxVal = maximumValue;
}