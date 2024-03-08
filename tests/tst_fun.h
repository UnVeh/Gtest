#ifndef TST_FUN_H
#define TST_FUN_H

#include <gtest/gtest.h>
#include "func.h"
#include <cmath>
TEST(QuadraticEquationTests, PositiveDiscriminant)
{
    double a = 2.0;
    double b = -5.0;
    double c = -3.0;

    double root1, root2;
    quadraticEquation(a, b, c, root1, root2);

    EXPECT_DOUBLE_EQ(root1, 3.0);
    EXPECT_DOUBLE_EQ(root2, -0.5);
}

TEST(QuadraticEquationTests, ZeroDiscriminant)
{
    double a = 1.0;
    double b = -4.0;
    double c = 4.0;

    double root1, root2;
    quadraticEquation(a, b, c, root1, root2);

    EXPECT_DOUBLE_EQ(root1, 2.0);
    EXPECT_DOUBLE_EQ(root2, 2.0);
}
TEST(QuadraticEquationTest, NegativeDiscriminant) {
    double a = 1.0;
    double b = 2.0;
    double c = 3.0;

    double root1, root2;
    quadraticEquation(a, b, c, root1, root2);

    ASSERT_TRUE(std::isnan(root1));
    ASSERT_TRUE(std::isinf(root2) && root2 > 0);
}
TEST(QuadraticEquationTest, ZeroA) {
    double a = 0.0;
    double b = -3.0;
    double c = 1.0;

    double root1, root2;
    quadraticEquation(a, b, c, root1, root2);

    EXPECT_TRUE(std::isinf(root1));
    EXPECT_TRUE(std::isinf(root2));
}
TEST(QuadraticEquationTest, ZeroAB) {
    double a = 0.0;
    double b = 0.0;
    double c = 2.0;

    double root1, root2;
    quadraticEquation(a, b, c, root1, root2);

    EXPECT_TRUE(std::isinf(root1));
    EXPECT_TRUE(std::isinf(root2));
}

TEST(QuadraticEquationTest, SameRoots) {
    double a = 2.0;
    double b = -4.0;
    double c = 2.0;

    double root1, root2;
    quadraticEquation(a, b, c, root1, root2);

    EXPECT_EQ(root1, 1.0);
    EXPECT_EQ(root2, 1.0);
}

#endif
