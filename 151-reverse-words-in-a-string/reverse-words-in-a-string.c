//Name: Rahul Ukey
//MIS: 112515216
char* reverseWords(char* s) {

    int len = strlen(s);

    char* arr = (char*)malloc(sizeof(char) * (len + 1));

    int k = 0;
    int end = len - 1;

    while (end >= 0){

        while (end >= 0 && s[end] == ' '){
            end--;
        }

        if (end < 0){
            break;
        }

        int start = end;

        while (start >= 0 && s[start] != ' '){
            start--;
        }

        for (int i = start + 1 ; i <= end ; i++){
            arr[k++] = s[i];
        }

        arr[k++] = ' ';

        end = start - 1;
    }

    if (k > 0){
        k--;
    }

    arr[k] = '\0';

    return arr;
}
