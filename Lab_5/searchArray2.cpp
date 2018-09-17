#include <iostream>
#include <fstream>
using namespace std;
/*void BubbleSort(int Array[50], int count)
{
int temp;
for(int i = 0; i < count-1; i++)
for(int j = 0; j < count-i-1; j++)
if(Array[j] > Array[j+1])
{
temp = Array[j];
Array[j] = Array[j+1];
Array[j+1] = temp;
}
}*/
int BinarySearch(int Array[], int low, int high, int key)
{
while(low <= high)
{
int mid = (low+high)/2;
if(Array[mid] == key)
return mid;
else if(key < Array[mid])
return BinarySearch(Array, low, mid-1, key);
else
return BinarySearch(Array, mid+1, high, key);
}
return -1;
}
int main()
{
int Array[50];
//cout<<"Enter the name of the file: ";   //Read the file name.
//string fileName;
//cin>>fileName;
ifstream ipFile("input");
//ipFile.open(fileName);           //Opens the file for input stream.
int count = 0;
while(!ipFile.eof())               //While the file is not empty.
ipFile>>Array[count++];           //Read the elements into the integer array.

//BubbleSort(Array, count);           //Sort the array, so that we can implement the Binary Search.

cout<<"Enter the key to search for: ";   //Read the key to search for.
int key;
cin>>key;
int pos = BinarySearch(Array, 0, count-1, key);   //Call the Binary search.
if(pos == -1)
cout<<"key is not available."<<endl;
else
cout<<key<<" found at position: "<<pos<<endl;
//And to print all the positions:
/*cout<<"Number also found at positions: ";
while(Array[pos--] == key);
pos += 2;
while(Array[pos++] == key)
cout<<pos<<" ";
cout<<endl; */
}
