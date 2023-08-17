#include<stdio.h>

void main() {

  /* Note :- 
  
  1. The value of enum variables are internally stored as integers by compiler startng from 0 unless specified explixitly.*/

  enum Birds {sparrow, robin, eagle, egret}; /*Declares datatype enum Birds and speifies values(enumerations) that it can accept*/
  enum Birds Bird1, Bird2; /*Variables of type enum Birds*/

  Bird1 = sparrow; /* Can't accept any values outside of the enum Birds list*/
  Bird2 = egret;

  printf("\nsparrow: %d", sparrow);
  printf("\nerget: %d", egret);

  enum escape {BELL='\a', BACKSPACE='\b', TAB='\t', NEWLINE='\n', VTAB='\v', RETURN='\r'}; /*values specified explicitly*/
  enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC}; /*This will follow on the pattern*/

  enum escape tab = TAB; 
  enum months month = MAR;

  printf("\n What's%cYour Name?%c", TAB, NEWLINE);
  printf("\n What's%cYour Name?%c", tab, NEWLINE);
  printf("\n Month: %d", month);

  /*TAB = 5; Error - beacuse enum is a collection of named constant, so we can't change the value of any element of enum*/

}