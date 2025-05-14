#include "..\header.h"

/*
 * Functor : A C++ functor, short for "function object," is a class or struct in C++ that overloads the function call operator ().
 * This allows instances of the class to be used with the same syntax as functions.
 * Functors provide a way to create objects that can be called like functions,
 * providing more flexibility and customization compared to regular functions.
 */
class funxtor
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

    funxtor f;

    vector<int> vx = {0, 5, 3, 5, 2, 67, 4, 1};
    sort(vx.begin(), vx.end(), funxtor());

    for (auto x : vx)
        cout << x << " ";

    int pass_value_to_inline_functor = 5;

    // lambda function : alternative to functor | pass address to modify value
    auto lesser = [pass_value_to_inline_functor](int a, int b)
    {
        // can use pass_value_to_inline_functor here.
        return a < b;
    };

    cout << endl;

    vector<int> vx2 = {0, 5, 3, 5, 2, 67, 4, 1};
    sort(vx2.begin(), vx2.end(), lesser);

    for (auto x : vx2)
        cout << x << " ";

    /* Inline Lambdas*/
    cout << endl;

    vector<int> vx3 = {34534, 5, 3345, 5, 3452, 637, 4, 1};
    sort(vx3.begin(), vx3.end(), [](int a, int b)
         { return a > b; });

    for (auto x : vx3)
        cout << x << " ";

    return 0;
}