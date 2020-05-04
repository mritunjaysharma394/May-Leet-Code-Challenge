class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        
        int countRansom[] = new int[26];
        int countMagazine[] = new int[26];
        int i,check_len;
        i = 0;
        check_len = 0;
        
    while(i<ransomNote.length())
    {
        countRansom[ransomNote.charAt(i)-97]++;
        i++;
    }
    
    i = 0;

    while(i<magazine.length())
    {
        countMagazine[magazine.charAt(i)-97]++;
        i++;
    }
    
    for (i = 0; i < 26; i++)
    {

        if((countRansom[i]!=0 && countMagazine[i]!=0)&&(countRansom[i]<=countMagazine[i]))
        {
            check_len = check_len + countRansom[i];
        }
        
        
    }
    
    
    if (check_len==ransomNote.length() || ransomNote=="")
    {
        return true;
    }
    
    else
    {
        return false;
    }
        
    }
}