#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n* l;
    struct n* rt;
};

void inorder(struct n* r){
    if(r == NULL) return;
    inorder(r->l);
    printf("%d ->", r->d);
    inorder(r->rt);
}

void preorder(struct n* r){
    if(r == NULL) return;
    printf("%d ->", r->d);
    preorder(r->l);
    preorder(r->rt);
}

void postorder(struct n* r) {
    if(r == NULL) return;
    postorder(r->l);
    postorder(r->rt);
    printf("%d ->", r->d);
}


struct n* createNode(v){
    struct n* newNode = malloc(sizeof(struct n));
    newNode->d = v;
    newNode->l = NULL;
    newNode->rt = NULL;

    return newNode;
}

struct n* insertLeft(struct n *r, int v) {
    r->l = createNode(v);
    return r->l;
} 


struct node* insertRight(struct n *r, int v){
    r->rt = createNode(v);
    return r->rt;
}


int main(){
    struct n* r = createNode(3);
    insertLeft(r, 7);
    insertRight(r, 6);
    
    insertLeft(r->l, 9);
    insertRight(r->l, 2);
    
    printf("Preorder: \n");
    preorder(r);

    printf("\nInorder: \n");
    inorder(r);

    printf("\nPostorder: \n");
    postorder(r);
}