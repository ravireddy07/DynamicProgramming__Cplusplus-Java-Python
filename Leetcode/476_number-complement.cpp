// https://leetcode.com/problems/number-complement/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int findComplement(int num)
    {
        int res = 0;
        int i = 0;
        while (num > 0)
        {
            if (!(num & 1))
                res |= (1 << i);
            num >>= 1;
            i++;
        }
        return res;
    }
};

int main()
{
    Solution a;
    cout << a.findComplement(5) << endl;
    return 0;
}