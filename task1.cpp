#include <iostream>
using namespace std;

void PrintBin(int n) {
  const int num_of_bits = 8;
  for (int bit_ind = sizeof(n) * num_of_bits - 1; bit_ind > -1; --bit_ind) {
    cout << ((n & (1 << bit_ind)) != 0);
  }
  cout << endl;
}

int main() {
  PrintBin(5);
  PrintBin(-5);
  PrintBin(0);
  return 0;
}