//https://practice.geeksforgeeks.org/problems/max-min/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution
{
   public:
    int findSum(int A[], int N)
    {
        if(N==1){
            return 2*A[0];
        }
        int max,min;
        if(A[0]>A[1]){
            max=A[0];
            min=A[1];
            
        }
        else{
            min=A[0];
            max=A[1];
            
            
        }
        for(int i=2;i<N;i++){
            if(A[i]>max){
                max=A[i];
                
                
            }
            else if(A[i]<min){
                min=A[i];
            }
        }
        
        return min+max;
    	//code here.
    }

};