//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
//User function Template for C++

string reverseWord(string str){
    int f= 0;
    int r= str.size()-1;
    while( f<r){
        char temp=str[f];
        str[f]=str[r];
        str[r]=temp;
        f++;
        r--;
    }
    
    return str;
  //Your code here
}
