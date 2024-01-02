#include <iostream>
#include "ArrayList.h"
using namespace std;

int main(){
  // Default Constructor
  ArrayList arr = ArrayList();

  //Filled up with 20 items.

  for(int i = 0; i<20; i++){
    arr.push(i);
  }

  //Remove most to demonstrate erase

  cout<<arr.toString()<<endl;
  for(int i = 0; i<17; i++){
    cout<<arr.toString()<<endl;
    arr.erase(i);
  }
  cout<<arr.toString()<<endl;

  //Push and erase from the end to demonstrate

  arr.push(50);
  cout<<arr.toString()<<endl;
  arr.erase(50);
  cout<<arr.toString()<<endl;

  //Attempting to remove a number that isnt there

  arr.erase(50);
  cout<<arr.toString()<<endl;

  // Finished

  return 0;
}
