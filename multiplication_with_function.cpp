#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string multiply(const string& num1, const string& num2) {
    int n1 = num1.size()-1;
    int n2 = num2.size()-1;

    // Create a result string with initial value of 0
    string result(num1.size()+num2.size(), '0');

    // Perform digit-by-digit multiplication
    for (int i = n1; i >= 0; i--) {
        for (int j = n2; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0');

            // Add the product to the current digit and carry over the excess
            int sum = product + (result[i + j + 1] - '0');
            result[i + j + 1] = sum % 10 + '0'; // Update the current digit
            result[i + j] += sum / 10; // Carry over the excess
        }
    }

    // Remove leading zeros from the result
    result.erase(0, min(result.find_first_not_of('0'), result.size() - 1));

    return result;
}

int main() {
    string num1 = "123";
    string num2 = "45";

    string product = multiply(num1, num2);

    cout << "Product: " << product << endl;

    return 0;
}
