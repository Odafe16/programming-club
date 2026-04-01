#include <iostream>

using namespace std;

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
    cout << int_namespace::sum(5, 20) << endl;
    cout << long_namespace::sum(5000, 2000) << endl;

    return 0;
}
