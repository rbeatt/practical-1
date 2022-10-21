// NOTE: This file has multiple drive functions (i.e., main), so select the
// appropriate one to execute the exercise questions.
#include "myFunctions.h" // user-defined class, included using ""
#include <iostream>      // system i/o class, included using <>
using namespace std;
// Exercise  1.
int main() {
  // cout: print results to screen
  cout << iAdd(12, 13) << "\n";     // newline operator
  cout << divideXbyY(1, 2) << endl; // newline operator
  cout << divideXbyY(1.0, 2.0) << endl;
  cout << divideXbyY(16.0, 5.0) << endl;
  cout << Log(2.0) << endl;
  cout << Log(0.0) << endl;
  cout << Sqrt(100) << endl;
  cout << Sqrt(-1.0) << endl;
  return 0;
}
// Test Sort Print
int main2() {
  // defined 3 variables to hold the input numbers
  int i = 0, j = 0, k = 0;
  // message for input
  cout << "Type three integer numbers"
       << "\n";
  // chaining >> for reading multipe items, & call sortPrint
  cin >> i >> j >> k;
  sortPrint(i, j, k);
  return 0;
}
// test myCalculator
int main3() {
  double a, b;
  char op;
  cout << "Input the formula to calculate (e.g., 3 + 2)" << endl;
  cin >> a >> op >> b;
  cout << "Answer = " << myCalculator(a, op, b) << endl;
  return 0;
}
// test random numbers and loops
#include <ctime>
int main4() {
  // read N, R
  int N, R;
  cout << "Input N, R: the number and range of random numbers to generate"
       << endl;
  cin >> N >> R;
  // set the initial point for generating the random numbers using current time
  // so each run will give you a different sequence of random numbers
  // need to #include <ctime>
  srand(time(0));
  // generate N random numbers using rand() in the range [0, R-1] inclusive, and
  // calculate their sum
  int sum = 0;
  for (int n = 0; n < N; n++) {
    int rn = rand() % R;
    cout << rn << endl;
    sum += rn;
  }
  // output the average of these numbers
  cout << "average = " << sum / N << endl;
  /* implement the above loop operation by using while, and do...while loops */
  int n = N;
  sum = 0;
  while (n-- > 0) {
    int rn = rand() % R;
    cout << rn << endl;
    sum += rn;
  }
  cout << "average = " << sum / N << endl;
  n = N;
  sum = 0;
  do {
    int rn = rand() % R;
    cout << rn << endl;
    sum += rn;
  } while (--n > 0);
  cout << "average = " << sum / N << endl;
  return 0;
}
// three attmepts to guess a magic number
int main5() {
  // seed the random number generator with the present time
  srand(time(0));
  // a random number between 0-9 (inclusive) to be gussed
  int magicNumber = rand() % 10;
  // three go-s
  int go = 3;
  while (go-- > 0) {
    cout << "Enter your Guess for the Number: ";
    int guess;
    cin >> guess;
    if (magicNumber == guess) {
      cout << "Congratulations Right Guess\n";
      break;
    }
    cout << "Sorry Wrong Guess\n";
  }
  return 0;
}