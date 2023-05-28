
// power of two(2)

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 1)
            return true; // base condition
        if (n <= 0 || n % 2 != 0)
            return false;
        return isPowerOfTwo(n / 2);
    }
};

// Power of three(3)

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n == 1)
            return true; // base condition
        if (n <= 0 || n % 3 != 0)
            return false;
        return isPowerOfThree(n / 3);
    }
};

// power of four(4)

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 1)
            return true; // base condition
        if (n <= 0 || n % 4 != 0)
            return false;
        return isPowerOfFour(n / 5);
    }
};