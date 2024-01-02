#include <iostream>
#include <string>
#include "ArrayList.h"
using namespace std;

//
// Default making an array with a capacity of 1.
//

ArrayList::ArrayList(){
  arr = new int[1];
  current = 0;
  capacity = 1;
}

//
// Push, this function will add in the number passed by the user to the end of the array,
// and resize the array if needed to
//

void ArrayList::push(int m){
  if(current == capacity){
    int* temp = new int[capacity*2];
    for(int i = 0; i<capacity;i++){
      temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
    temp = NULL;
    capacity = capacity*2;
  }
  arr[current] = m;
  current++;

}
//
// Erase function, this will remove the passed integer from the ArrayList.
// If this puts the array under half capacity the array will shrink
// The array will not shrink at exactly half, but only under half capacity.
//
void ArrayList::erase(int m){

  bool found = false;
  int helper;
  for(int i = 0;i<current;i++){
    if(found){
      helper = arr[i-1];
      arr[i-1] = arr[i];
      arr[i]=helper;
    }
    else{
      if(arr[i] == m){
        arr[i] = 0;
        found = true;
      }
    }
  }
  if(found)
    current--;

  if(current == (capacity/2)){
    int* temp = new int[capacity/2];
    for(int i = 0; i<(capacity/2);i++){
      temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
    temp = NULL;
    capacity = capacity/2;
  }
}

//
// Returns the array in the form of a String
//

string ArrayList::toString(){
  string result = "[ ";
  for(int i = 0; i<capacity;i++){
    result.append(to_string(arr[i]));
    if(!((i+1)==capacity)){
      result.append(", ");
    }
  }
    result.append("]");
    return result;
}
