#include<stdio.h> // standard input output library header

// Defining constants using #define directive
#define pi 3.14f
#define size 512

#define vtab '\013' // 013 is octal value for vertical tab
#define bell '\007' // 007 is octal value for bell
#define hbell '\x7' // hexadecimal value for bell
#define tab '\t' // ascii value for tab

void main() {

  /* Notes :-  
  
    1. There is no suffix for double in C; the suffix L specifies long double if used with floating point literal
          
      Ex -
        long double ld = 3.14L   // long double
        double d = 3.14   // double

    2. Be careful about range of values that can be stored in a particular data type and also about implicit type conversions.

    3. C is a middle level language as it has features of low level language (working with bits, bytes and words) and also of high level language (English like 
      syntax).

    4. C is strongly typed in that the variable type must be specified when declaring the variable. However, C can also be regarded as weakly typed because users can convert data types through a cast and also supports implicit type conversions without compiler errors 

  */

  // Defininig constants using const keyword
  const int i = 12345;    // integer constant
  const long int L = 99999L;    // long int constant (L or l is used as suffix for long integer and long double depending on context).
  const double D = 12.34;   // double constant (double datatype signifies double precision)
  const float F = 1234.345f; // float constant
  const int O = 01234; // Octal constant
  const int H = 0x1abc; // Hexadecimal constant
  const int U = 123u; // unsigned constant

  printf("\n Integer: %d", i);
  printf("\n Long integer: %ld", L); 
  printf("\n Float: %f", F);
  printf("\n Double: %lf", D);
  printf("\n Octal: %o", O);
  printf("\n Hexadecimal: %X", H);
  printf("\n Unsigned integer: %u", U);
  printf("\n pi: %f", pi);
  printf("\n size: %d", size);

  printf("\nHello%cThis is bell sound%c", tab, hbell);

}