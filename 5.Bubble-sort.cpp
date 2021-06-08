#include<iostream>
using namespace std;

//Bubble sort
void bubble_sort(int a[], int n){
  //one iteration of swapping  operation takes 1 element to n
  //to move n-1 large elements to the end
  for(int itr=1;itr<=n-1;itr++){
   //pairwise swapping in the unsorted part of the arrey
    for(int j=0;j<=(n-itr-1);j++){
    if(a[j]>a[j+1]){
      swap(a[j],a[j+1]);
    }
    }
  }
}

int main(){
  int n,key;
  cin>>n;
  
  int a[1000];
  
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  
  bubble_sort(a,n);
  
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
