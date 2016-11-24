#include <gtest/gtest.h>
#include "Struct.h"

TEST(TheShortestWay, throws_when_matrix_does_not_exist) {
    int** a = 0;
    ASSERT_ANY_THROW(TheShortestWay(a, 2, 3));
}
TEST(TheShortestWay, throws_when_m_or_n_less_than_one) {
    int **a = new int*[2];
    for (int i = 0; i < 4; i++)
        a[i] = new int[3];
    ASSERT_ANY_THROW(TheShortestWay(a, -2, 3));
}
TEST(TheShortestWay, works_right) {
    int **a = new int*[2];
    for (int i = 0; i < 4; i++)
        a[i] = new int[3];
    a[0][0] = 1;
    a[0][1] = 0;
    a[0][2] = 1;
    a[1][0] = 1;
    a[1][1] = 1;
    a[1][2] = 1;
    EXPECT_EQ(3, TheShortestWay(a, 2, 3));
}

TEST(TheShortestWay, works_right_with_the_matrix_of_the_first_order) {
    int **a = new int*;
    *a = new int;
    **a = 1;
    EXPECT_EQ(0, TheShortestWay(a, 1, 1));
}

