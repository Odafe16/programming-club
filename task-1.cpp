#include <iostream>

// First namespace
namespace int_namespace {
    int sum(int a, int b) {
        return a + b;
    }
}

// Second namespace
namespace long_namespace {
    long sum(long a, long b) {
        return a + b;
    }
}

int main() {
  
    // Display results
    printf("Int Sum = %d\n", int_namespace::sum(5, 20));
    printf("Long Sum = %d\n", long_namespace::sum(5000, 2000));
}
