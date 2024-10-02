//Polynomial addition

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int coef,expo;
    struct node *next;
};  typedef struct Node node;

node* createNode();
node* create_polynomial();
node* polynomial_sum(node *fx, node *gx);
void sort_polynomial(node *start);
void display_polynomial(node *start);

void main()
{
    node *f,*g,*s;

    //Creating two polynomials
    printf("\n Enter the first polynomial :");
    f=create_polynomial();
    printf("\n Enter the second polynomial :");
    g=create_polynomial();

    //Displaying two polynomials
    printf("\n The first polynomial is : f(x) = ");
    display_polynomial(f);
    printf("\n The second polynomial is : g(x) = ");
    display_polynomial(g);

    //Addition of two polynomials
    s=polynomial_sum(f , g);

    //Displaying the sum polynomial
    printf("\n The sum polynomial is : S(x) = ");
    display_polynomial(s);
}

//Function to create a node
node* createNode()
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->next=NULL;
    return(ptr);
}

//Function to create a polynomial
node* create_polynomial()
{
    node *start=NULL,*p,*q;
    q=start;
    int c,e;
    char choice;
    do
    {
        printf("\n Enter the coefficient :");
        scanf("%d",&c);
        printf("\n Enter the exponent :");
        scanf("%d",&e);
        p=createNode();
        p->coef=c;
        p->expo=e;
        if(q==NULL)
        {
            start=p;
            q=p;
        }
        else
        {
            q->next=p;
            q=q->next;
        }
        printf("\n Do you want to continue inputting new terms ? [Y/N]");
        scanf("%c",&choice);
    }while(choice=='y' || choice=='Y');
    sort_polynomial(start);
    return(start);
}

void sort_polynomial(node *start)
{
    node *p,*q,*r;
    r=start;
    while(r!=NULL)
    {
        p=start;
        while(p->next!=NULL)
        {
            q=p->next;
            if(p->expo < q->expo)
            {
                p->expo = p->expo + q->expo;        //Swapping p->expo and q->expo
                q->expo = p->expo - q->expo;
                p->expo = p->expo - q->expo;
            }
            p=p->next;
        }
        r=r->next;
    }
}

//Function to display the polynomial
void display_polynomial(node *start)
{
    node *ptr;
    ptr=start;

    printf(" %dx%d ",ptr->coef,ptr->expo);
    ptr=ptr->next;
    while(ptr!=NULL)
    {
        if(ptr->coef > 0)
            printf(" +%dx%d ",ptr->coef,ptr->expo);
        else
            printf(" %dx%d ",ptr->coef,ptr->expo);
        ptr=ptr->next;
    }
}

//function to add to polynomials
node* polynomial_sum(node *fx, node *gx)
{
    node *sum=NULL,*a,*p,*q,*r;
    p=fx;
    q=gx;
    while( p!=NULL && q!=NULL )
    {
        a=createNode();
        if(p->expo == q->expo)
        {
            a->coef = p->coef + q->coef;
            a->expo = p->expo;
            p=p->next;
            q=q->next;
        }
        else if(p->expo > q->expo)
        {
            a->coef = p->coef;
            a->expo = p->expo;
            p=p->next;
        }
        else
        {
            a->coef = q->coef;
            a->expo = q->expo;
            q=q->next;
        }
        r=sum;
        if(r==NULL)
        {
            sum=a;
            r=a;
        }
        else
        {
            r->next=a;
            r=r->next;
        }
    }
    return(sum);
}