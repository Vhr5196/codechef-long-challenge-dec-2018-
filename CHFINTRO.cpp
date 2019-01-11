//CHIFINTRO.cpp
//  problems
//
//  december challenge 2019 Div 2
//  Created by Hemanth Reddy on 17/12/18
//  Copyright © 2018 Hemanth Reddy. All rights reserved.


#include<iostream>
using namespace std;


int main(){
  int N,r;
  cin>>N>>r;
  for( int i=0; i<N; i++){
    int R;
    cin>>R;
    if(R>=r) cout<<"Good boi\n";
    else cout<<"Bad boi\n";
  }
  return 0;
}


