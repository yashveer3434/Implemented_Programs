#include<iostream>
#include<stdlib.h>
using namespace std;
struct able
{int abs;
int st;
int ase;
int cd;
int ts;};
struct baker
{int bbs;
int st2;
int bse;
int cd2;
int ts2;};
int main()
{
int n;
cout<<"Enter number of simulation you want:\n";
cin>>n;
able a[n];
baker b[n];
int iat[n],at[n],i,j,k,min,tta[n],ttb[n],r,l;                                                   /*all variables are defined here as int or float*/
float s,avgsta,avgstb,avgwt,tt;
j=-1;
a[-1].ase=0;                                                                                      /*initializing the variables with 0 that are needed*/
b[-1].bse=0;
k=-1;
s=0;
for(i=0;i<n;i++)                                                                                  /*this loop generates the interarrival time randomly*/
{if(i==0)
{iat[i]=0;}
else
{do
{iat[i]=rand()%5;}
while(iat[i]<1);}
}
for(i=0;i<n;i++)                                                                                 /*this loop generates the arrival time using interarrival time genrated previously*/
{if(i==0)
{at[i]=0;}
else
{at[i]=iat[i]+at[i-1];}}
for(i=0;i<n;i++)
{cout<<iat[i]<<"\t";}
cout<<"\n";
for(i=0;i<n;i++)
{cout<<at[i]<<"\t";}
cout<<"\n";
for(i=0;i<n;i++)                                                                                 /*main loop begins here, the number of simluation is the time which loop runs for*/
{if(at[i]>=a[j].ase)                                                                               /*if arrival time is less then that of able service ending time, then able will serve*/
{j=j+1;                                                                                          /*counter for able's loop*/
cout<<"Able is serving\n";
a[j].abs=at[i];                                                                                    /*service begins at the arrival time*/
cout<<"Service begin at:"<<a[j].abs<<"\t";
r=rand()%100;                                                                                    /*service time is genrated with specific probabilities*/
if(r<21)
{a[j].st=2;}
else if(r<51)
{a[j].st=3;}
else if(r<81)
{a[j].st=4;}
else
{a[j].st=5;}
cout<<"Service time:"<<a[j].st<<"\t";
a[j].ase=a[j].abs+a[j].st;                                                                             /*service end equals time at which able begins service + service time*/
cout<<"Service end at:"<<a[j].ase<<"\t";
a[j].cd=a[j].abs-at[i];                                                                              /*waiting time is the difference of time at which service begin and arrival time*/
cout<<"Waiting time is:"<<a[j].cd<<"\t";
a[j].ts=a[j].st+a[j].cd;                                                                               /*time is system is the sum of service time + waiting time*/
cout<<"Time in system:"<<a[j].ts<<"\n";
}
else if(at[i]>=b[k].bse)                                                                           /*if arrival time is less then that of baker service ending time, then baker will serve*/
{k=k+1;                                                                                          /*counter for baker's loop*/
cout<<"Baker is serving\n";
b[k].bbs=at[i];                                                                                    /*service begins at the arrival time*/
cout<<"Service begin at:"<<b[k].bbs<<"\t";
r=rand()%100;                                                                                     /*service time is genrated with specific probabilities*/
if(r<21)
{b[k].st2=4;}
else if(r<51)
{b[k].st2=5;}
else if(r<81)
{b[k].st2=6;}
else
{b[k].st2=7;}
cout<<"Service time:"<<b[k].st2<<"\t";
b[k].bse=b[k].bbs+b[k].st2;                                                                              /*service end equals time at which baker begins service + service time*/
cout<<"Service end at:"<<b[k].bse<<"\t";
b[k].cd2=b[k].bbs-at[i];                                                                               /*waiting time is the difference of time at which service begin and arrival time*/
cout<<"Waiting time is:"<<b[k].cd2<<"\t";
b[k].ts2=b[k].st2+b[k].cd2;                                                                                 /*time is system is the sum of service time + waiting time*/
cout<<"Time in system:"<<b[k].ts2<<"\n";

}
else                                                                      /*if both cases fails then both are busy,so user will be served by the server which finishes latest work fast*/
{min=0;                                                                                            /* minimum of able service ending and baker service ending is been calculated*/                                   
min=a[j].ase;
if(min>b[k].bse)
{min=b[k].bse;}
if(min==a[j].ase)                                                                                   /*if minimum equals able service ending then able will serve*/
{j=j+1;                                                                                             /*counter for able's loop*/
cout<<"Able is serving\n";
a[j].abs=a[j-1].ase;                                                                                /*service will begin at time when able completed its last job*/ 
cout<<"Service begin at:"<<a[j].abs<<"\t";
r=rand()%100;                                                                                       /*service time is genrated with specific probabilities*/
if(r<21)
{a[j].st=2;}
else if(r<51)
{a[j].st=3;}
else if(r<81)
{a[j].st=4;}
else
{a[j].st=5;}
cout<<"Service time:"<<a[j].st<<"\t";
a[j].ase=a[j].abs+a[j].st;                                                                          /*service end equals time at which able begins service + service time*/
cout<<"Service end at:"<<a[j].ase<<"\t";
a[j].cd=a[j].abs-at[i];                                                                             /*waiting time is the difference of time at which service begin and arrival time*/
cout<<"Waiting time is:"<<a[j].cd<<"\t";
a[j].ts=a[j].st+a[j].cd;                                                                            /*time is system is the sum of service time + waiting time*/
cout<<"Time in system:"<<a[j].ts<<"\n";
}
if(min==b[k].bse)                                                                                   /*if minimum equals baker service ending*/
{k=k+1;                                                                                             /*counter for baker's loop*/
cout<<"Baker is serving\n";
b[k].bbs=b[k-1].bse;                                                                                /*servive begins at time when baker finished its last job*/
cout<<"Service begin at:"<<b[k].bbs<<"\t";
r=rand()%100;                                                                                       /*service time is genrated with specific probabilities*/
if(r<21)
{b[k].st2=4;}
else if(r<51)
{b[k].st2=5;}
else if(r<81)
{b[k].st2=6;}
else
{b[k].st2=7;}
cout<<"Service time:"<<b[k].st2<<"\t";
b[k].bse=b[k].bbs+b[k].st2;                                                                         /*service end equals time at which baker begins service + service time*/
cout<<"Service end at:"<<b[k].bse<<"\t";
b[k].cd2=b[k].bbs-at[i];                                                                            /*waiting time is the difference of time at which service begin and arrival time*/
cout<<"Waiting time is:"<<b[k].cd2<<"\t";
b[k].ts2=b[k].st2+b[k].cd2;                                                                         /*time is system is the sum of service time + waiting time*/
cout<<"Time in system:"<<b[k].ts2<<"\n";}}}
cout<<"Total number of User served by Able:"<<j+1<<"\n";                                            /*display counter of able's loop to display number user served by able*/
cout<<"Total number of User served by Baker:"<<k+1<<"\n";                                           /*display counter of baker's loop to display number user served by baker*/
for(l=0;l<=j;l++)
{tta[l]=a[l].ase-a[l].abs;                                                                          /*the differnce of all the able service end and able service begin is maintained*/
s+=tta[l];}                                                                                         /*added to a variable*/
avgsta=s/(j+1);                                                                                     /*avg service time equals to ratio total service time and number of user served*/
cout<<"Average service time of Able is:"<<avgsta<<"secs";
cout<<"\n";
s=0;
for(l=0;l<=k;l++)
{ttb[l]=b[l].bse-b[l].bbs;                                                                          /*the differnce of all the baker service end and baker service begin is maintained*/
s+=ttb[l];}                                                                                         /*added to a variable*/
avgstb=s/(k+1);                                                                                     /*avg service time equals to ratio total service time and number of user served*/
cout<<"Average service time of Baker is:"<<avgstb<<"secs";
cout<<"\n";
s=0;
for(l=0;l<j;l++)
{s+=a[l].cd;}
for(l=0;l<k;l++)
{s+=b[l].cd2;}                                                                                         
avgwt=s/n;                                                                                          /*avg waiting time is ratio total waiting time and total number of user served*/
cout<<"The average waiting time is:"<<avgwt<<"secs";
cout<<"\n";
s=0;
for(l=0;l<j;l++)
{s+=a[l].ts;}
for(l=0;l<k;l++)
{s+=b[l].ts2;}
tt=s/n;
cout<<"The average turnover time is:"<<tt<<"secs";                                                  /*avg turnover time is ratio of total time in system and total number of user*/

return 0;}
