class Solution {
    public int majorityElement(int[] nums) {
         
        Map<Integer, Integer> mp = new HashMap<>(); 
        int ans=0;
  
      

        for (int i = 0; i < nums.length; i++) 
        { 
            if (mp.containsKey(nums[i]))  
            { 
                mp.put(nums[i], mp.get(nums[i]) + 1); 
            }  
            else
            { 
                mp.put(nums[i], 1); 
            } 
        } 
        
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) 
        { 
            if(entry.getValue()>nums.length/2)
            {
                ans = entry.getKey();
            }
        }
        
        return ans;
    }
        
}