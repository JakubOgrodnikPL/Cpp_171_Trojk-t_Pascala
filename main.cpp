#include <iostream>

int main() {
  int n;
  std::cout << "Podaj stopien rozwiniecia: ";
  std::cin >> n;

  for (int i = 0; i <= n; i++) {
    int coeff = 1;
    for (int j = 0; j <= i; j++) {
      std::cout << coeff << " ";
      coeff = coeff * (i - j) / (j + 1);
    }
    std::cout << std::endl;
  }

  return 0;
}
