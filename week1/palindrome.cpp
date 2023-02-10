//https://leetcode.com/problems/palindrome-number/description/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int nums=x;
        long int reverse=0;
        while(nums){
            reverse*=10;
            reverse+=nums%10;
    
            nums/=10;


        }
        if(reverse==x){
            return true;
        }
        return false;
        
    }
};