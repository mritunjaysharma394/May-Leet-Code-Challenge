class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int ans = 0;
        long long sq = 1;
        for(long long i = 1; i<num; i++)
        {
            sq = i*i;
            if  (sq==num)
            {
                ans = 1;
                break;
            }
        }
        
        if (ans==1 || num ==1)
        {
            return true;
        }
        
        else
        {
            return false;
        }
    }
};