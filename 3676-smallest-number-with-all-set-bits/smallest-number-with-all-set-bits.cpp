class Solution {
public:
    int smallestNumber(int n) {
        int bits = 0, temp = n;
        while (temp > 0) {
            bits++;
            temp >>= 1;
        }

        int x = (1 << bits) - 1;
        if (x < n)
            x = (1 << (bits + 1)) - 1;

        return x;
    }
};
