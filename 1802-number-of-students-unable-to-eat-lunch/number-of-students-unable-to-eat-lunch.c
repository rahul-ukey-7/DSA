//Name: Rahul Ukey
//MIS: 112515216
int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {

    int zero = 0;
    int one = 0;

    for (int i = 0 ; i < studentsSize ; i++){
        if (students[i] == 0){
            zero++;
        }else{
            one++;
        }
    }

    for (int i = 0 ; i < sandwichesSize ; i++){

        if (sandwiches[i] == 0){
            if (zero == 0){
                return one;
            }
            zero--;
        }else{
            if (one == 0){
                return zero;
            }
            one--;
        }
    }

    return 0;
}