#include <iostream>

using namespace std;
string combineStr(string s,int n){
string returnStr = "";
for(int i=0; i<n; i++){
returnStr = returnStr + s;
}
return returnStr;
}
int main()
{
string s;
int n;
while(true){
cout<<"Enter a string: ";
cin >> s;
cout<<"Enter a number of times: ";
cin >> n;
if(n == 0){
break;
}
string result = combineStr(s, n);
cout<<"The resulting string is: "<<result<<endl;
}
return 0;
}
