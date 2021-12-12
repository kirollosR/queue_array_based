#include "queue.h"
#include <stdio.h>

void CreateQueue (QueueType *q)
{
    q->front=0;
    q->rear=MAX-1;
    q->size=0;
}

int QueueEmpty (QueueType q)
{
    return(q.size==0);
}

int QueueFull (QueueType q)
{
    return(q.size==MAX);
}

void Enqueue (EntryType item, QueueType *q)
{
    q->rear=(q->rear + 1)%MAX;
    q->entry[q->rear]=item;
    q->size++;
}

void Dequeue (EntryType *item, QueueType *q)
{
    *item=q->entry[q->front];
    q->front=(q->front+1)%MAX;
    q->size--;
}

int Dequeue1(QueueType *q)
{
    int item=q->entry[q->front];
    q->front=(q->front+1)%MAX;
    q->size--;
    return item;
}

void TraverseQueue (QueueType *q,void (*f)(EntryType*))
{
    int i,s;
    for(i=q->front,s=0; s<q->size; s++)
    {
        (*f)(&q->entry[i]);
        i=(i+1)%MAX;
    }
}

//question 4 sheet 3
void ClearQueue (QueueType *q)
{
    q->front=0;
    q->rear=MAX-1;
    q->size=0;
}

//question 5 sheet 3
void CopyQueue (QueueType *q, QueueType *newQ)
{
    newQ->front=q->front;
    newQ->rear=q->rear;
    newQ->size=q->size;

    int i,s;
    for(i=q->front,s=0; s<q->size; s++)
    {
        newQ->entry[i]=q->entry[i];
        i=(i+1)%MAX;
    }
}

//question 6 sheet 3
int QueueSize (QueueType *q)
{
    return (q->size);
}
