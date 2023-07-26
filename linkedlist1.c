#include<stdio.h>
#include<stdlib.h>
struct stud
{
    int data;
    struct stud *next; 
};


int main(){
    struct stud *one,*head,*two, *start,*end,*mid;
    one=malloc(sizeof(struct stud));
    two=malloc(sizeof(struct stud));
    start=malloc(sizeof(struct stud));
    end=malloc(sizeof(struct stud));
    mid=malloc(sizeof(struct stud));
    scanf("%d",&one->data);
    scanf("%d",&two->data);
    head=one;
    one->next=two;
    two->next=NULL;
    printf("\n%d\t",one->data);
    printf("%d\t",two->data);
    printf("\nenter data at the begining:");
    scanf("%d",&start->data);
    printf("enter data at end:");
    scanf("%d",&end->data);
    printf("data in between:");
    scanf("%d",&mid->data);
    
    head=start;
    start->next=one;
    one->next=mid;
    mid->next=two;
    two->next=end;
    end->next=NULL;
    // printf("%d\t",start->data);
    // printf("%d\t",one->data);
    // printf("%d\n",two->data);
    // printf("head data :%d\n",head->data);
    printf("from while\n");
    while(start!=0)
    {
        printf("%d\t",start->data);
        start=start->next;
    }
     return 0;
}