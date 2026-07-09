typedef struct {
    int q1[100];
    int q2[100];
    int front1, rear1;
    int front2, rear2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* obj = (MyStack*)malloc(sizeof(MyStack));

    obj->front1 = obj->front2 = 0;
    obj->rear1 = obj->rear2 = -1;

    return obj;
}

void myStackPush(MyStack* obj, int x) {

    // Push new element into q2
    obj->q2[++obj->rear2] = x;

    // Move all elements from q1 to q2
    while (obj->front1 <= obj->rear1) {
        obj->q2[++obj->rear2] = obj->q1[obj->front1++];
    }

    // Swap q1 and q2
    int temp[100];
    int i;

    // Copy q2 to temp
    for (i = 0; i <= obj->rear2; i++)
        temp[i] = obj->q2[i];

    // Copy temp to q1
    for (i = 0; i <= obj->rear2; i++)
        obj->q1[i] = temp[i];

    obj->front1 = 0;
    obj->rear1 = obj->rear2;

    // Empty q2
    obj->front2 = 0;
    obj->rear2 = -1;
}

int myStackPop(MyStack* obj) {
    return obj->q1[obj->front1++];
}

int myStackTop(MyStack* obj) {
    return obj->q1[obj->front1];
}

bool myStackEmpty(MyStack* obj) {
    return obj->front1 > obj->rear1;
}

void myStackFree(MyStack* obj) {
    free(obj);
}