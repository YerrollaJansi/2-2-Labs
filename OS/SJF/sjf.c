#include<stdio.h>
int main(){
    int n;
    printf("Enter number of process:");
    scanf("%d",&n);
    int bt[n],p[n],wt[n],tat[n],i,j,pos,temp;
    float tt=0,wat=0,Awat=0,Atat=0;
    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;           //contains process number
    }
 
    //sorting burst time in ascending order using selection sort
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0; //waiting time for first process will be zero
    for(i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
        wt[i+1]=tat[i];
    }
    printf("Processes  |  Burst time  |   Waiting time  |   Turn around time\n");
    for(i=0;i<n;i++){
        tt+=tat[i];
        wat+=wt[i];
       printf("p%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    Awat=wat/n;
    Atat=tt/n;
    printf("Average waiting time=%f\nAverage Turn around time=%f\n",Awat,Atat);
    
    return 0;
}
 



