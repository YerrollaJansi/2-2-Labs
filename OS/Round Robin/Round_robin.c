#include <stdio.h>
//#include<conio.h>
int main()
{    int n;
    printf("enter no.of process");
    scanf("%d",&n);
    int bt[10],wt[10],temp,t=0,tat[10],rem_bt[10],i,count=0,quantime_time;
    float wat=0,tt=0,Atat = 0,Awat = 0;
   /* printf("Enter  processes: ");
    for(i=0;i<n;i++){
        scanf("%d",&process[i]);
    }*/
    printf("Enter burst time of proceses: ");
    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
        rem_bt[i]=bt[i];
    }
     printf("Enter  quantum time: ");
      scanf("%d",&quantime_time);
      while(1){
          for(i=0,count=0;i<n;i++){
              temp=quantime_time;
              if(rem_bt[i]==0){
                count++;
                continue;
              }
             if(rem_bt[i]>quantime_time)
                rem_bt[i]=rem_bt[i]-quantime_time;
             else
                if(rem_bt[i]>=0){
                    temp=rem_bt[i];
                    rem_bt[i]=0;
                }
         t=t+temp;    //sq is temporary var
         tat[i]=t;
         }
    /*wt[0]=0;
    for(i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
        wt[i+1]=tat[i];
    }*/
        if(n==count)
            break;
      }
    printf("Processes  |  Burst time  |   Waiting time  |   Turn around time\n");
    for(i=0;i<n;i++){
        wt[i]=tat[i]-bt[i];
        tt+=tat[i];
        wat+=wt[i];
       printf("p%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    Awat=wat/n;
    Atat=tt/n;
    printf("Average waiting time=%f\nAverage Turn around time=%f\n",Awat,Atat);
    return 0;   
}

