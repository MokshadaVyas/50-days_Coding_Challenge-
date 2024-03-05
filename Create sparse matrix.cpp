#include<iostream>
using namespace std;
// Declare a structure name element
struct element
{
    int i;      /*for row index*/
    int j;      /*for column index*/
    int x;      /*for representing value*/
};
// Declare a structure name element
struct sparse
{
    int m;      /*representing number of rows */
    int n;      /*representing number of column */
    int num;    /*representing number of non-zero elements */
    struct element *ele;    /*Pointer to an array of 'element' structures */
};
// Function to create a sparse matrix
void create(struct sparse *s)
{
    cout<<"Enter dimension: "<<endl;    /*for dimension*/
    cin>>s->m>>s->n;    /*read that dimension*/
    cout<<"Enter number of non-zero elements: "<<endl;  /*for enter nonzero elements */
    cin>>s->num;    /*read non-zero elements*/

    s->ele=new element[s->num]; /*Dynamically created an array for non zero elements*/
    cout<<"enter all non-zero elements:"<<endl;
    for(int i=0;i<s->num;i++)   /*to read all elements*/
    {
        cin>>s->ele[i].i>>s->ele[i].j>>s->ele[i].x; /*Reads the row index, column index, and value of each non-zero element from user input*/
    }
}

void display(struct sparse s)
{
    int k=0;
    for(int i=0;i<s.m;i++)
    {
        for(int j=0;j<s.n;j++)
        {
            if(i==s.ele[k].i && j==s.ele[k].j)
            {
                cout<<s.ele[k++].x<<" ";
            }else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    struct sparse s;
    create(&s);
    display(s);
    return 0;
}
