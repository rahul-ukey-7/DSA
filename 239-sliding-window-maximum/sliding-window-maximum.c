//Name: Rahul Ukey
//MIS: 112515216
int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize) {

    *returnSize = numsSize - k + 1;

    int* arr = (int*)malloc(sizeof(int) * (*returnSize));

    int* queue = (int*)malloc(sizeof(int) * numsSize);

    int front = 0;
    int rear = 0;

    int j = 0;

    for (int i = 0 ; i < numsSize ; i++){

        while (front < rear && queue[front] <= i - k){
            front++;
        }

        while (front < rear && nums[queue[rear - 1]] < nums[i]){
            rear--;
        }

        queue[rear++] = i;

        if (i >= k - 1){
            arr[j++] = nums[queue[front]];
        }
    }

    return arr;
}
