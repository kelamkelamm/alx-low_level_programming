#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
srand(time(NULL));
int n = rand() % 201 - 100;
std::cout << n << "\n";
if (n > 0) {
std::cout << "is positive\n";
} else if (n == 0) {
std::cout << "is zero\n";
} else {
std::cout << "is negative\n";
}
return 0;
}
