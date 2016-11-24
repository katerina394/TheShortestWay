#include "MyQueue.h"


MyQueue::MyQueue(void) {
    back = 0;
    front = 0;
    size = 0;
}
MyQueue::~MyQueue(void) {
    CNode *tmp;
     while ( back != 0 ) {
        tmp = back;
        back = back -> next;
        delete tmp;
     }
}
index& MyQueue::GetBack() {
    return back->data;
}
index& MyQueue::GetFront() {
    return front->data;
}
int MyQueue::GetSize() {
    return size;
}
bool MyQueue::empty() {
    return (size == 0);
}
void MyQueue::pop() {
    if (empty())
        throw 1;
    if (size > 1) {
        CNode* tmp = front;
        front = front->prev;
        front->next = 0;
        delete tmp;
        size--;
    }
    if (size == 1) {
        delete front;
        front = back = 0;
        size = 0;
    }
}
void MyQueue::push(index x) {
    if (empty()) {
        CNode *node = new CNode;
        node->data = x;
        node->next = 0;
        node->prev = 0;
        back = front = node;
    } else {
        CNode *node = new CNode;
        node->data = x;
        node->next = back;
        node->prev = 0;
        back->prev = node;
        back = node;
    }
    size++;
}

