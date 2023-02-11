//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count0+=1;
            }
            else if(a[i]==1){
                count1+=1;
            }
            else{
                count2+=1;
            }
        }
        int j=0;
        while(j<count0){
            a[j]=0;
            j++;
        }
        while(j<count1+count0){
            a[j]=1;
            j++;
        }
        while(j<count1+count0+count2){
            a[j]=2;
            j++;
        }
    }
    
};
