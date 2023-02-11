//https://practice.geeksforgeeks.org/problems/alone-in-couple5507/1
class Solution{
    public:
    int findSingle(int N, int arr[]){
        int p=0;
        for(int i=0;i<N;i++){
            p=p^arr[i];
        
        }
        return p;
    }
};