#include<stdio.h>
#define maxsize  10

int queue[maxsize];
int rear = -1, front=0;
void insert();
void delete();
void display();

int main(){
int choice;
do{
    printf("---------stack---------\n");
    printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");

    printf("------------------------\n");

    printf("enter the choice:");
    scanf("%d",&choice);

    switch(choice){

        case 1:
        insert();
        break;

        case 2:
        delete();
        break;

        case 3:
        display();
        break;

        default:
        printf("invalid choice\n");

    }
}while(choice !=4);

return 0;

}

void insert(){
    if(rear == maxsize -1){

        printf("queue is over flowed\n");

        int choice;
        printf("1. RESET whole QUEUE \n2.DELETE only one element \n3. NO\n enter your choice:");
        scanf("%d",&choice);
        (choice == 1)?  rear = -1,printf("the queue is reset\n") :(choice ==2)? rear = rear -1, printf("DELELTE last element in queue"):   printf("queue is overflowed.....\n unable to reset!\n");



    }
    else{

      
        int num;
        printf("enter the element");
        scanf("%d",&num);

        rear ++;
        queue[rear] = num;

    }
}

void delete(){
    if(front >rear){
        printf("QUEUE is empty\n");
         
    }
    else{
        int n;
        n = queue[front];
        printf("%d   element is delelted ",n);

        front++;   // as front value is 0 when ++ the array is shifted by 1 and we assume as delete
    }
} 

void display(){

    if(front > rear){
        printf("QUEUE is empty\n");

    }
    else{

        printf("elements in the QUEUE are:\n");
        for(int i=rear; i>=front; i--)
        {
            printf("%d\n",queue[i]);
        }

    }

}