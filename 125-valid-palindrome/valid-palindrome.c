//Name: Rahul Ukey
//MIS: 112515216
bool isPalindrome(char* s) {

    int start = 0;
    int end = strlen(s) - 1;

    while (start < end){

        while (start < end && !((s[start] >= 'a' && s[start] <= 'z') || (s[start] >= 'A' && s[start] <= 'Z') || (s[start] >= '0' && s[start] <= '9'))){
            start++;
        }

        while (start < end && !((s[end] >= 'a' && s[end] <= 'z') || (s[end] >= 'A' && s[end] <= 'Z') || (s[end] >= '0' && s[end] <= '9'))){
            end--;
        }

        if (s[start] >= 'A' && s[start] <= 'Z'){
            s[start] = s[start] + 32;
        }

        if (s[end] >= 'A' && s[end] <= 'Z'){
            s[end] = s[end] + 32;
        }

        if (s[start] != s[end]){
            return false;
        }

        start++;
        end--;
    }

    return true;
}
