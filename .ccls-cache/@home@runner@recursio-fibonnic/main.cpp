#include <iostream>
using namespace std;
int summation(int n) {
  if (n == 1) {
    return 1;
  }
  int first_term = summation(n - 1);
  cout << first_term << endl;
  return first_term + n;
}
int sum(int n) {
  if (n == 1) {
    return 1;
  }
  return n + sum(n - 1);
}
int recursion(int n) {
  if (n == 1) {
    return 1;
  }
  return n * recursion(n - 1);
}
int main() {
  cout << "Factorial is  " << recursion(4) << endl;
  cout << "Summation is   " << sum(5) << endl;
  cout << "Print each step of summation of summation  is" << endl;
  cout << summation(6);
  return 0;
}