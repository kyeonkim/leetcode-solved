class Solution {
    public int findSpecialInteger(int[] arr) {
        int target = arr.length / 4;
        int start = 0;
        
        for (int end = 1; end < arr.length; ++end)
        {
            if (arr[end] != arr[end - 1])
            {
                if (end - start > target)
                    return arr[start];
                start = end;
            }
        }
        return arr[start];
    }
}