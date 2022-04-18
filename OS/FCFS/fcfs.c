#include <stdio.h>

int main()
{    int n;
    printf("enter no.of rows");
    scanf("%d",&n);
    int process[n],wt[n], tat[n],bt[n],i;
    float wat=0,tt=0,Atat = 0,Awat = 0;
    printf("Enter  processes: ");
    for(i=0;i<n;i++){
        scanf("%d",&process[i]);
    }
    printf("Enter burst time of proceses: ");
    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
        wt[i+1]=tat[i];
    }
    printf("Processes  |  Burst time  |   Waiting time  |   Turn around time\n");
    for(i=0;i<n;i++){
        tt+=tat[i];
        wat+=wt[i];
       printf("%d\t\t%d\t\t%d\t\t%d\n",process[i],bt[i],wt[i],tat[i]);
    }
    Awat=wat/n;
    Atat=tt/n;
    printf("Average waiting time=%f\nAverage Turn around time=%f\n",Awat,Atat);
    
    return 0;
}

