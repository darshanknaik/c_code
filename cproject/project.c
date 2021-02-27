#include<stdio.h>


#include<conio.h>

#include<string.h>
struct cricket
{
 char nm[15];
 char tnm[10];
 int btavg;
};

void main()
{
    struct cricket player[100];
    int i,n;
    char ch,team[10];

    printf("how many player\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n INPUT THE NAME OF PLAYER %d:",i+1);
      scanf("%s",player[i].nm);
        printf("\n INPUT THE TEAM NAME OF PLAYER %d:",i+1);
      scanf("%s",player[i].tnm);
           printf("\n INPUT THE BATTING AVERAGE OF PLAYER %d:",i+1);
      scanf("%d",&player[i].btavg);

    }

    printf("------------------------------------------------\n");
    printf(" PALAYER'S NAME      COUNTRY    BATTING AVERAGE \n");
    printf("------------------------------------------------\n");
    for(i=0; i<=n; i++)
printf("  %-20s  %-20s%d\n",player[i].nm,
       player[i].tnm,player[i].btavg);
       read:
           printf("\n\nINPUT FOR WHICH TEAM YOU WANT TO LIST : ");
           scanf("%s",team);


           printf("                   is                     \n",team);
           printf("------------------------------------------------\n");
           printf(" PALAYER'S NAME      COUNTRY    BATTING AVERAGE \n");
           printf("------------------------------------------------\n");


               for(i=0; i<n;i++)
               if (strcmp(team,player[i].tnm)==0)
               printf("%-20s%d\n",player[i].nm,player[i].btavg);

               printf("\n\n DO YOU WANT TO LIST ANY OTHER TEAM ? (Y/N): ");
               ch = getch();
               if (ch =='Y'||ch =='y');
               goto read;
               getch();

}
