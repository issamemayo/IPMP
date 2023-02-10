//https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/
class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        vector<int>nums(2);
        int count=0;
        sort(arr,arr+N+2);
        for(int i=0;i<N+2;i++){
            if(arr[i]==arr[i+1]){
                nums[count]=arr[i];
                count++;
            }
        }
        
        return nums;
    }
};