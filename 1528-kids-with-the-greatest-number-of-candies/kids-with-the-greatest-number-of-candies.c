//Name: Rahul Ukey
//MIS: 112515216
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {

    int max = candies[0];

    for (int i = 1 ; i < candiesSize ; i++){
        if (candies[i] > max){
            max = candies[i];
        }
    }

    *returnSize = candiesSize;

    bool* arr = (bool*)malloc(sizeof(bool) * candiesSize);

    for (int i = 0 ; i < candiesSize ; i++){

        if (candies[i] + extraCandies >= max){
            arr[i] = true;
        }
        else{
            arr[i] = false;
        }
    }

    return arr;
}
