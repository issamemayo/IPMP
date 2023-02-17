//https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> unon;
        for(int i=0;i<n;i++){
            if(unon.count(a[i])){
                continue;
            }
            else{
                unon.insert(a[i]);
            }
        }
        for(int i=0;i<m;i++){
            if(unon.count(b[i])){
                continue;
            }
            else{
                unon.insert(b[i]);
            }
    }
    return unon.size();
    }
};