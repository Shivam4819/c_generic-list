#include<iostream>
using namespace std;
template<typename T>
class Generic
{
    private:
       struct node{
           T data;
            struct node *next;
           }*start,*temp, *newnode, *temp1;
       int num1,num2,n,i;
       T x;
       node *a[4];
    public:
       Generic();
       int accept();
       void display();
       void find();
       
};
template<typename T>
Generic<T>::Generic(){
    start=NULL;
}
template<typename T>
int Generic<T>::accept(){
cout<<"enter the no of nodes"<<endl;
cin>>n;
for(i=0;i<n;i++){
 cout<<"enter the data"<<endl;
 cin>>x;
    if(start==NULL){
       start=new node;
       start->data=x;
       start->next=NULL;
       
       
     }
     else{
       temp=start;
       while(temp->next!=NULL)
       {
       temp=temp->next;
       }
       newnode=new node;
       newnode->data=x;
       newnode->next=NULL;      
       temp->next=newnode;
       
       }       
     }
     return 0;
}
template<typename T>
void Generic<T>::display()
{
temp=start;
cout<<"the element are->";
while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
       }
       cout<<endl; 
}


int main(){
    Generic<int> p;
    cout<<"int data-"<<endl;
    p.accept();
    p.display();
    Generic<char> q;
    cout<<"char data-"<<endl;
    q.accept();
    q.display();
}