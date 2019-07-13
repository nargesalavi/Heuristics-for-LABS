

#include <iostream>
#include <string>
#include <random>
#include <algorithm>
#include "labs.h"

using namespace std;

void sequenceGen(int* seq, int n);

double OneOneEA_1(int* seq, int n, int NOfIter);

double OneOneEA_2(int* seq, int n, int NOfIter);

double exhustiveSearch(int* seq, int n);

double simulatedAnealing(int* seq, int n, int NOfIter);
