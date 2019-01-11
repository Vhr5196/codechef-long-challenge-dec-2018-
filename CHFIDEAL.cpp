//  CHFIDEAL.cpp
//  problems
//
//  December challenge 2018 Div 2
//  Created by Hemanth Reddy on 17/12/18.
//  Copyright © 2018 Hemanth Reddy. All rights reserved.


https://www.codechef.com/DEC18B/problems/CHFIDEAL/


#include<iostream>
using namespace std;

int main(){

  int a[3]={0};
  int X,Y,Z;

  X = rand() % 3;
  a[X] = 1;
  cout<< X + 1 <<endl;

  cin>>Y;
  a[Y-1] = 1;

  for (int i = 0; i<3; i++){
    if( a[i] == 0){
      Z = i;
      break;
    }
  }
  cout<<Z+1<<endl;

  return 0;
}
