#include<stdio.h>
int rear = -1, front = 0;
int isempty();
int isfull();
void enqueue();
void dequeue();
void display();
int check();

#define MAXSIZE 5
int queue [MAXSIZE];
int main(){
    do {
        printf("Input following options to be perfomed in Queue:\n");
        printf("\n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit \n");
        int choice;
        scanf("%d", & choice);
        switch(choice){
        case 1:
        int data;
        printf("\n Store data in Queue:");
        scanf("%d", & data);
        break;
        
        case 2:
        dequeue();
        break;

        case 3:
        display();
        break;

        case4:
        printf("Exiting.\n");
        break;
        
        default:
        printf("Please enter valid choice! \n");
        break;
        }
    }while (check());
    return 0;
}

int isempty(){
    if (rear == -1) { return 1;}
    else { return 0;}}
    int isfull(){
        if (rear == MAXSIZE-1) {return 1}
        else { return 0;}}
        void enqueue (int data){
            if(isfull ()){ printf("Queue is full.");
            else { rear++;
            queue [rear]= data;}
            }
        void dequeue(){
            int data;
            if (is empty()){ printf("Queue is empty.");}
            else{ data = queue [front];
            front++;}
            if (front>rear){
                front = 0;
                rear = -1;
            }
            printf("Dequeued element = %d \n", data);
            }
        }
        void display (){
            if (isempty())
            printf("Queue is empty.\n");
            else
            for (int i = front; i<=rear; i++)
            printf("%d \n", queue[i]);
        }
        

        int check(){
            char try;
            printf("\n Modify stack ? (Yes = Y) \ n");
            scanf("%c", & try);
            if (try =='y')
            return 1;
            else
            printg("\n Exiting...");
            return 0;
        }