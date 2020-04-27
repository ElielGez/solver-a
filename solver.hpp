#include <complex>
#include <iostream>
#define P_DEBUG(msg) cout << "\033[1;31m"                                                                                \
                          << "-DEBUG- File: " << __FILE__ << " Line: " << __LINE__ << " Message: " << msg << "\033[0m\n" \
                          << endl;
#define P_INFO(msg) cout << "\033[1;36m"                                                                               \
                         << "-INFO- File: " << __FILE__ << " Line: " << __LINE__ << " Message: " << msg << "\033[0m\n" \
                         << endl;
using namespace std;

namespace solver {
class RealVariable {
private:
    double re;

public:
    RealVariable() : re(0){};
    RealVariable(double re) : re(re){};
    RealVariable &operator*(double times);
    RealVariable &operator*(const RealVariable &x);
    friend RealVariable &operator*(double times, const RealVariable &x);

    RealVariable &operator-(double times);
    RealVariable &operator-(const RealVariable &x);
    friend RealVariable &operator-(double times, const RealVariable &x);

    RealVariable &operator+(double times);
    RealVariable &operator+(const RealVariable &x);
    friend RealVariable &operator+(double times, const RealVariable &x);

    RealVariable &operator/(double times);
    RealVariable &operator/(const RealVariable &x);
    friend RealVariable &operator/(double times, const RealVariable &x);

    RealVariable &operator==(double times);
    RealVariable &operator==(const RealVariable &x);
    friend RealVariable &operator==(double times, const RealVariable &x);

    RealVariable &operator^(int times);
};
class ComplexVariable {
private:
    double re;
    double im;

public:
    ComplexVariable() : re(0), im(0){};
    ComplexVariable(double re, double im) : re(re), im(im){};
    ComplexVariable &operator*(const ComplexVariable &x);
    ComplexVariable &operator*(double times);
    ComplexVariable &operator*(std::complex<double> x);
    friend ComplexVariable &operator*(double times, const ComplexVariable &x);
    friend ComplexVariable &operator*(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator-(const ComplexVariable &x);
    ComplexVariable &operator-(double times);
    ComplexVariable &operator-(std::complex<double> x);
    friend ComplexVariable &operator-(double times, const ComplexVariable &x);
    friend ComplexVariable &operator-(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator+(const ComplexVariable &x);
    ComplexVariable &operator+(double times);
    ComplexVariable &operator+(std::complex<double> x);
    friend ComplexVariable &operator+(double times, const ComplexVariable &x);
    friend ComplexVariable &operator+(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator/(const ComplexVariable &x);
    ComplexVariable &operator/(double times);
    ComplexVariable &operator/(std::complex<double> x);
    friend ComplexVariable &operator/(double times, const ComplexVariable &x);
    friend ComplexVariable &operator/(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator==(const ComplexVariable &x);
    ComplexVariable &operator==(double times);
    ComplexVariable &operator==(std::complex<double> x);
    friend ComplexVariable &operator==(double times, const ComplexVariable &x);
    friend ComplexVariable &operator==(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator^(int times);
};
double solve(RealVariable &x);
std::complex<double> solve(ComplexVariable &y);
}; // namespace solver