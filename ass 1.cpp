// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int a[10]={1,1,1,0,0,0,0,0,0,0};
   int k=0,r=1;
   
    int i=-1;
    int s=0;
    int e=9;
    int mid;
    while(s<=e){
        
    
    mid=s+(e-s)/2;

    if(a[mid]==k)
    {
        i=mid;
        e=mid-1;
    }
  
    else{
        s=mid+1;
    }
    }

        cout<<"there are "<<10-i <<" zero's in array";
    
return 0;    
}