//C03_b_Linked_List_Implementation_of_Queue
/* C Program to Implement Queue Data Structure using Linked List
http://www.sanfoundry.com/c-program-queue-using-linked-list/ */
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;
 
int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();
 
int count = 0;
 
void main()
{
    int no, ch, e;
 
    printf("\n 1 - Enque");
    printf("\n 2 - Deque");
    printf("\n 3 - Front element");
    printf("\n 4 - Empty");
    printf("\n 5 - Exit");
    printf("\n 6 - Display");
    printf("\n 7 - Queue size");
    create();
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            enq(no);
            break;
        case 2:
            deq();
            break;
        case 3:
            e = frontelement();
            if (e != 0)
                printf("Front element : %d", e);
            else
                printf("\n No front element in Queue as queue is empty");
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            queuesize();
            break;
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
 
/* Create an empty queue */
void create()
{
    front = rear = NULL;
}
 
/* Returns queue size */
void queuesize()
{
    printf("\n Queue size : %d", count);
}
 
/* Enqueing the queue */
void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
 
        rear = temp;
    }
    count++;
}
 
/* Displaying the queue elements */
void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}
 
/* Dequeing the queue */
void deq()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
 
/* Returns the front element of queue */
int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}
 
/* Display if queue is empty or not */
void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}
/* OUTPUT

1 - Enque
2 - Deque
3 - Front element
4 - Empty
5 - Exit
6 - Display
7 - Queue size
Enter choice : 1
Enter data : 14
 
Enter choice : 1
Enter data : 85
 
Enter choice : 1
Enter data : 38
 
Enter choice : 3
Front element : 14
Enter choice : 6
14 85 38
Enter choice : 7
 
Queue size : 3
Enter choice : 2
 
Dequed value : 14
Enter choice : 6
85 38
Enter choice : 7
 
Queue size : 2
Enter choice : 4
Queue not empty
Enter choice : 5 
*/
//https://gist.github.com/mycodeschool/7510222
/*Queue - Linked List implementation*/
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
// Two glboal variables to store address of front and rear nodes. 
struct Node* front = NULL;
struct Node* rear = NULL;
 
// To Enqueue an integer
void Enqueue(int x) {
    struct Node* temp = 
        (struct Node*)malloc(sizeof(struct Node));
    temp->data =x; 
    temp->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}
 
// To Dequeue an integer.
void Dequeue() {
    struct Node* temp = front;
    if(front == NULL) {
        printf("Queue is Empty\n");
        return;
    }
    if(front == rear) {
        front = rear = NULL;
    }
    else {
        front = front->next;
    }
    free(temp);
}
 
int Front() {
    if(front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    return front->data;
}
 
void Print() {
    struct Node* temp = front;
    while(temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
 
int main(){
    /* Drive code to test the implementation. */
    // Printing elements in Queue after each Enqueue or Dequeue 
    Enqueue(2); Print(); 
    Enqueue(4); Print();
    Enqueue(6); Print();
    Dequeue();  Print();
    Enqueue(8); Print();
}
*/