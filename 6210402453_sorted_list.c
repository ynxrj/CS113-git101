#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

int add(node **head,int n){
    node *tmp1 = (struct node*)malloc(sizeof(struct node));
    tmp1->data = n;

    if (*head == NULL) {
            tmp1->next = *head;
            *head = tmp1;
        }
    else{
            node *tmp2 = *head;
            node *prev = NULL;
            while (1) {
                if (tmp2 == NULL || tmp2->data >= tmp1->data){
                    break;
    }
                prev = tmp2;
                tmp2 = tmp2->next; 
            }
            tmp1->next = tmp2;
            if (prev != NULL)
                prev->next = tmp1;
            else 
                *head = tmp1;

        }

        return 0;
}

void printList(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
int main(){
    int n;
    int i = 0;
    node *head = NULL;
    while(1){
        scanf("%d",&n);
        if (n != -1){
            add(&head,n);
        }
        else{
            break;
        }
    }
    printList(head);
    return 0;
}