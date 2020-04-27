#include "doctest.h"
#include "solver.hpp"
using namespace solver;

TEST_CASE("Test RealVariable") {
    RealVariable x;
    CHECK_THROWS_AS(solve(60 * (x ^ 2) + 50 * x + 22 == 0), exception);
    CHECK((solve(21 * (x ^ 2) + 59 * x + 11 == 0) == -0.200790773355 || solve(21 * (x ^ 2) + 59 * x + 11 == 0) == -0.200890773355 || solve(21 * (x ^ 2) + 59 * x + 11 == -0.200690773355)));
    CHECK_THROWS_AS(solve(56 * (x ^ 2) + 49 * x + 23 == 0), exception);
    CHECK((solve(7 * (x ^ 2) + 45 * x + 50 == 0) == -1.42857142857 || solve(7 * (x ^ 2) + 45 * x + 50 == 0) == -1.42867142857 || solve(7 * (x ^ 2) + 45 * x + 50 == -1.42847142857)));
    CHECK_THROWS_AS(solve(51 * (x ^ 2) + 30 * x + 21 == 0), exception);
    CHECK_THROWS_AS(solve(60 * (x ^ 2) + 28 * x + 46 == 0), exception);
    CHECK_THROWS_AS(solve(11 * (x ^ 2) + 25 * x + 56 == 0), exception);
    CHECK_THROWS_AS(solve(30 * (x ^ 2) + 27 * x + 32 == 0), exception);
    CHECK((solve(3 * (x ^ 2) + 30 * x + 13 == 0) == -0.453939434338 || solve(3 * (x ^ 2) + 30 * x + 13 == 0) == -0.454039434338 || solve(3 * (x ^ 2) + 30 * x + 13 == -0.453839434338)));
    CHECK((solve(57 * (x ^ 2) + 53 * x + 12 == 0) == -0.389964879427 || solve(57 * (x ^ 2) + 53 * x + 12 == 0) == -0.390064879427 || solve(57 * (x ^ 2) + 53 * x + 12 == -0.389864879427)));
    CHECK_THROWS_AS(solve(5 * (x ^ 2) + 11 * x + 26 == 0), exception);
    CHECK_THROWS_AS(solve(35 * (x ^ 2) + 51 * x + 46 == 0), exception);
    CHECK_THROWS_AS(solve(29 * (x ^ 2) + 56 * x + 52 == 0), exception);
    CHECK_THROWS_AS(solve(6 * (x ^ 2) + 14 * x + 22 == 0), exception);
    CHECK_THROWS_AS(solve(34 * (x ^ 2) + 14 * x + 35 == 0), exception);
    CHECK_THROWS_AS(solve(29 * (x ^ 2) + 24 * x + 12 == 0), exception);
    CHECK_THROWS_AS(solve(57 * (x ^ 2) + 9 * x + 30 == 0), exception);
    CHECK_THROWS_AS(solve(24 * (x ^ 2) + 22 * x + 35 == 0), exception);
    CHECK_THROWS_AS(solve(9 * (x ^ 2) + 20 * x + 17 == 0), exception);
    CHECK_THROWS_AS(solve(36 * (x ^ 2) + 51 * x + 42 == 0), exception);
    CHECK_THROWS_AS(solve(30 * (x ^ 2) + 9 * x + 8 == 0), exception);
    CHECK_THROWS_AS(solve(39 * (x ^ 2) + 9 * x + 34 == 0), exception);
    CHECK_THROWS_AS(solve(23 * (x ^ 2) + 5 * x + 5 == 0), exception);
    CHECK_THROWS_AS(solve(52 * (x ^ 2) + 16 * x + 18 == 0), exception);
    CHECK_THROWS_AS(solve(34 * (x ^ 2) + 10 * x + 35 == 0), exception);
    CHECK_THROWS_AS(solve(55 * (x ^ 2) + 20 * x + 6 == 0), exception);
    CHECK_THROWS_AS(solve(50 * (x ^ 2) + 49 * x + 18 == 0), exception);
    CHECK((solve(17 * (x ^ 2) + 54 * x + 37 == 0) == -1.0 || solve(17 * (x ^ 2) + 54 * x + 37 == 0) == -1.0001 || solve(17 * (x ^ 2) + 54 * x + 37 == -0.9999)));
    CHECK_THROWS_AS(solve(49 * (x ^ 2) + 7 * x + 14 == 0), exception);
    CHECK_THROWS_AS(solve(55 * (x ^ 2) + 18 * x + 46 == 0), exception);
    CHECK((solve(36 * (x ^ 2) + 50 * x + 10 == 0) == -0.242254983442 || solve(36 * (x ^ 2) + 50 * x + 10 == 0) == -0.242354983442 || solve(36 * (x ^ 2) + 50 * x + 10 == -0.242154983442)));
    CHECK((solve(48 * (x ^ 2) + 40 * x + 6 == 0) == -0.196187390745 || solve(48 * (x ^ 2) + 40 * x + 6 == 0) == -0.196287390745 || solve(48 * (x ^ 2) + 40 * x + 6 == -0.196087390745)));
    CHECK_THROWS_AS(solve(56 * (x ^ 2) + 44 * x + 50 == 0), exception);
    CHECK_THROWS_AS(solve(20 * (x ^ 2) + 14 * x + 13 == 0), exception);
    CHECK((solve(9 * (x ^ 2) + 60 * x + 35 == 0) == -0.6459140839 || solve(9 * (x ^ 2) + 60 * x + 35 == 0) == -0.6460140839 || solve(9 * (x ^ 2) + 60 * x + 35 == -0.6458140839)));
    CHECK((solve(3 * (x ^ 2) + 31 * x + 2 == 0) == -0.0649240449953 || solve(3 * (x ^ 2) + 31 * x + 2 == 0) == -0.0650240449953 || solve(3 * (x ^ 2) + 31 * x + 2 == -0.0648240449953)));
    CHECK_THROWS_AS(solve(32 * (x ^ 2) + 55 * x + 44 == 0), exception);
    CHECK_THROWS_AS(solve(48 * (x ^ 2) + 34 * x + 16 == 0), exception);
    CHECK((solve(58 * (x ^ 2) + 55 * x + 12 == 0) == -0.340308838825 || solve(58 * (x ^ 2) + 55 * x + 12 == 0) == -0.340408838825 || solve(58 * (x ^ 2) + 55 * x + 12 == -0.340208838825)));
    CHECK_THROWS_AS(solve(53 * (x ^ 2) + 41 * x + 52 == 0), exception);
    CHECK_THROWS_AS(solve(60 * (x ^ 2) + 13 * x + 31 == 0), exception);
    CHECK((solve(60 * (x ^ 2) + 52 * x + 11 == 0) == -0.366666666667 || solve(60 * (x ^ 2) + 52 * x + 11 == 0) == -0.366766666667 || solve(60 * (x ^ 2) + 52 * x + 11 == -0.366566666667)));
    CHECK((solve(1 * (x ^ 2) + 44 * x + 17 == 0) == -0.389817215026 || solve(1 * (x ^ 2) + 44 * x + 17 == 0) == -0.389917215026 || solve(1 * (x ^ 2) + 44 * x + 17 == -0.389717215026)));
    CHECK((solve(8 * (x ^ 2) + 52 * x + 17 == 0) == -0.345262490344 || solve(8 * (x ^ 2) + 52 * x + 17 == 0) == -0.345362490344 || solve(8 * (x ^ 2) + 52 * x + 17 == -0.345162490344)));
    CHECK_THROWS_AS(solve(48 * (x ^ 2) + 6 * x + 35 == 0), exception);
    CHECK_THROWS_AS(solve(20 * (x ^ 2) + 29 * x + 54 == 0), exception);
    CHECK_THROWS_AS(solve(59 * (x ^ 2) + 49 * x + 21 == 0), exception);
    CHECK((solve(15 * (x ^ 2) + 41 * x + 18 == 0) == -0.549489955191 || solve(15 * (x ^ 2) + 41 * x + 18 == 0) == -0.549589955191 || solve(15 * (x ^ 2) + 41 * x + 18 == -0.549389955191)));
    CHECK((solve(3 * (x ^ 2) + 54 * x + 47 == 0) == -0.917096231345 || solve(3 * (x ^ 2) + 54 * x + 47 == 0) == -0.917196231345 || solve(3 * (x ^ 2) + 54 * x + 47 == -0.916996231345)));
    CHECK_THROWS_AS(solve(55 * (x ^ 2) + 15 * x + 40 == 0), exception);
    CHECK_THROWS_AS(solve(41 * (x ^ 2) + 40 * x + 45 == 0), exception);
    CHECK_THROWS_AS(solve(2 * (x ^ 2) + 8 * x + 13 == 0), exception);
    CHECK((solve(3 * (x ^ 2) + 27 * x + 3 == 0) == -0.112517806304 || solve(3 * (x ^ 2) + 27 * x + 3 == 0) == -0.112617806304 || solve(3 * (x ^ 2) + 27 * x + 3 == -0.112417806304)));
    CHECK_THROWS_AS(solve(8 * (x ^ 2) + 35 * x + 42 == 0), exception);
    CHECK_THROWS_AS(solve(27 * (x ^ 2) + 9 * x + 46 == 0), exception);
    CHECK_THROWS_AS(solve(49 * (x ^ 2) + 49 * x + 56 == 0), exception);
    CHECK_THROWS_AS(solve(15 * (x ^ 2) + 14 * x + 4 == 0), exception);
    CHECK_THROWS_AS(solve(25 * (x ^ 2) + 30 * x + 43 == 0), exception);
    CHECK((solve(15 * (x ^ 2) + 32 * x + 10 == 0) == -0.380291323934 || solve(15 * (x ^ 2) + 32 * x + 10 == 0) == -0.380391323934 || solve(15 * (x ^ 2) + 32 * x + 10 == -0.380191323934)));
    CHECK_THROWS_AS(solve(21 * (x ^ 2) + 8 * x + 35 == 0), exception);
};

