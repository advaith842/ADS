#include<stdio.h>
#include<stdlib.h>
struct node
{
int d;
int c;
struct node*p;
struct node*r;
struct node*l;
};
structnode*l;
};
struct node*root=NULL;
struct node*bst{structnode*trav,structnode*temp}
{
if(trav==NULL)
return temp;
if(temp->d<trav->d
{
trav->1=bit(trav->d
{
trav->1=bit(trav->1,temp);
trav->1_>p=trav;
}
elseif(temp->d>trav->d)
{
trav->r=trav;
}
void right rotate(structnode*temp)
{
structnode*left=temp->r;
temp-1=left->r;
if(temp->1)
temp->1->p=temp;
left->p=temp->