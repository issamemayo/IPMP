//https://www.geeksforgeeks.org/turn-an-image-by-90-degree/
#include<bits/stdc++.h>
using namespace std;

int** rotate(int**a,int m, int n){
    //Array initialisation
    int**b= new int*[n];

    for(int i=0;i<n;i++){
        b[i]=new int[m];
    }

    //new array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[j][m-i-1]=a[i][j];

        }
    }
    return b;
}


 int main(){

    int m,n;
    cout<<"Enter number of rows and cols respectively";
    cin>>m>>n;
    
    int** a = new int*[m];
 
    for (int i = 0; i < m; i++) {
 
        
        a[i] = new int[n];  
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cout<<"Enter element: ";
        cin>>a[i][j];

        }
    }
    cout<<endl<<"Printing entered array: "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        
        cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    int**b=rotate(a,m,n);
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        
        cout<<b[i][j]<<" ";

        }
        cout<<endl;
     }
    

    return 0;
 }