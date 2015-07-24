#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>
#include <fstream>
#include <cstring>
#include <bitset>
#include <vector>
#include <cmath>
#include <ctime>
#include <set>
using namespace std;

#define BITWIDTH 64
#define SPLITWIDTH 16
#define HASHTABLENUMBER 4
#define RADIUS 4

extern vector<bitset<SPLITWIDTH> > front_ones, last_ones;
extern vector<bitset<BITWIDTH> > data;
extern vector<int> variance;

void readData(string);
void calculateVariance();

#endif