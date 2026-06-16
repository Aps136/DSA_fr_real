class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int actual = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[actual--]= nums1[i--];
            }
            else {
                nums1[actual--]=nums2[j--];
            }
        }
        while(j>=0){
            nums1[actual--]=nums2[j--];
        }
        
    }
};


/*
Time Complexity: O(M+N), Space Complexity: O(M+N)
First array has length m+n (given), knowing that, compare elements starting from the rightmost side and start adding it to the 1st array
Finally, to deal with case where in first array i value reaches -1, then it exits out of first while loop. Then in second while loop handle that by adding second array elements to the first array
*/
