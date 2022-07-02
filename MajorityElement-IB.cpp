/*Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.
You may assume that the array is non-empty and the majority element always exist in the array.

Example :

Input : [2, 1, 2]
Return  : 2 which occurs 2 times which is greater than 3/2.*/

int Solution::majorityElement(const vector<int> &A) {
     int majorityIndex = 0;
    for (int count = 1, i = 1; i < A.size(); i++) {
        
        A[majorityIndex] == A[i] ? count++ : count--;
        
        if (count == 0) {
            majorityIndex = i;
            count = 1;
        }
    }

    return A[majorityIndex];
    
}
