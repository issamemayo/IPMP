//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution{
    public:
    
    void rotateArr(int a[], int d, int n){
        d%=n;
        
        reverse(a, a+d);
        
        reverse(a+d, a+n);
        
        reverse(a, a+n);
        
    }

};