TEST_CASE("Test ComplexVariable") {
    ComplexVariable x;
    CHECK(solve(2 * x - 4 == 10) == double(7));
    CHECK(solve(x + x - 4 == 10) == double(7));
    CHECK(solve(x / 2 - 4 == 10) == double(28));
    CHECK(solve(x / 2 - 4 == 10) == double(28.0));
    CHECK(solve((x ^ 2) - 10 * x + 25 == 0) == double(5));
    CHECK(solve((x ^ 2) - 6 * x + 9 == 0) == double(3));
    CHECK(solve((x ^ 2) - 4 * x + 4 == 0) == double(2));
    CHECK(solve((x ^ 2) - 2 * x + 1 == 0) == double(1));
    CHECK(solve((x ^ 2) - 14 * x + 49 == 0) == double(7));
    CHECK(solve((x ^ 2) - 20 * x + 100 == 0) == double(10));
    CHECK(solve((x ^ 2) - 12 * x + 36 == 0) == double(6));
    CHECK(solve((x ^ 2) - 8 * x + 16 == 0) == double(4));
    CHECK(solve((x ^ 2) - 18 * x + 81 == 0) == double(9));
    CHECK((solve((x ^ 2) - 5 * x + 6 == 0) == double(3) || solve((x ^ 2) - 5 * x + 6 == 0) == double(2)));
    CHECK((solve((x ^ 2) - 4 * x + 3 == 0) == double(3) || solve((x ^ 2) - 4 * x + 3 == 0) == double(1)));
    CHECK((solve((x ^ 2) - 7 * x + 6 == 0) == double(6) || solve((x ^ 2) - 7 * x + 6 == 0) == double(1)));
    CHECK((solve((x ^ 2) - 8 * x + 7 == 0) == double(7) || solve((x ^ 2) - 8 * x + 7 == 0) == double(1)));
    CHECK((solve((x ^ 2) - 9 * x + 8 == 0) == double(8) || solve((x ^ 2) - 9 * x + 8 == 0) == double(1)));
    CHECK(solve(-1 * x == 0) == double(0));
    CHECK((solve((x ^ 2) == 1) == double(1) || solve((x ^ 2) == 100) == double(-1)));
    CHECK((solve((x ^ 2) == 4) == double(2) || solve((x ^ 2) == 100) == double(-2)));
    CHECK((solve((x ^ 2) == 16) == double(4) || solve((x ^ 2) == 16) == double(-4)));
    CHECK((solve((x ^ 2) == 9) == double(3) || solve((x ^ 2) == 9) == double(-3)));
    CHECK((solve((x ^ 2) == 25) == double(5) || solve((x ^ 2) == 25) == double(-5)));
    CHECK((solve((x ^ 2) == 100) == double(10) || solve((x ^ 2) == 100) == double(-10)));
    CHECK((solve((x ^ 2) == 49) == double(7) || solve((x ^ 2) == 100) == double(-7)));
    CHECK((solve((x ^ 2) == 36) == double(6) || solve((x ^ 2) == 100) == double(-6)));
    CHECK((solve((x ^ 2) == 81) == double(9) || solve((x ^ 2) == 100) == double(-9)));
    CHECK(solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0 * x / 2 - x) == double(4));
    CHECK(solve(2 * x - 4.0 == 10) == double(7.0));
    CHECK(solve((x ^ 2) + 4 * x + 4 == 0) == double(-2));
    CHECK(solve((x ^ 2) + 8 * x + 16 == 0) == double(-4));
    CHECK(solve((x ^ 2) + 6 * x + 9 == 0) == double(-3));
    CHECK(solve((x ^ 2) + 10 * x + 25 == 0) == double(-5));
    CHECK(solve((x ^ 2) + 12 * x + 36 == 0) == double(-6));
    CHECK(solve((x ^ 2) + 14 * x + 49 == 0) == double(-7));
    CHECK(solve((x ^ 2) + 16 * x + 64 == 0) == double(-8));
    CHECK(solve((x ^ 2) + 18 * x + 81 == 0) == double(-9));
    CHECK(solve((x ^ 2) + 20 * x + 100 == 0) == double(-10));
    CHECK((solve((x ^ 2) == -16) == complex<double>(0, 4) || solve((x ^ 2) == -16) == complex<double>(0, -4)));
    CHECK((solve((x ^ 2) == -1) == complex<double>(0, 1) || solve((x ^ 2) == -1) == complex<double>(0, -1)));
    CHECK((solve((x ^ 2) == -49) == complex<double>(0, 7) || solve((x ^ 2) == -1) == complex<double>(0, -7)));
    CHECK((solve((x ^ 2) == -36) == complex<double>(0, 6) || solve((x ^ 2) == -1) == complex<double>(0, -6)));
    CHECK((solve((x ^ 2) == -100) == complex<double>(0, 10) || solve((x ^ 2) == -1) == complex<double>(0, -10)));
    CHECK((solve((x ^ 2) == -9) == complex<double>(0, 3) || solve((x ^ 2) == -1) == complex<double>(0, -3)));
    CHECK((solve((x ^ 2) == -25) == complex<double>(0, 5) || solve((x ^ 2) == -1) == complex<double>(0, -5)));
    CHECK((solve((x ^ 2) == -64) == complex<double>(0, 8) || solve((x ^ 2) == -1) == complex<double>(0, -8)));
    CHECK((solve((x ^ 2) == -81) == complex<double>(0, 9) || solve((x ^ 2) == -1) == complex<double>(0, -9)));
    CHECK((solve((x ^ 2) == -4) == complex<double>(0, 2) || solve((x ^ 2) == -1) == complex<double>(0, -2)));
};