#include <Rcpp.h>
using namespace Rcpp;

//'timesTwo
//'
//'Multiply a number by two
//'
//'@param x input value
//'
//'@return x times two
//'
//'@examples
//'timesTwo(3)
//'
//' @export
// [[Rcpp::export]]
NumericVector timesTwo(NumericVector x) {
  return x * 2;
}
