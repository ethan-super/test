#include <"foo">     
#include "dir\foo.h" 
#define A(Y)   #Y    /* Noncompliant */
#define A(X,Y) X##Y  /* Noncompliant */
