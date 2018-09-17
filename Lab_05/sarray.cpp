#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

bool checkArraySort(string *A, int length)
{
  //std::sort(A, A+length);
  for (int i = 0; i < length-1; i++) {
    if (strcmp(A[i].c_str(), A[i + 1].c_str()) > 0) {
      cout << i << " and " << i+1 << " are out of order" << endl;
      return false;
    }
    //cout << i << " and " << i+1 << " are in order" << endl;
  }

  for(int y = 0; y < length; y++){
    cout << y << ":" << A[y] << endl;
  }

  return true;
}


int binarySearchR(string *A, int beg, int end, string key)
{
  int index = 0;

  cout << "b:e= " << beg << " : " << end << endl;

  if(beg > end) {
    return -1;
  }

  if(beg == end) {
    if (A[beg] == key) {
      return beg;
    }
    else {
      return -1;
    }
  }

  int mid = (beg + end) / 2;
  if(A[mid] == key) {
    return mid;
  }
  else if(A[mid]<key) {
    return binarySearchR(A, mid+1, end, key);
  }
  else {
    return binarySearchR(A, beg, mid-1, key);
  }
}


int main()
{
  // input an array from a file
  string A[] = {"john", "bobby", "dear", "jenny", "catherine", "nomi", "shinta", "martin", "abe", "may", "zeno", "zack", "angeal", "gabby"};
  int length = sizeof(A)/sizeof(A[0]); //Get the array size
  int beg, end, index;
  string key;

  // check if the array is sorted
  if(!checkArraySort(A, length))
  {
    cout << "array is not sorted!"<< endl;
    return -1;
  }

  // prompt the user to input key
  cout << "enter key: " ;
  cin >> key;
  cout << key << " is received" << endl;

  // search the key
  beg = 0;
  end = length-1;
  index = (binarySearchR(A, beg, end, key));

  if(index > 0) {
    cout << "Found key " << key << " at index " << index << endl;
  }
  else {
    cout << "The key " << key << " was not found in the array!" << endl;
  }

  return true;
}
