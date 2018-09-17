#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{

   //input file name
   string inputFile="words_in";


   //declaration of pointer to string
   string *words;
   int count=0;
   string tempStr;
   ifstream fin;

   //open input file
   fin.open("words_in");

   if(!fin)
   {

       cout<<"File does not exist ."<<endl;
       return 0;
   }

   while(!fin.eof())
   {
       fin>>tempStr;
       count++;
   }

   fin.close();

   words=new string[count];

   //string outputFile="words_out";
  
   //open an output file
   ofstream fout;
   fout.open("words_out");

   int index=0;

   //open input file again to read
   fin.open("words_in");

   if(!fin)
   {
       cout<<"File does not exist ."<<endl;
       return 0;
   }


   while(!fin.eof() && index<count)
   {
       fin>>tempStr;
       words[index]=tempStr;
       fout<<words[index]<<endl;
       index;
   }

   //close output and input file streams
   fout.close();
   fin.close();


    return 0;
}
