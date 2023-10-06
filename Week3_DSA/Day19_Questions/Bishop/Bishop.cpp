#include <iostream>
#include <algorithm>

int solve(int A, int B) {
    int count = 0;
    count += std::min(8 - A, 8 - B);
    count += std::min(8 - A, B - 1);
    count += std::min(A - 1, B - 1);
    count += std::min(A - 1, 8 - B);
    
    return count;
}

int main() {
    int A, B;
    std::cout << "Enter two integers A and B: ";
    std::cin >> A >> B;
    int result = solve(A, B);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
