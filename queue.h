#define MAX 10

typedef int EntryType;
typedef struct
{
    int front;
    int rear;
    int size;
    EntryType entry[MAX];
}QueueType;

void CreateQueue(QueueType *);
int QueueEmpty(QueueType);
int QueueFull(QueueType);
void Enqueue(EntryType ,QueueType *);
void Dequeue(EntryType *, QueueType *);
void TraverseQueue (QueueType *q,void (*f)(EntryType*));

void ClearQueue (QueueType *);
void CopyQueue (QueueType *q, QueueType *newQ);
int QueueSize (QueueType *q);
int Dequeue1(QueueType *q);
