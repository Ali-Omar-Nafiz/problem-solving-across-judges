#include<iostream>

#include<math.h>

using namespace std;
int main() {
  int power, rev;
  cin >> power;
  rev = (int) pow(5, power) % 100;
  cout << rev;
  return 0;
}