#include <bits/stdc++.h>  // Include a common set of C++ headers
using namespace std;

// Function to find the HCF (GCD) of two numbers using the Euclidean algorithm
int FindHCF(int a, int b) {
  int reminder = 0;
  while (b > 0) {
    reminder = a % b; // Compute the remainder when a is divided by b
    a = b;           // Update a to be the smaller number
    b = reminder;     // Update b to be the remainder
  }
  return a; // When b becomes zero, 'a' contains the HCF
}

// Function to find the LCM of two numbers using the HCF
int FindLCM(int a, int b) {
  return (a * b) / FindHCF(a, b); // LCM = (a * b) / HCF
}

int main() {
  int num1 = 40, num2 = 20; // Input numbers
  int Max = 0, Min = 0;

  // Determine which number is greater and assign them to Max and Min
  (num1 > num2) ? (Max = num1, Min = num2) : (Max = num2, Min = num1);

  // Output the HCF and LCM of the two numbers
  cout << "The HCF of Two Numbers " << num1 << " and " << num2 << " is " << FindHCF(Max, Min) << "\n";
  cout << "The LCM of Two Numbers " << num1 << " and " << num2 << " is " << FindLCM(Max, Min) << "\n";

  return 0;
}
