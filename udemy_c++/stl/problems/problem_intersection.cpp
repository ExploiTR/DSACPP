#include "../../header.h"

void printIntersection(vector<int> nums1, vector<int> nums2)
{
    // write your code here:
    auto it1 = nums1.begin();
    auto it2 = nums2.begin();
    int c = 0;

    while (it1 != nums1.end() && it2 != nums2.end())
    {
        if (*it1 == *it2)
        {
            cout << *it1 << " ";
            c++;

            it1++;
            it2++;
        }
        else if (*it1 < *it2)
            it1++;
        else
            it2++;
    }

    if (c == 0)
        cout << -1 << " ";
}

int main()
{
    iosetup();

    vector<int> x = {1, 4, 5, 6, 7, 8, 11};
    vector<int> y = {2, 4, 8, 9, 11, 12, 13};

    printIntersection(x, y);

    return 0;
}