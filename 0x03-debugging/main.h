#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i)
{return  printf("The number is &s.\n", i>0 ? "positive" : i < 0 ? "negative" : "zero"); }
#endif /* MAIN_H */
