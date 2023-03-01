//https://practice.geeksforgeeks.org/problems/sum-of-two-numbers-represented-as-arrays3110/1
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    if (a.size() > b.size()) swap(a, b);

	    
	    vector<int> ans;

	    
	    int n = a.size(), m = b.size();

	    
	    reverse(a.begin(), a.end());
	    reverse(b.begin(), b.end());

	    int carry = 0;
	    for (int i = 0; i < n; i++) {
	        
	        int sum = (a[i] + b[i] + carry);
	        ans.push_back(sum % 10);

	        
	        carry = sum / 10;
	    }

	    
	    for (int i = n; i < m; i++) {
	        int sum = (b[i] + carry);
	        ans.push_back(sum % 10);
	        carry = sum / 10;
	    }

	   
	    if (carry) ans.push_back(carry);

	    
	    reverse(ans.begin(), ans.end());

	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends