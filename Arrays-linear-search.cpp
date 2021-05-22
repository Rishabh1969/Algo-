#include<iostream>
using namespace std;

int main(){
int n, key;
cin>>n;

int a[1000];
for(int i=0; i<n ; i++)
{
  cin>>a[i];
}

cout<<"Enter the element you want to search in  the array";  // ask for the element we want to search
cin>>key;

int i;

for (i=0; i<= n-1; i++){ //find out the index of that element by traversing the array Linear Search algorithm
  if (a[i]==key)
  {
  cout<<key<<" found at" <<i <<"th index";
  break;
  }
 }
  if (i==n){
  cout<<key<<"is not present in the array"<<endl;
  }
  
return 0;
}
