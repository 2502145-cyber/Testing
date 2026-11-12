#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

// Sample functions to test
int add(int a, int b) {
    return a + b;
}

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

bool isPalindrome(const std::string& text) {
    std::string reversed = text;
    std::reverse(reversed.begin(), reversed.end());
    return text == reversed;
}

// Test suite using standard assertions
void runTests() {
    std::cout << "Running unit tests...\n";

    // Test 1: Addition
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    std::cout << "[PASS] add() tests\n";

    // Test 2: Factorial
    assert(factorial(0) == 1);
    assert(factorial(5) == 120);
    std::cout << "[PASS] factorial() tests\n";

    // Test 3: Palindrome check
    assert(isPalindrome("racecar") == true);
    assert(isPalindrome("hello") == false);
    std::cout << "[PASS] isPalindrome() tests\n";

    // Test 4: Standard Library (std::vector)
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};
    std::sort(numbers.begin(), numbers.end());
    assert(numbers.front() == 1 && numbers.back() == 9);
    std::cout << "[PASS] std::vector & std::sort tests\n";

    std::cout << "All tests passed successfully!\n";
}

int main() {
    std::cout << "C++ Standard Version: " << __cplusplus << "\n";
    runTests();
    return 0;
}
