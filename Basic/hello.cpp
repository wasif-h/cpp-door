#include <iostream>
using namespace std;

int even(int a, int b) {
  int i = a;
  while (i <= b) {

    if (i % 2 == 0) {
      cout << "Even -> " << i << endl << "--" << endl;
    }
  }
}
int odd(int a, int b) {
  int i = a;
  while (i <= b) {

    if (i % 2 != 0) {
      cout << "Odd -> " << i << endl << "--" << endl;
    }
  }
}

int main() {

  int i = 1;
  while (i <= 100) {

    if (i % 2 == 0) {
      cout << "Even -> " << i << endl << "--" << endl;
    } else {

      cout << "Odd  -> " << i << endl << "--" << endl;
    }

    i++;
  }
}
