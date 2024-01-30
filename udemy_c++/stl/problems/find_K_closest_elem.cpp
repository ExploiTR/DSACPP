#include "../../header.h"

int closestIndex(vector<int> arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;

    bool midIsLeftIndex = false;

    while (start < end)
    {
        mid = (start + end) / 2;
        if (x == arr[mid])
            return mid;
        else if (end - start == 1)
            break;
        else if (x > arr[mid])
        {
            start = mid + 1;
            midIsLeftIndex = true;
        }
        else
        {
            end = mid - 1;
            midIsLeftIndex = false;
        }
    }

    if (midIsLeftIndex)
        return abs(x - arr[mid]) < abs(x - arr[mid + 1]) ? mid : mid + 1;
    else
        return abs(x - arr[mid]) < abs(x - arr[mid - 1]) ? mid : mid - 1;
}

/**
 * @brief Find K Closest Elements
 *
 * Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array.
 * The result should also be sorted in ascending order.
 *
 * An integer a is closer to x than an integer b if:
 *
 * |a - x| < |b - x|, or
 * |a - x| == |b - x| and a < b
 *
 * Constraints:
 *
 * 1 <= k <= arr.length
 * 1 <= arr.length <= 10^4
 *
 * arr is sorted in ascending order.
 * -10^4 <= arr[i], x <= 10^4
 *
 * Example :
 *
 * Input: arr = [1,2,3,4,5], k = 4, x = 3
 * Output: [1,2,3,4]
 *
 * @return vector<int>
 */
vector<int> findClosestElements(vector<int> arr, int k, int x)
{
    std::vector<int> vec;
    int _closestIndex = closestIndex(arr, x);

    // Add the closest element to the result
    vec.push_back(arr[_closestIndex]);

    // Initialize pointers for moving towards the front and back of the array
    int front = _closestIndex - 1;
    int back = _closestIndex + 1;

    // Continue selecting closest elements until the result size is k
    while (vec.size() < k) {
        // Check if both pointers are within the array bounds
        if (front >= 0 && back < arr.size()) {
            // Choose the element that is closer to x
            if (abs(arr[front] - x) <= abs(arr[back] - x)) {
                vec.push_back(arr[front--]);
            } else {
                vec.push_back(arr[back++]);
            }
        } else if (front >= 0) {
            // If only the front pointer is within bounds
            vec.push_back(arr[front--]);
        } else if (back < arr.size()) {
            // If only the back pointer is within bounds
            vec.push_back(arr[back++]);
        }
    }

    // Sort the result vector in ascending order
    std::sort(vec.begin(), vec.end());

    return vec;
}

int main()
{
    iosetup();

    int k, x;

    cin >> k;
    cin >> x;

    vector<int> arr = {-5, -3, -1, 3, 6, 11};
    vector<int> res = findClosestElements(arr, k, x);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}