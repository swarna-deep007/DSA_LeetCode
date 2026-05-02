class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        for (int i = 1; i <= n; ++i) {
            if (isGood(i)) {
                count++;
            }
        }
        return count;
    }

private:
    bool isGood(int num) {
        bool hasRotation = false;
        while (num > 0) {
            int digit = num % 10;
            // If it contains 3, 4, or 7, it's invalid
            if (digit == 3 || digit == 4 || digit == 7) {
                return false;
            }
            // at least one digit that changes the number
            if (digit == 2 || digit == 5 || digit == 6 || digit == 9) {
                hasRotation = true;
            }
            num /= 10;
        }
        return hasRotation;
    }
};