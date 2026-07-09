//Name: Rahul Ukey
//MIS: 112515216
int repeatedStringMatch(char* a, char* b) {

    int lenA = strlen(a);
    int lenB = strlen(b);

    char* str = (char*)malloc(sizeof(char) * (lenA + lenB + lenA + 1));

    str[0] = '\0';

    int count = 0;

    while (strlen(str) < lenB){
        strcat(str, a);
        count++;
    }

    if (strstr(str, b) != NULL){
        return count;
    }

    strcat(str, a);

    if (strstr(str, b) != NULL){
        return count + 1;
    }

    return -1;
}
