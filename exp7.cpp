#include<iostream>
using namespace std;

struct node
{
int data;
node* next;
};
node* head = NULL;
int main()
{
int ch, x;
cout<<"1 InsertBeg\n";
cout<<"2 InsertEnd\n";
cout<<"3 DeleteBeg\n";
cout<<"4 Display\n";
cout<<"5 Exit\n";

while(true)
{
cin>>ch;

switch(ch)
{
case 1:
{
cin>>x;
node* n = new node;
n->data = x;
n->next = head;
head = n;
break;
}

case 2:
{
cin>>x;
node* n = new node;
n->data = x;
n->next = NULL;
if(head==NULL)
{
head = n;
}
else
{
node* t = head;
while(t->next!=NULL)
t = t->next;
t->next = n;
}
break;
}
case 3:
{
if(head!=NULL)
{
node* t = head;
head = head->next;
delete t;
}
break;
}
case 4:
{
node* t = head;
while(t!=NULL)
{
cout<<t->data<<" ";
t = t->next;
}
cout<<endl;
break;
}
case 5:
return 0;
}
}
}
