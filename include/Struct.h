#ifndef C__GIT_WAY_WAY_INCLUDE_STRUCT_H_
#define C__GIT_WAY_WAY_INCLUDE_STRUCT_H_
#include "stdlib.h"
struct index {
    int str;
    int stlb;
};
struct CNode {
	index data;
	CNode* next;
	CNode* prev;
};


int TheShortestWay(int** a, int m, int n);
#endif  // C__GIT_WAY_WAY_INCLUDE_STRUCT_H_
