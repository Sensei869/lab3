#include<stdio.h>
int rear = -1, front = -1;
int isempty();
int isfull();
void enqueue();
void dequeue();
void display();
int check ();
#define MAXSIZE 5
int queue [MAXSIZE];
int main(){
    do{
        prinf("\n Input following options to be perfomed:");
        printf("\n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit \n");
        scanf("%d", & choice);
        switch (choice){
            case 1:
            prinf("Store data in Queue:");
            scanf("%d", &data);
            enqueue (data);
            break ;

            case2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("Exiting...\n");
            break;
        }
    } while (check());
    return 0;
}
int isempty(){
    if (rear == -1)
    return 1;
    else return 0;
}
int isfull (){
    if ( front == (rear +1) % MAXSIZE)
    return 1;
    else return 0;
}
void enqueue (int data){
    if (isfull())
    printf ("queue is full. \n");
} else {
    rear = (rear +1)% MAXSIZE;
    queue [rear] = data;
    printf(" Data enqueued. \n");
}
void Dequeue(){
    int data;
    if (isempty())
    printf("queue is empty. \n");
    else{
        data = queue[front];
        if (front == rear)
         front = rear = -1'
         else
         front = (front +1)% MAXSIZE;
    }
    printf("dequeue element is %d", data);
}

void display() {
    if (isempty())
    printf("Queue is empty. \n");
    else{
        while(front! = (rear +1)% MAXSIZE)
        {
            printf("%d \n", queue[front]);
            front= (front+1)% MAXSIZE;
        }
    }
}
int check(){
    char try;
    printf(" Modify stack? (Yes = Y)\n");
    scanf("%c", & try);
    if(try = "Y")
    return 1;
    else
    printf("\n Exiting...");
    return 0;
}
