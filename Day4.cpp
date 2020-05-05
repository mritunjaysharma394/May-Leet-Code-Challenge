class Solution { 
public:
    int findComplement(int num) {
        
        int ans = 0, i = 0;
        while(num > 0){
            int d = num % 2; 
            int fd = (d == 1? 0 : 1); 
            ans += (fd << i);
            num /= 2;            
            i++;
        }
        return ans;
    }
};