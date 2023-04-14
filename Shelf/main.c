#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int num;
    struct Node *next, *prev;
}Node;


typedef struct List{
    size_t size;
    Node *first, *last;
}List;


List* create();
void insertSt(List* shelf, int n);
void insertEnd(List* shelf, int n);
int popLeft(List* shelf);
int popRight(List* shelf);


int main()
{
    List *shelf = create();

    int N;
    int **A = (int **)malloc(1000*sizeof(int *));

    scanf("%d", &N);

    for (int i = 0; i< N; i++)
    {
        A[i] = (int *)malloc(2*sizeof(int));
        int pos, n;
        scanf("%d %d", &pos, &n);

        A[i][0] = pos;
        A[i][1] = n;
    }

    for (int i = 0; i < N; i++)
    {
        int out;
        if (A[i][0] == 1)
                insertSt(shelf, A[i][1]);
        else if (A[i][0] == 2)
                insertEnd(shelf, A[i][1]);
        else if(A[i][0] == 3)
        {
            out = popLeft(shelf);
            printf("%d", out);
        }
        else if (A[i][0] == 4)
        {
            out = popRight(shelf);
            printf("%d", out);
        }
    }
    return  0;
}


List *create()
{
    List *tmp = malloc(sizeof(struct List));
    tmp->size = 0;
    tmp->first = tmp->last = NULL;

    return tmp;
}


void insertSt(List *shelf, int n)
{
    Node *tmp = malloc(sizeof(Node));

    tmp->num = n;
    tmp->prev = NULL;
    tmp->next = shelf->first;

    if(shelf->first)
        shelf->first->prev = tmp;
    else
        shelf->last = tmp;
    shelf->first = tmp;

    shelf->size ++;
}


void insertEnd(List *shelf, int n)
{
    Node *tmp = malloc(sizeof(Node));
    tmp->num = n;
    tmp->prev = shelf->last;
    tmp->next = NULL;

    if(shelf->last)
        shelf->last->next = tmp;
    else
        shelf->first = tmp;
    shelf->last = tmp;

    shelf->size ++;
}


int popLeft(List* L)
{
    Node *tmp = malloc(sizeof(Node));
    int val;

    val = L->first->num;
    tmp = L->first;

    L->first = L->first->next;

    if(L->first)
        L->first->prev = NULL;
    else
        L->last = NULL;

    free(tmp);
    L->size --;

    return val;
}


int popRight(List* L)
{
    Node *tmp = malloc(sizeof(Node));
    int val;

    val = L->last->num;
    tmp = L->last;

    L->last = L->last->prev;

    if(L->last)
        L->last->next = NULL;
    else
        L->first = NULL;

    free(tmp);
    L->size --;

    return val;
}