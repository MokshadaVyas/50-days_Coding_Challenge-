#include<iostream>
using namespace std;
struct array
{
    int *a;
    int length;
    int size;
};
void Display(struct array arr)
{
    cout<<"Elements are: "<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<" ";
    }
}
void Append(struct array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->a[arr->length]=x;
        arr->length++;  
    }
}

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

}
int Delete(struct array *arr,int index)
{
    int x=0;
    if(index>=0 && index<=arr->length-1)
    {
        x=arr->a[index];
            for(int i=index;i<arr->length-1;i++)
            arr->a[i]=arr->a[i+1];
            arr->length--;
            return x;
    }
    return 0;
}
int LinearSearch(struct array arr,int key)
{
    for(int i=0;i<arr.length;i++)
    {
        if(key==arr.a[i])
        return i;
    }
    return -1;
}
int BinarySearch(struct array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.a[mid])
            return mid;
        else if(key>=arr.a[mid])
            l=mid+1;
            else
            h=mid-1;

    }
    return -1;

}

int GetValue(struct array arr,int index)
{
    if(index>=0 && index<arr.length)
        return arr.a[index];
        else
        return -1;
}
void SetValue(struct array *arr,int index,int x)
{
    if(index>=0 && index<arr->length)
    arr->a[index]=x;
}
int MaxValue(struct array arr)
{
    int max;
    max=arr.a[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.a[i]>max)
        max=arr.a[i];
    }
    return max;
}
int MinValue(struct array arr)
{
    int min;
    min=arr.a[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.a[i]<min)
        min=arr.a[i];
    }
    return min;
}
int Sum(struct array arr)
{
    int s=0;
    for(int i=0;i<arr.length;i++)
    {
        s+=arr.a[i];
        return s;
    }
}

float Avg(struct array arr)
{
    return (float)Sum(arr)/arr.length;
}

void Reverse(struct array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->a[i],&arr->a[j]);
        }
}


int main()
{
    struct array arr;
    int ch,index,x,key;
    cout<<"Enter the size of an array: ";
    cin>>arr.size;
    arr.a=new int(arr.size);

    cout<<"Menu:-"<<endl;
    cout<<"1.Delete"<<endl;
    cout<<"2.Search"<<endl;
    cout<<"3.Sum"<<endl;
    cout<<"4.Display"<<endl;
    cout<<"5.exit"<<endl;

    cout<<"Enter Your Choice: "<<endl;
    cin>>ch;
    do{
    switch(ch)
    {
        case 1:cout<<"enter index:";
                cin>>index;
                x=Delete(&arr,index);
                cout<<"Deleted element is :"<<x<<endl;
                break;
        case 2:cout<<"enter element for search:";
                cin>>key;
                index=LinearSearch(arr,key);
                cout<<"index is :"<<index<<endl;
                break;
        case 3:cout<<"sum is: "<<Sum(arr);
                break;
        case 4:Display(arr);
    }
    }while(ch<6);
    return 0;
}