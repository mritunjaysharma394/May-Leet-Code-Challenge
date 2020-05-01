// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    int copy = n;
    while(isBadVersion(n)==true)
    {
        n = n-1;
    }
    
    return n+1;
}