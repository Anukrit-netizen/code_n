#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n,r;
      cin>>n;
      r=n%10;
      if(r==0){
        cout<<"0"<<endl;
      }
      else if(r==5){
        cout<<"1"<<endl;
      }
      else{
        cout<<"-1"<<endl;
      }
    }//write your code here
    
    return 0;
  }
