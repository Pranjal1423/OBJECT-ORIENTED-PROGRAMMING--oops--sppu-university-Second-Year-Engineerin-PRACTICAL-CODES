
/*Imagine a publishing company which does marketing for book and audio cassette
versions. Create a class publication that stores the title (a string) and price (type float) of
a publication.
From this class derive two classes: book, which adds a page count (type int), and tape,
which adds a playing time in minutes (type float).
Write a program that instantiates the book and tape classes, allows user to enter data
and displays the data members. If an exception is caught, replace all the data member
values with zero values.*/
#include <iostream>
#include <string.h>
using namespace std;
class publication{
    string title;
    float price;
    public:
    publication()//constructor
    {
        title="";
        price=0.0;
    }
    void add()//to input data from the user
    {
        cout<<"Enter the title "<<endl;
        cin>>title;
        cout <<"Enter the price ";
        cin>> price;
    }
    void display()//to display the data
    {
        cout<<"Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
        
    }
};
class book:public publication
{
    int pagecount;
    public:
    book()
    {
    pagecount=0;
    }

    void addpg()
    {
    try{
        add();
        cout<<"Enter the page count "<<endl;
        cin>>pagecount;
        
        if(pagecount<0)
        {
        throw(pagecount);
        }
    }
    
    catch(int r)
    {
    cout<<"Invalid page count!!!"<<endl;
    pagecount=0;
    cout<<"\n\n";
    }
    }
    void displaypg()
    {
        display();
        cout<<"Page count :"<<pagecount;
    }
};
class tape:public publication
{
    float playtime;
    public:
    tape()
    {
    playtime=0.0;
    }

    void addpt()
    {
    try{
        add();
        cout<<"Enter the play time "<<endl;
        cin>>playtime;
        
        if(playtime<0.0)
        {
        throw(playtime);
        }
    }
    
    catch(float t)
    {
    cout<<"Invalid play time!!!"<<endl;
    playtime=0.0;
    cout<<"\n\n";
    }
    }
    void displaypt()
    {
        display();
        cout<<"Play time :"<<playtime;
    }
};
int main()
{
    int a=1;
    while(a=1)
    {
string ch;
    cout << "Is the publication information about a book or an audio tape? (Enter book/audio)" << endl;
    cin >> ch;

    if(ch=="book" || ch=="Book") {
        book obj1;
        obj1.addpg();
        obj1.displaypg();
    }
    else if(ch=="audio" || ch=="Audio") {
        tape obj2;
        obj2.addpt();
        obj2.displaypt();
    }
    else
    {
        cout<<"Invalid choice";
    }
  char cho;  
    cout<<"\n\n Do you want to continue?(y/n)"<<endl;
        cin>> cho;
        if(cho=='y')
            a=1;
        else 
        a=0;
        
}
    cout<<"Thankyou!!!";
}