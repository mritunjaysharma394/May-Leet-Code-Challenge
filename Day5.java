class Solution {
    public int firstUniqChar(String s) {
        
        int pos = -1;
        int res;
        int flag = 1;
        for(int i = 0; i<s.length(); i++)
        {
            flag = 1;
            for(int j = i+1; j<s.length(); j++)
            {
                res = (s.charAt(i) ^ s.charAt(j));
                if(res==0 || s.charAt(i)==s.charAt(i+1))
                {
                    flag = 0;
                }
             
            }
            
            if (flag==1)
            {
                pos = i;
                break;
            }
            
        

        }
        
        
        
        return pos;
        
    }
}