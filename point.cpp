#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  int n=3;
  int *p=&n;
  *p++;
  std::cout << p << '\n';
  std::cout << *p << '\n';
  return 0;
}
