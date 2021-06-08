#include<iostream>
#include<climits>
using namespace std;
//Find the largest and the smallest element in an array

int main(){
  int n, key;
  cin>>n;
  
  int a[1000];
  
  for(int i=0; i<n;i++){
    cin>>a[i];
  }
  
  //Algorithm below
  
  int largest= INT_MIN;
  int smallest= INT_MAX;
  
  for(int i =0; i<n; i++){
    
    if(a[i]>largest){
      largest=a[i];
    }
    
    if(a[i]<smallest){
      smallest=a[i];
    }
  }
  
  cout<<"largest "<<largest<<endl;
  cout<<"smallest "<<smallest<<endl;
  
  return 0;
}
