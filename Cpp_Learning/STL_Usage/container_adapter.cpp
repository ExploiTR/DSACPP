#include "../header.h"

class Compare
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    iosetup();

    /*
        Adapters are like existing containers but they provide a restricted interface
        to make them behave differently. For example,

        Stack
        Queue
        Priority Queue -> can adjust the order of queue items with logic like max priority or min priority queue
    */

    // stack<int> s;
    // for(int i = 1; i < 6; i++){
    //     s.push(i*i);
    // }

    // while(!s.empty()){
    //     cout << s.top() << endl;
    //     s.pop();
    // }

    // queue<int> q;
    // for(int i = 1; i < 129; i*=2){
    //     q.push(i);
    // }

    // while(!q.empty()){
    //     cout << q.front() << endl;
    //     q.pop();
    // }

    int arr[] = {4, 7, 1, 45, -1};
    priority_queue<int> heap; // by default its a max heap/max queue
    for (int x : arr)
    {
        heap.push(x);
    }

    while (!heap.empty())
    {
        cout << heap.top() << " ";
        heap.pop();
    }

    cout << endl;

    // priority_queue<int, vector<int>, greater<int>> heap_min; // by default its a max heap/max queue
    priority_queue<int, vector<int>, Compare> heap_min; // by default its a max heap/max queue
    for (int x : arr)
    {
        heap_min.push(x);
    }

    while (!heap_min.empty())
    {
        cout << heap_min.top() << " ";
        heap_min.pop();
    }

    cout << endl;

    return 0;
}