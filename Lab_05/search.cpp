#include <bits/stdc++.h>
using namespace std;

bool checkArraySort(int a[], int len) {
   for (int i = 0; i < len - 1; ++i) {
       if (a[i] > a[i + 1]) return false;
   }
   return true;
}

int binarySearch(int a[], int lo, int hi, int key) {
   if (lo > hi) {
       return -1;
   }
   if (lo == hi) {
       if (a[lo] == key) return lo;
       else return -1;
   }
   int mid = (lo + hi) / 2;
   if (a[mid] == key) return mid;
   else if (a[mid] < key) return binarySearch(a, mid + 1, hi, key);
   else return binarySearch(a, lo, mid - 1, key);
}

int main() {
   ifstream f("input");


   int n;
   f >> n;


   int *a = new int[n];

   for (int i = 0; i < n; ++i) {
       f >> a[i];
   }

   if (checkArraySort(a, n)) {
       int key;
       cout << "Enter key to search: ";
       cin >> key;


       int index = binarySearch(a, 0, n - 1, key);
       if (index == -1) {
           cout << "The key " << key << " was not found in the array!\n";
       } else {
           cout << "Found key " << key << " at index " << index << "!\n";
       }
   } else {
       cout << "Array is not sorted, exiting the program." << endl;
   }

   f.close();

   return 0;
}
