#include<iostream>
using namespace std;
struct Arrayadt{
    int totalsize;
    int usedsize;
    int *ptr;
    Arrayadt(int tsize, int usize)
    {totalsize=tsize;
    usedsize=usize;
    ptr=(int*)malloc(tsize*sizeof(int));
    }
};
void show(struct Arrayadt* s)
{
    for(int i=0;i<(*s).usedsize;i++)
    {cout<<(*s).ptr[i]<<"\n";}
}

void setvalue(struct Arrayadt* s)
{
    for(int i=0;i<s->usedsize;i++)
    {cout<<"Enter The Value["<<i+1<<"]:";
    cin>>s->ptr[i];}
}

int main()
{   struct Arrayadt sample(100,2);
    cout<<&sample;
    setvalue(&sample);
    show(&sample);


    return 0;
}
