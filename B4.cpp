/*Write a C++ program that creates an output file, writes information to it, closes the file
andopen it again as an input file and read the information from the file.*/
#include <iostream>
#include <fstream>//to use files in the program
#include <string.h>
using namespace std;
int main()
{
    fstream file;//object of fstream class
    file.open("pranjal.txt",ios::out);
    if(!file)
    {
        cout<<"Error in opening the file!!!"<<endl;
        return 0;
    }
    cout<<"File created successfully"<<endl;
    file<<"Hello everyone!!";
    file<<"\n Welcome to the world of programing";
    file.close();
    
    file.open("pranjal.txt",ios::in);
   if(!file)
    {
        cout<<"Error in opening the file!!!"<<endl;
        return 0;
    }
    string ch;
    while(!file.eof())
    {
       getline(file,ch);
        cout<<ch<<endl;
        
    }
    file.close();
    return 0;
    
}