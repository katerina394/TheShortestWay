#ifndef C__GIT_AVERAGESUM_AVERAGESUM_INCLUDE_MYQUEUE_H_
#define C__GIT_AVERAGESUM_AVERAGESUM_INCLUDE_MYQUEUE_H_
#include "Struct.h"
class MyQueue {
    CNode *back;
    CNode *front;
    int size;
 public:
    MyQueue(void);
    ~MyQueue(void);
    index& GetBack();
    index& GetFront();
    int GetSize();
    void push(index x);
    void pop();
    bool empty();
};
#endif  // C__GIT_AVERAGESUM_AVERAGESUM_INCLUDE_MYQUEUE_H_
