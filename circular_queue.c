#include<stdio.h>
#define maxsize 10
int cq[maxsize], rear =-1, front = -1;
void delet();
void insert();
void display();



int main(){
    int choice;
    while(1){
        printf("\n\n1.insert \n2.delete\n3.display\n4.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert();
                    break;
            case 2: delet();
                    break;
            case 3: display();
                    break;
            case 4: return 0;
            default: printf("invalid choice\n");
        }
    }

}

void insert(){

    int n;
    if((rear +1) % maxsize == front ){ /// to aray is til 0 to9 9+1=10%10 = 0 == front 0 true
        printf("\n\nqueue overflowed\n");     //0 == 0 overflowed
    }
    else{
        printf("enter the element for insert ");
        scanf("%d",&n);

        if(rear== -1  && front == -1){  //if queue is empty before array index -1 ,empty
            rear =0;      // if empty then rear ==0 ,front ==0
            front =0;

        }
        else{                           //to reset que and increament
            rear = (rear +1) % maxsize;   // rear=0 0+1=1%10=1     // rear=9 9+1=10, 10%10=0 reset
            
        }
        cq[rear] = n;                 //store ele at 1 index  // store again at 0 in loop
printf("inserted element is %d",n);
    }
}

void delet(){
int n;

    if(rear == -1 && front == -1){      // both are -1 then empty
        printf("\n\nQUEUE is empty");

    }
    else{
        n= cq[front]; // not empty, front index is at place asssign that place value to n
        if(front == rear){  //if both are equal mean value are delete or front is shifted till rear value,  
// also we delelte  of shift front index till the rear value means all element delelted and front index == rear value then reset to -1 both
            front= -1;    // if all variable are delelte the reset array back to -1
            rear = -1;

        }
        else           //array is not empty ,all element are not delelted then delelte value of at front index or front value shift
        front = (front +1) % maxsize; //  e.g= front =4 (4+1)%10= 5  shift front 4 to 5
        printf("\ndelete ELELMENT %d",n);  // because the queue is fifo (entered first will be delelted first)
        
    }
}
void display(){
    int i;
if(rear == -1 && front == -1 ){
    printf("\n\nqueue is empty ");

}
else
{
    
printf("Element in Queue ");
for (i = front; i != rear; (i= (i+1) % maxsize)){   // rear value is elements present last index
    printf("front valyueis %d",front);
    printf("%5d",cq[i]);

}
printf("%5d",cq[i]); // to print last element of array

}

}