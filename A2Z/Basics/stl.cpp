#include "../header.h"

void vector_test()
{
    vector<int> values;

    values.emplace_back(5);
    values.emplace_back(2);
    values.emplace_back(8);
    values.emplace_back(3);
    values.emplace_back(9);
    values.emplace_back(1);
    values.emplace_back(0);
    values.emplace_back(6);

    vector<int>::iterator it = values.begin();
    cout << *it << endl;
    it++;
    cout << *it << endl;
    it += 2;
    cout << *it << endl;

    values.erase(values.begin() + 1);
    cout << "[ ";
    for (auto val : values)
        cout << val << " ";
    cout << "]" << endl;

    values.erase(values.begin() + 1, values.begin() + 3);
    cout << "[ ";
    for (auto val : values)
        cout << val << " ";
    cout << "]" << endl;

    vector<int> values2(5, 100);
    values2.insert(values2.begin() + 2, 300);
    values2.insert(values2.begin() + 2, 2, -5);
    cout << "[ ";
    for (auto val : values2)
        cout << val << " ";
    cout << "]" << endl;
}

void explain_list()
{
    list<int> ls;
}

// double ended queue basically has push_front pop_front
void explain_deque()
{
    list<int> ls;
}

// LIFO
void explain_stack()
{
    list<int> ls;
}

// FIFO
void explain_queue()
{
    queue<int> qe;
}

void exp_priority_queue()
{
    // maximum heap (maxheap)

    priority_queue<int> pq;

    pq.emplace(5);
    pq.emplace(1);
    pq.emplace(11);
    pq.emplace(3);
    pq.emplace(9);

    cout << pq.top() << endl;

    pq.pop();

    cout << pq.top() << endl;

    // minimum heap (minheap)

    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.emplace(5);
    pq2.emplace(1);
    pq2.emplace(11);
    pq2.emplace(3);
    pq2.emplace(9);

    cout << pq2.top() << endl;

    pq2.pop();

    cout << pq2.top() << endl;

    /*
    push + pop -> log(n)
    top -> O(1)
    */
}

// sorted and unique
void test_set()
{
    set<int> st;

    st.insert(1);
    st.insert(4);
    st.insert(66);
    st.insert(2);
    st.insert(9);

    auto it = st.find(66);

    // erase is logarithmic

    multiset<int> setx; // allows duplicates

    // erase function removes all elements by values if passsed value or removes single by address
    // all functions here are LOG(N)

    unordered_set<int> us; // unique : all functions are O(1) [1 in a billon times can be O(N)]
    // excepts lower_bound and upper_bound
}

// sorted and unique key
void test_map() {}
// can use both emplace

// Priority Queue
int main()
{
    iosetup();

    /*

    Stl comes in

    1. Algorithms
    2. Containers
    3. Functions
    4. Iterators

    */

    // LOL

    // vector_test();

    // exp_priority_queue();

    return 0;
}