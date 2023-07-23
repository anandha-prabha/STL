//C++ program that counts the number of unique elements in a given range using the STL set container.
#include <iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    int n=0,b=0;
    //create an STL set to store unique elements.
    set <int> a;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    //inserts the input n values to set
    cout<<"Enter the elements to be inserted into the set"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a.insert(b);
    }
    //prints the number of unique elements in the given range.
    cout<<"The number of unique elements in set a is "<<a.size()<<endl;
    return 0;
}

