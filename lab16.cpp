// Code to implement the gcf function goes here
#include <iostream>
using namespace std;

int gcf(int a, int b) {
    // Base case: if b becomes 0, return a as the GCF
    if (b == 0) {
        return a;
    }
    // Recursive call: apply Euclidean algorithm
    return gcf(b, a % b);
}

