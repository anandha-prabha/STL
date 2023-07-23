//C++ program to implement a custom container that behaves like a stack using the STL algorithms and data structures.
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
template <typename T>
class set_a {
public:
    set<T> stack_a;                     //set is defined as stack_a
    void push(const T& element)         //function to add elements into the custom container stack_a
    {
        stack_a.insert(element);
    }

    void pop()                          //function to delete elements from the custom container stack_a
    {
        if (!empty())
        {
            auto it = stack_a.end();
            --it;
            stack_a.erase(it);
        }
    }
    const T& top() const               //function to return the top element from the custom container stack_a
    {
        if (empty())
        {
           throw runtime_error("Stack is empty.");
        }
        return *(--stack_a.end());
    }

    bool empty() const                 //function to check the custom container stack_a is empty or not
    {
        return stack_a.empty();
    }

    size_t size() const                //function to return the size of the custom container stack_a
    {
        return stack_a.size();
    }
};

int main()
{
    set_a<int>stack_op;
    int n,a=0;
    cout<<"Enter the no.of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)                                               //gets the elements and push it to the custom container
    {
        cin>>a;
        stack_op.push(a);
    }
    cout << "Stack size: " << stack_op.size() << endl;                 //prints the size of stack and top element
    cout << "Top element: " << stack_op.top() << endl;
    stack_op.pop();                                                    //deletes the top element and prints the updated top and size of the stack
    cout << "Stack size after pop is: " << stack_op.size() << endl;
    cout << "Top element after popping: " << stack_op.top() << endl;
    return 0;
}

