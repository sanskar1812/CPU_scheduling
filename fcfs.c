#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,p[20],atat=0,awt=0;;
    float x55,x66;
    printf("Enter the no. of process\n");
    scanf("%d",&n);
    int p_id[20],at[20],bt[20],tat[20],wt[20];
    for(i=0;i<n;i++)
    {
        printf("==Enter the P-Id==\n");
        scanf("%d",& p_id[i]);
        printf("==Enter the arrival time==\n");
        scanf("%d",& at[i]);
        printf("==Enter the burst time==\n");
        scanf("%d",& bt[i]);
    }
    printf("\t\t===========OUTPUT===========\n");
    printf("\n==Printing Data Set==\n");
    printf("P_ID | AT  | BT  |\n");
    for(i=0;i<n;i++)
    {
        printf(" %d   |",p_id[i]);
        printf("%d    |",at[i]);
        printf("%d    |\n",bt[i]);
    }
    printf("\n NO TWO ARRIVAL TIME SHOULD BE SAME \n");
    for(i=0;i<n;i++)
    {
        p[i]=at[i];
    }
    for(i=1;i<=n-1;i++)
    {
        for(int j=0;j<=n-1-i;j++)
        {
            if (p[j]>p[j+1])
            {
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }            
        }      
    }
    int pr[20],et[20];
    int pr1=0,pr2=0,pr3=0,pr4=0;
    int x,count=0;
    //printf("0  %d",c2ount);
    for(int x1=0;x1<160;x1++)
          printf("-");
          printf("\n");
          printf("\t\t===========GANT CHART===========\n");
           for(int x1=0;x1<160;x1++)
          printf("-");
   printf("\n\n\n");
          for(int x1=0;x1<=n;x1++)
          printf("+------+");
          printf("\n");
          
    for (int i=0;i<n;i++)
      {
          if(count>=p[i])
            {
              x=0;
              while(p[i]!=at[x])
              {
                  x++;
              }
              count=count+bt[x];
              //printf("==%d==\n",i+1);
              printf("    %d   ",p_id[x]);
              pr[pr1++]=count;
              pr4=x;
              tat[x]=count-at[x];
              wt[x]=tat[x]-bt[x];
              //printf("%d  \n+",count);
             }
          else
            {
              printf("  IDLE   ");
              count++;
              pr[pr1++]=count;
              
              //printf(" %d\n",count);
              while(p[i]>count)
              {
                  printf(" IDLE ");
                  count++;
              }
              x=0;
              while(p[i]!=at[x])
              {
                  x++;
              }
              count=count+bt[x];
              printf("   %d   ",p_id[x]);
              pr[pr1++]=count;
              pr4=pr2;
              tat[x]=count-at[x];
              wt[x]=tat[x]-bt[x];
              
              //printf("%d \n",count);
          }
          }   
          printf("\n");
          for(int x1=0;x1<=n;x1++)
          printf("+------+");
          printf("\n");

        
          printf("0");
          for(int x1=0;x1<pr1;x1++)
          printf("\t%d",pr[x1]);
          printf("\n");
           for(int x1=0;x1<=n;x1++)
          printf("+-------+");
    printf("\n\n");
    for(int x1=0;x1<160;x1++)
          printf("-");
          printf("\n");
     

          printf(" \t\t===========Printing Complete Data Set====\n");
          for(int x1=0;x1<160;x1++)
          printf("-");
    printf("\n\n");
    printf("P_ID | AT  | BT  | TAT |  WT |\n");
    for(int x1=0;x1<160;x1++)
          printf("-");
          printf("\n");
    for(i=0;i<n;i++)
    {
        printf(" %d   |",p_id[i]);
        printf("%d    |",at[i]);
        printf("%d    |",bt[i]);
        printf("%d    |",tat[i]);
        atat+=tat[i];
        printf("%d    |\n",wt[i]);
        awt+=wt[i];
    }
    for(int x1=0;x1<160;x1++)
          printf("-");
          
          atat=(float)atat;
          //awt=(float)awt;
          //n=(float)n;
          x55=atat/(float)n;
          x66=(float)awt/(float)n;
          printf("The Average Waiting time is =====> %f\n",x55);
          printf("The Average Waiting time is =====> %f\n",x66);
    }