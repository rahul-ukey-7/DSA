//Name: Rahul Ukey
//MIS: 112515216
typedef struct {
    int arr[30000];
    int minArr[30000];
    int top;
} MinStack;


MinStack* minStackCreate() {
    MinStack* stack = (MinStack*)malloc(sizeof(MinStack));

    stack->top = -1;

    return stack;
}

void minStackPush(MinStack* obj, int val) {

    obj->arr[++obj->top] = val;

    if (obj->top == 0 || val < obj->minArr[obj->top - 1]){
        obj->minArr[obj->top] = val;
    }else{
        obj->minArr[obj->top] = obj->minArr[obj->top - 1];
    }
}

void minStackPop(MinStack* obj) {
    obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->arr[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->minArr[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj);
}
