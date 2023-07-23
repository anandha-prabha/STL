//C++ program that takes a container of integers and returns the median value using the STL algorithms.
#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int>list1;
    int n=0,a=0;
    int r=0;
    double result=0;
    cout<<"Enter the no.of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;

    for(int i=1;i<=n;i++)
    {
        cin>>a;
        list1.push_back(a);                 //adds the elements to list1
    }
    list<int>::iterator it = list1.begin(); //iterator for list1 is created to traverse through the list
    list1.sort();                           //list1 is sorted
    if(n%2==0)                              //if number of elements is even the median is calculated accordingly
    {
        r=n/2;
        advance(it,r-1);                    //access the r-1 th element of list1 and adds the value to result
        result+=*it;
        advance(it,1);
        result+=*it;
        cout<<"Median:"<<result/2;          //median value for even number of elements is printed

    }
    else
    {
        advance(it,n/2);                    //access the n/2 th element of list1 and prints the median
        cout << "Median = "<<*it<<endl;
    }
    return 0;
}
