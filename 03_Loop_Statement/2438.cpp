// 별 찍기 - 1

#include <iostream>

using namespace std;

int main() {
  int line = 0;
  cin >> line;
  for (int i = 1; i <= line; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
