//https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-numbers4629/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    vector<int> a;
	    vector<int> b;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0){
	            a.emplace_back(arr[i]);
	            
	        }
	        else{
	            b.emplace_back(arr[i]);
	            
	        }
	    }
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    int index=0;
	    while(index<a.size()){
	        arr[index]=a[index];
	        index++;
	    }
	    index=0;
	    while(index<b.size()){
	        arr[index+a.size()]=b[index];
	        index++;
	    }
	    
	    
	}
};