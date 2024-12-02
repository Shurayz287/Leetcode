# include <bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {
    // Handle the overflow case where the result exceeds INT_MAX
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;

    // Determine the sign of the result
    bool isNegative = (dividend < 0) ^ (divisor < 0);

    // Use long long to safely handle absolute values
    long long absDividend = abs((long long)dividend);
    long long absDivisor = abs((long long)divisor);

    // Perform division using bit-shifting
    long long result = 0;
    while (absDividend >= absDivisor) {
        long long tempDivisor = absDivisor;
        long long multiple = 1;

        // Double the divisor until it exceeds the remaining dividend
        while (absDividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            multiple <<= 1;
        }

        // Subtract the largest multiple from the dividend
        absDividend -= tempDivisor;
        result += multiple;
    }

    // Apply the sign to the result
    result = isNegative ? -result : result;

    // Ensure result is within 32-bit integer range
    return (result > INT_MAX) ? INT_MAX : (int)result;
}

int main()
{
    int num1, num2;
    cin>>num1>>num2;
    cout<<divide(num1,num2);
}