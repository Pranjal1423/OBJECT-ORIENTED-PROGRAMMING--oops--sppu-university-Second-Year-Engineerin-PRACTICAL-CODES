/* Write a program in C++ to use map associative container. The keys
will be the names of states and
the values will be the populations of the states. When the program
runs, the user is prompted to type the
name of a state. The program then looks in the map, using the state
name as an index and returns the
population of the state. */

/* An associative container is a type of container in C++ that
organises and stores elements based on
key-value pairs. It allows efficient retrieval of elements using their
associated keys.
The C++ Standard Template Library (STL) provides several associative
container classes, and two of the most
commonly used ones are std::map and std::unordered_map.
std::map is an ordered associative container that stores elements as
key-value pairs and automatically
maintains the keys in sorted order. It is implemented as a balanced
binary search tree. */

#include <iostream>
# include <map>
#include <string>
using namespace std;
int main()
{   int n;
    string state;
    int pop;//population
    char ans='y';
    int ch;
    map<string,int> m;//map<key datatype,value datatype> name of the map
    map<string,int>::iterator i;//it is use to traverse the map
    cout<<"Program related to states and its population"<<endl;
    do
    {
    cout<<"\nMain menu:";
    cout<<"\n 1.insert";
    cout<<"\n 2.display";
    cout<<"\n 3.Search";
    
    cout<<"\n Enter your choice:";
    cin>>ch;
     switch(ch)
     {
     case 1:
        cout<<"Enter the total number of states you want to enter\n";
        cin>>n;
        for(int i=0;i<n;i++)
        {
        cout<<"\n Enter the name of the state:";
        cin>>state;
        cout<<"\n Enter the population of the state (in cr):";
        cin>>pop;
        m.insert(pair<string,int>(state,pop));
        }
        break;
     case 2:cout<<"State and its population are"<<endl;
            for(i = m.begin();i != m.end();i++)
            {
            cout<<(*i).first<<" : "<<(*i).second<<endl;
            }
        break;
     case 3:cout<<"Enter the state whose population you want to search";
        cin>>state;
        if(m.count(state)!= 0)
            cout<<"Population of the state  "<<state<<"  is  "<<m.find(state)->second<< " cr"<<endl;
        else
            cout<<"The state is not present in the list"<<endl;
        break;
    
    }
    cout<<"Do you want to continue?(y/n):";
    cin >> ans;
    }
    while(ans=='Y'|| ans=='y');
    return 0;
    }
    

