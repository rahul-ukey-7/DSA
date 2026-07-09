


typedef struct {
    int size;
    int top1;
    int top2;
    int *s1;
    int *s2;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue *q=(MyQueue *)malloc(sizeof(MyQueue));

    q->size=100;
    q->top1=q->top2=-1;

    q->s1=(int *)malloc(q->size*sizeof(int));
    q->s2=(int *)malloc(q->size*sizeof(int));

    return q;
}

void myQueuePush(MyQueue* obj, int x) {
    obj->top1++;
    obj->s1[obj->top1]=x;

}

int myQueuePop(MyQueue* obj) {
    if(obj->top2==-1)
    {
        while(obj->top1!=-1)
        {
            obj->s2[++obj->top2]=obj->s1[obj->top1--];
        }
    }

    return obj->s2[obj->top2--];
    
}

int myQueuePeek(MyQueue* obj) {
    if(obj->top2==-1)
    {
        while(obj->top1!=-1)
        {
            obj->s2[++obj->top2]=obj->s1[obj->top1--];
        }
    }

    return obj->s2[obj->top2];
}

bool myQueueEmpty(MyQueue* obj) {
    if(obj->top1==-1 && obj->top2==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void myQueueFree(MyQueue* obj) {
    free(obj->s1);
    free(obj->s2);
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/