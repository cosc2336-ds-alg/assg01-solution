/** @file assg01-tests.cpp
 * @brief Unit tests for Assignment 01, practice on functions.
 *
 * @author Derek Harter
 * @note   class: COSC 2336, Summer 2021
 * @note   ide  : VS Code Server 3.9.3 
 * @note   assg : Assignment 01
 * @date   June 1, 2021
 *
 * Assignment 01, practice on functions, user defined types and arrays.  This is
 * the file containing the unit tests for this assignment.  It uses the catch2
 * unit test framework. You should start by definint the calculateMean()
 * function to return a result of 0.  Then incrementally code so that you pass
 * the unit tests for calculateMean.  Repeat this to define
 * calculateStandardDeviation, uncomment the unit tests for the second function,
 * then incrementally add code till you pass the defined tests.
 */
#include <cmath>
#include <iostream>
#include "catch.hpp"
#include "assg01-functions.hpp"
using namespace std;


/** calculateMean() test cases
 * Uncomment the following test case block and write your code
 * to pass these tests for the calculateMean() function.
 */
/*
   TEST_CASE("<calculateMean()> function tests", "[calculateMean]")
   {
   SECTION("test array of 1 item")
   {
    int x[] = {3};
    CHECK(calculateMean(1, x) == Approx(3.0) );
   }

   SECTION("test array of 2 items")
   {
    int x[] = {3, 5};
    CHECK(calculateMean(2, x) == Approx(4.0) );
   }

   SECTION("test when sum is 0")
   {
    int x[] = {-1, 1, -1, 1, 0, 2, -2};
    CHECK(calculateMean(7, x) == Approx(0.0) );
   }

   SECTION("test basic calculation of mean")
   {
    int x[] = {5, 8, 3, 7, 9, 2, 7, 5, 4, 5, 2, 1, 9, 8, 9, 3, 5, 2, 5, 8, 8, 9};
    CHECK(calculateMean(22, x) == Approx(5.6363636364) );
   }

   SECTION("test only first 10 elements of previous")
   {
    int x[] = {5, 8, 3, 7, 9, 2, 7, 5, 4, 5};
    CHECK(calculateMean(10, x) == Approx(5.5) );
   }

   SECTION("test more general cases")
   {
    int x[] = {6, 14, 9, 3, 7, 12, 5, 3, 18, 2, 7, 19, 4, 5, 8, 0, 7};
    CHECK(calculateMean(17, x) == Approx(7.5882352941) );
   }

   SECTION("test a negative average")
   {
    int x[] = {-5, -2, -3, 4, -7, 0, -2, -8, -6, -1};
    CHECK(calculateMean(10, x) == Approx(-3.0) );
   }

   SECTION("test using size parameter correctly")
   {
    int x[] = {-5, -3, -1, 1, 3, 5};
    CHECK(calculateMean(1, x) == Approx(-5.0) );
    CHECK(calculateMean(2, x) == Approx(-4.0) );
    CHECK(calculateMean(3, x) == Approx(-3.0) );
    CHECK(calculateMean(4, x) == Approx(-2.0) );
    CHECK(calculateMean(5, x) == Approx(-1.0) );
    CHECK(calculateMean(6, x) == Approx(0.0) );
   }
   }
 */


/** calculateStandardDeviation() test cases
 * Uncomment the following test case block and write your code
 * to pass these tests for the calculateStandardDeviation()
 * function.
 */
/* Only uncomment this test case once you have calculateMean() working, then
 * uncomment here and work on implementing calculateStandardDeviation()
   TEST_CASE("<calculateStandardDeviation()> function tests", "[calculateStandardDeviation]")
   {
   SECTION("test standard deviation of a single value")
   {
    int x[] = {3};
    CHECK( calculateStandardDeviation(1, x) == Approx(0.0) );
   }

   SECTION("test standard deviation of two values")
   {
    int x[] = {3, 5};
    CHECK( calculateStandardDeviation(2, x) == Approx(1.0) );
   }

   SECTION("test when deviation is 0 for a set of values")
   {
    int x[] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    CHECK( calculateStandardDeviation(11, x) == Approx(0.0) );
   }

   SECTION("test basic calculation of standard deviation")
   {
    int x[] = {5, 8, 3, 7, 9, 2, 7, 5, 4, 5, 2, 1, 9, 8, 9, 3, 5, 2, 5, 8, 8, 9};
    CHECK( calculateStandardDeviation(22, x) == Approx(2.6206427828) );
   }

   SECTION("test another basic calculation of standard deviation")
   {
    int x[] = {-15,  10,  18, -16,  -2,  -5,   5, -13,
               -12, -12,  12, -17,   6, -15,  -7,  -2,
               -15,   5, -17,   4, -15, -12,  -9, -11,  -7};
    CHECK( calculateStandardDeviation(25, x) == Approx(10.062683538698812) );
   }

   SECTION("test using size parameter correctly")
   {
    int x[] = {-5, -3, -1, 1, 3, 5};
    CHECK( calculateStandardDeviation(1, x) == Approx(0.0) );
    CHECK( calculateStandardDeviation(2, x) == Approx(1.0) );
    CHECK( calculateStandardDeviation(3, x) == Approx( sqrt(8.0 / 3.0) ) );
    CHECK( calculateStandardDeviation(4, x) == Approx( sqrt(20.0 / 4.0) ) );
    CHECK( calculateStandardDeviation(5, x) == Approx( sqrt(40.0 / 5.0) ) );
    CHECK( calculateStandardDeviation(6, x) == Approx( sqrt(70.0 / 6.0) ) );
   }
   }
 */
