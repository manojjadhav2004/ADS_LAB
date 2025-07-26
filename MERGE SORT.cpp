// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;




void mg(int a[],int s,int e,int mid){
    int i=s;
    int temp[10];
    int k=0;
    int j=mid+1;
    while(i<=mid&&j<=e){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
            
        }
        else{
            temp[k++]=a[j++];
        }        
    }
        while(i<=mid){
            temp[k++]=a[i++];
        }
        while(j<=e){
              temp[k++]=a[j++];

        }
    
    for(int m=0;m<k;m++){
        a[s + m] = temp[m];
    }

}

void merge(int a[], int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;   
        merge(a, s, mid);             
        merge(a, mid + 1, e);
        mg(a, s, e, mid);            

    }
}

int main() {
   int a[10]={4,5,2,4,9,8,7,5,4,1};
   int n=9;
   int mid,s,e;
   s=0;
   e=9;
  
merge(a,s,e);
cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}