void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

    int numtmp = m + n - 1;

    while(n)
    {
        if(m)
        {
            if(nums1[--m] < nums2[--n])
            {
                nums1[numtmp] = nums2[n];
                m++;
            }
            else
            {
                nums1[numtmp] = nums1[m];
                n++;
            }
        }
        else
        {
            nums1[numtmp] = nums2[--n];
        }

        numtmp--;
    }
}