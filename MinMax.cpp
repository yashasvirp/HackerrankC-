/* finding minimum and maximum in array */

#include<iostream>
#include<climits>
using namespace std;

int main(){

  int n, mi = INT_MAX;
  int ma= INT_MIN;

  cout<<"Enter size: ";
  cin>>n;

  int arr[n];
  
  cout<<"Enter elements: ";
  
  for(int i = 0; i < n; i++){
    cin>>arr[i];
    
    if(arr[i] >= ma)
      ma = arr[i];

    if(arr[i] <= mi)
      mi = arr[i];
  }

  cout<<"Max: "<<ma<<" Min: "<<mi<<endl;

  return 0;
}
