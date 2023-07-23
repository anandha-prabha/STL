//C++ program that uses the STL priority_queue to find the Kth smallest element in an unsorted array.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int smallestelement(const vector<int>& a, int k,int n) {
    priority_queue<int> Heap;

    // Push the first n elements into the heap
    for (int i = 0; i < k; i++) {
        Heap.push(a[i]);
    }

    // Process the remaining elements of the array
    for (int i = k; i < n; i++) {
        if (a[i] < Heap.top()) {
            Heap.pop();
            Heap.push(a[i]);
        }
    }

    // The top of the heap contains the kth smallest element
    return Heap.top();
}

int main() {
    vector<int> a;
    int n,b=0,k=0;
    cout<<"Enter the no.of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    cout<<"Enter k:"<<endl;
    cin>>k;
    int kthSmallestElement = smallestelement(a, k,n);
    cout << "The " << k << "th smallest element is: " << kthSmallestElement << endl;
    return 0;
}
