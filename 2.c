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



struct n* createNode(v){
    struct n* newNode = malloc(sizeof(struct n));
    newNode->d = v;
    newNode->l = NULL;
    newNode->rt = NULL;

    return newNode;
}

struct n* insertL(struct n *r, int v) {
    r->l = createNode(v);
    return r->l;
} 


struct node* insertRt(struct n *r, int v){
    r->rt = createNode(v);
    return r->rt;
}


int main(){
    struct n* r = createNode(3);
    insertL(r, 7);
    insertRt(r, 6);
    
    insertL(r->l, 9);
    insertRt(r->l, 2);

    printf("\nInorder: \n");
    inorder(r);

}