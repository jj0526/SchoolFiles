struct node
{
    int data;
    struct node*next;
};
struct single_list
{
    struct node*head;
    struct node*current;
    struct node*previous;
};

#include <stdlib.h>

struct single_list* make_list();

struct node* make_node(int data, struct node*next);

int go_to_index(struct single_list* target, unsigned int index);

int insert(struct single_list* target, int data); // inserting data in front of the current data

int append(struct single_list* target, int data); // inserting data right after the current data

int print_list(struct single_list* target);

int delete_list(struct single_list* target);

int delete_current_node(struct single_list* target);

int return_current_data(struct single_list* target, int *issuccess);

int search_data(struct single_list* target, int data);

struct node* make_node(int data, struct node*next){
    struct node* returned_node = (struct node*)malloc(sizeof(struct node));
    returned_node -> data=data;
    returned_node -> next=next;

    return returned_node;
}

struct single_list* make_list(){
    struct single_list* returned_value = (struct single_list*)malloc(sizeof(struct single_list));
    returned_value -> head = NULL;
    returned_value -> current = NULL;
    returned_value -> previous = NULL;

    return returned_value;

    /*struct node*head;
    struct node*current;
    struct node*previous;*/
}

int go_to_index(struct single_list* target, unsigned int index){
    if (target == NULL){
        return 0;
    }
    if (target->head == NULL){
        return 0;
    }

    target -> current = target -> head;
    target -> previous = NULL;

    for (int i = 0; i<index; i++){
        if (target -> current -> next == NULL){
            return 0;
        }
        target -> previous = target -> current;
        target -> current = target -> current -> next;
    }
    return 1;
}
// inserting data in front of the current data
int insert(struct single_list* target, int data){
    if (target == NULL){
        return 0;
    }
    struct node*temp_node = make_node(data, target -> current);
    if (target->current == target->head){
        target -> head = temp_node;
    }
    else{
        target -> previous -> next = temp_node;
    }
    target -> current = temp_node;

    return 1;
}
// inserting data right after the current data
int append(struct single_list* target, int data){
    if (target == NULL){
        return 0;
    }
    struct node*temp_node;
    if (target -> current != NULL ){
        temp_node = make_node(data, target -> current -> next);
    }
    else{
        temp_node = make_node(data, NULL);
        target -> head = temp_node;
    }
    target -> previous = target -> current;
    target -> current = temp_node;
    
    return 1;
}

int print_list(struct single_list* target){
    if (target == NULL){
        return 0;
    }
    if (target -> head == NULL){
        printf("This list is empty\n");
        return 1;
    }
    target -> current = target -> head;
    target -> previous = NULL;
    while (target -> current != NULL){
        printf("%d\t", target -> current -> data);
        target -> previous = target -> current;
        target -> current = target -> current -> next;
    }
    printf("\n");
    target -> current = target -> head;
    target -> previous = NULL;

    return 1;

}

int delete_list(struct single_list* target){
    if (target == NULL){
        return 0;
    }
    if (target -> head == NULL){
        printf("This list is empty already\n");
        return 1;
    }
    target -> current = target -> head;
    target -> previous = NULL;

    while (target -> current != NULL){
        
        target -> previous = target -> current;
        target -> current = target -> current -> next;
        free(target -> previous);
    }

    target -> previous = NULL;
    target -> head = NULL;
    return 1;

}

int delete_current_node(struct single_list* target){
    if (target == NULL){
        return 0;
    }
    if (target -> current == NULL){
        return 0;
    }
    struct node*temp = target -> current;
    if ( target -> previous == NULL){
        target -> head = target -> head -> next;
    }
    else{
        target -> previous -> next = target -> current -> next;
    }
    target -> current = target -> current -> next;

    if ((target -> current == NULL)&&(target -> head != NULL)){
        target -> previous = NULL;
        target -> current = target -> head;
    }
    free (temp);
    
    return 1;
}

int return_current_data(struct single_list* target, int *issuccess){
    if (target == NULL){
        *issuccess = 0;
        return 0;
    }
    
    *issuccess = 1;
    if (target -> current != NULL){
        return target -> current -> data;
    }
    else{
        *issuccess = 0;
        return 0;
    }
}

int search_data(struct single_list* target, int data){
    if (target == NULL){
        return 0;
    }
    if (target -> head == NULL){
        return 0;
    }
    target -> current = target -> head;
    target -> previous = NULL;

    while (target -> current != data){
        target -> previous = target -> current;
        target -> current = target -> current -> next; 
        if (target -> current == NULL){
            target -> current = target -> head;
            target -> previous = NULL;
            return 0;
        }
    }
    return 1;

}

int main(){
    return 0;
}