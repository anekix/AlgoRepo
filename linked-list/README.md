#include<iostream>
class Node{
    
    public:
        int data;
        Node* next;
} *head , *tail;
    
    
Node* create_node( int d){
    
    Node *tmp = new Node();
    tmp->data = d;
    tmp->next = NULL;
    return tmp;
    
}

void traverse( Node* s){
    
    if (s == NULL)
        std::cout<<"link list empty";
    else{
            while(s != NULL){
                std::cout<< s->data << "<<";
                s = s->next;
        }
        
    }
    
}

void insert_start( Node* n){
    
    if (head == NULL){
        head = n;
        tail = n;
    }
    else{
        
        Node* tmp_node = head;
        head = n;
        n->next = tmp_node;
    }
    
}

void insert_end( Node* n){
    if (head == NULL){
        head = n;
        tail = n;
        
    }
    else{
        
        Node* temp_node = tail;
        tail = n;
        temp_node->next = n;
    }
    
}

void remove_front(){
    if(head == NULL){
        std::cout<<"list is empty!" ;  
    }
    else{
        Node* temp_node = NULL;
        temp_node = head;
        head = head->next;
        delete temp_node;
        
    }
}

    



int main(){
 Node* node = NULL;
 head = NULL;
 tail = NULL;
 
 node = create_node(3);
 insert_start(node);
 
 node = create_node(9);
 insert_start(node);
 
 node = create_node(7);
 insert_start(node);
 
 
 node = create_node(10);
 insert_end(node);
 
 node = create_node(20);
 insert_end(node);
 
 node = create_node(30);
 insert_end(node);
 
 traverse(head);
 remove_front();
 std::cout<<"\n";
 traverse(head);
 

 
 return 0;
    
}
