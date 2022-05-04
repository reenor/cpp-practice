//
// Created by Reedus on 04/05/2022.
//
// https://stackoverflow.com/questions/10238670/c-c-program-that-prints-its-own-source-code-as-its-output
// A Quine is a program that outputs its source code when it is run
// 34 is the quote and 10 is the LF

#include "includes/C2.1.h"
#include <cstdio>
void C2_1() {
  char *s="#include %cincludes/C2.1.h%c%c#include <cstdio>%cvoid C2_1() {%c  char *s=%c%s%c;%c  printf(s,34,34,10,10,10,34,s,34,10,10);%c}";
  printf(s,34,34,10,10,10,34,s,34,10,10);
}