
/*
 *  tsunami.h
 *  Library for MECA1120 : Finite Elements for dummies
 *
 *  Copyright (C) 2016 UCL-EPK : Vincent Legat
 *  All rights reserved.
 *
 */

#ifndef _TSUNAMI_H_
#define _TSUNAMI_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

double tsunamiInitialConditionOkada(double x, double y);
void   tsunamiWriteFile(const char *baseResultName, int iter, double *U, double *V, double *E, int nelem);
void   tsunamiReadFile(const char *baseResultName, int iter, double *U, double *V, double *E, int nelem);
void   tsunamiCompute(double dt, int nmax, int sub, const char *meshFileName, const char *baseResultName);


#endif
