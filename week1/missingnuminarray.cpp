//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution{
  public:
    int MissingNumber(vector<int>& arr, int n) {
        for(int i=0;i<n-1;i++){
            if(arr[i]<=n){
            if(arr[arr[i]-1]!=arr[i] ){
                swap(arr[i],arr[arr[i]-1]);
                i--;
            
            }
            }
            
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                return i+1;
            }
        }
        return n;
    }
};