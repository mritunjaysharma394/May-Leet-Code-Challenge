int numJewelsInStones(char * J, char * S){
    
    int i = 0;
    int j = 0;
    int c = 0; 
    while(S[i]!='\0')
    {
        j = 0;
        while(J[j]!='\0')
        {
            if(S[i]==J[j])
            {
                c++;
            }
            
            j++;
        }
        
        i++;
    }
    
    return c;

}