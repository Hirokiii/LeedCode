int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) return 0;
    int i = 1, j = 1;
    for (j; j<numsSize; j++){
        if (*(nums + j -1) != *(nums + j)){
            *(nums + i) = *(nums + j);
            i++;
        }
    }
    return i;
}
/*
Runtime: 20 ms, faster than 70.27% of C online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 9.7 MB, less than 37.84% of C online submissions for Remove Duplicates from Sorted Array.
*/
