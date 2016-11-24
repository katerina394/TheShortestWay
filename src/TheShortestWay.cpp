#include "MyQueue.h"
int TheShortestWay(int** a, int m, int n) {
    if ( ( a == 0 ) || ( m < 1 ) || ( n < 1 ) )
        throw 1;
    int** b = new int*[m];
    for ( int i = 0; i < m; i++ ) {
        b[i] = new int[n];
        for ( int j = 0; j < n; j++ )
            b[i][j] = 1000;
    }
    MyQueue q;
    index y;
    index* temp;
    y.str = 0;
    y.stlb = n-1;
    q.push(y);
    b[y.str][y.stlb] = 0;
    while ( !q.empty() ) {
        index tmp = q.GetFront();
        q.pop();
        if ( tmp.stlb-1 > -1 ) {
            if ( (a[tmp.str][tmp.stlb-1] == 1) && (b[tmp.str][tmp.stlb-1] == 1000) ) {
                b[tmp.str][tmp.stlb-1] = b[tmp.str][tmp.stlb] + 1;
                temp = new index;
                temp->str = tmp.str;
                temp->stlb = tmp.stlb-1;
                q.push(*temp);
            }
        }
        if ( tmp.str-1 > -1 ) {
            if ( (a[tmp.str-1][tmp.stlb] == 1) && (b[tmp.str-1][tmp.stlb] == 1000) ) {
                b[tmp.str-1][tmp.stlb] = b[tmp.str][tmp.stlb] + 1;
                temp = new index;
                temp->str = tmp.str-1;
                temp->stlb = tmp.stlb;
                q.push(*temp);
            }
        }
        if ( tmp.stlb+1 < n ) {
            if ( (a[tmp.str][tmp.stlb+1] == 1) && (b[tmp.str][tmp.stlb+1] == 1000) ) {
                b[tmp.str][tmp.stlb+1] = b[tmp.str][tmp.stlb] + 1;
                temp = new index;
                temp->str = tmp.str;
                temp->stlb = tmp.stlb+1;
                q.push(*temp);
            }
        }
        if ( tmp.str+1 < m ) {
            if ( (a[tmp.str+1][tmp.stlb] == 1) && (b[tmp.str+1][tmp.stlb] == 1000) ) {
                b[tmp.str+1][tmp.stlb] = b[tmp.str][tmp.stlb] + 1;
                temp = new index;
                temp->str = tmp.str+1;
                temp->stlb = tmp.stlb;
                q.push(*temp);
            }
        }
    }
    return b[m-1][0];
}
