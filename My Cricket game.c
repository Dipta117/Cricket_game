#include<stdio.h>
#include<time.h>
#include<string.h>
#include<conio.h>
int main()
{

    srand(time(NULL));
    int toss=rand()%2;
    int  lose;


  int n,cric,run,r=0,overs,o=0,bat,ball;
  printf("Input overs:");
  scanf("%d",&overs);
  int t=overs,over=overs;
//toss
    printf("\nPress 0 for head or 1 for tail\n");
    scanf("%d",&n);
    if(toss==n)
        {printf("\nYou won the toss\n");
         printf("\nPress 0 for Batting or 1 for fielding\n");
         scanf("%d",&cric);}



//my batting
       if(cric==0)
        {  overs=overs*6;
            while(overs)
            {     bat=rand()%7;
                printf("\n\nTake run\n");
            scanf("%d",&run);


             if( run==5)
            printf("\nInvalid run");
            if(run>6 && run<0)
                printf("\nInvalid run");

             if(run==1 || run==2 || run==3)
              {
                  if(run==bat)
                    {printf("\nRUN OUT!!!");}
                  else
                  {printf("\n%d run is taken",run);
                  r+=run;
                                        printf("\n\nTotal run=%d",r);}
              }
              if(run==6)
              {
                  if(bat==run)
                    {printf("\nCaught out");}
                  else
                  {
                      printf("\nWOW!!\tUnbelievable.\t6 runs taken");
                      r+=run;
                      printf("\n\nTotal run=%d",r);
                  }
              }
              if(run==4)
              {
                  if(run!=bat)
                  {printf("\nNice shot!!\t4 runs taken by the batter");
              r+=run;
                                    printf("\nTotal run=%d",r);
              }
              else
                {printf("\nWhat a bowl!!\tBOLD OUT!!");}}

              if(run==0 )
              {  if(run!=bat)
                  {printf("\nOhh!!\tWhat a bowling.\tNo runs taken by the batter");
                                        printf("\n\nTotal run=%d",r);}
                  else
                  {
                      printf("\nBOLD OUT!!");

                  }
              }
overs--;
printf("\n%d balls left",overs);
            }

printf("\n\nYOUR TOTAL RUNS=%d\nTarget=%d",r,r+1);

//my bowling
 char ch[1];
t=t*6;

             while(t)
            {
                     ball=rand()%7;
                 printf("\n\nPress b to ball\n");
        scanf("%s",ch);
        bat=rand()%7;
            if(strcmp(ch,"b")==0)
            {



               if(bat==5 )
                {
                    if(ball==5)
                        {printf("\nOUT!!\twhat a bowling by the bowler");

                         printf("\n\nTotal runs=%d",o);}
                    else
                    {printf("\n0 runs taken by the opponent");
                     printf("\n\nTotal runs=%d",o);}
                }
              else  if(ball==bat)
                {
                    printf("\nOUT!!\twhat a bowling by the bowler");

                }
                else
                {
                    printf("\n%d runs taken by the opponent",bat);
                    o+=bat;
                    printf("\n\nTotal runs=%d",o);
                    if(o>r)
                    {
                        printf("\n\nBAD LUCK!!!\nYOU LOST THE MATCH");
                        getch();exit(0);
                    }

                }}

            t--;

            printf("\n%d balls left",t);}

            printf("\n\nOver finished\tOpponent's total run is=%d",o);
            if(o==r)
                printf("\nThe match is TIED");
            if(o<r)
                printf("\n\nCongratulations!!\nYOU WON THE MATCH!!");




        }









//opp batting
        if(cric==1)
        {    char ch[1];
t=t*6;

             while(t)
            {
                     ball=rand()%7;
                 printf("\n\nPress b to ball\n");
        scanf("%s",ch);
        bat=rand()%7;
            if(strcmp(ch,"b")==0)
            {



               if(bat==5 )
                {
                    if(ball==5)
                        {printf("\nOUT!!\twhat a bowling by the bowler");

                         printf("\n\nTotal runs=%d",o);}
                    else
                    {printf("\n0 runs taken by the opponent");
                     printf("\n\nTotal runs=%d",o);}
                }
              else  if(ball==bat)
                {
                    printf("\nOUT!!\twhat a bowling by the bowler");
                }
                else
                {
                    printf("\n%d runs taken by the opponent",bat);
                    o+=bat;
                    printf("\n\nTotal runs=%d",o);

                }}

            t--;

            printf("\n%d balls left",t);}

            printf("\n\nOver finished\tOpponent's total run is=%d\nTarget=%d",o,o+1);





        //opp bowling

          over=over*6;
            while(over)
            {     bat=rand()%7;
                printf("\n\nTake run\n");
            scanf("%d",&run);


             if( run==5)
            printf("\nInvalid run");
            if(run>6 && run<0)
                printf("\nInvalid run");

             if(run==1 || run==2 || run==3)
              {
                  if(run==bat)
                    {printf("\nRUN OUT!!!");}
                  else
                  {printf("\n%d runs taken",run);
                  r+=run;
                                        printf("\n\nTotal run=%d",r);

                                        if(r>o)
    {printf("\n\nCongratulations!!\tYOU WON THE MATCH!!");getch();exit(0);}
    }}

              if(run==6)
              {
                  if(bat==run)
                    {printf("\nCAUGHT OUT!!");}
                  else
                  {
                      printf("\nWOW!!\tUnbelievable.\t6 runs taken\n");
                      r+=run;
                      printf("\n\nTotal run=%d",r);

                      if(r>o)
    {printf("\n\nCongratulations!!\nYOU WON THE MATCH!!");getch();exit(0);}
                  }
              }
              if(run==4)
              {
                  if(run!=bat)
                  {printf("\nNice shot!!\t4 runs taken by the batter");
              r+=run;
                                    printf("\n\nTotal run=%d",r);

                                    if(r>o)
    {printf("\n\nCongratulations!!\nYOU WON THE MATCH!!");getch();exit(0);}
              }
              else
                {printf("\nWhat a bowl!!\tBOLD OUT!!");}}

              if(run==0 )
              {  if(run!=bat)
                  {printf("\nOhh!!\nWhat a bowling.\tNo runs taken by the batter");
                                        printf("\n\nTotal run=%d",r);}
                  else
                  {
                      printf("\nBOLD OUT!!");

                  }
              }
over--;
printf("\n%d balls left",over);
            }

printf("\n\nOver finished\tYOUR TOTAL RUN IS=%d",r);
 if(r==o)
    printf("The match is TIED");
else if(r<o)
    printf("\n\nBAD LUCK!!!\nYOU LOST THE MATCH");
        }





//loss toss

if(toss!=n)
{
    printf("\nYou lose the toss");

lose=rand()%2;
    if(lose==0)
        {
            printf("\nOpponent choose batting first");


            //opp batting
            char ch[1];
t=t*6;

             while(t)
            {
                     ball=rand()%7;
                 printf("\n\nPress b to ball\n");
        scanf("%s",ch);
        bat=rand()%7;
            if(strcmp(ch,"b")==0)
            {



               if(bat==5 )
                {
                    if(ball==5)
                        {printf("\nOUT!!\twhat a bowling by the bowler");
                         printf("\n\nTotal runs=%d\n",o);}
                    else
                    {printf("\n0 runs taken by the opponent");
                     printf("\n\nTotal runs=%d",o);}
                }
              else  if(ball==bat)
                {
                    printf("\nOUT!!\twhat a bowling by the bowler");
                }
                else
                {
                    printf("\n%d runs taken by the opponent",bat);
                    o+=bat;
                    printf("\n\nTotal runs=%d",o);

                }}

            t--;
            printf("\n%d balls left\n",t);}

            printf("\n\nOpponent's total runs=%d\nTarget=%d",o,o+1);





        //opp bowling

          over=over*6;
            while(over)
            {     bat=rand()%7;
                printf("\n\nTake run\n");
            scanf("%d",&run);


             if( run==5)
            printf("\nInvalid run");
            if(run>6 && run<0)
                printf("\nInvalid run");

             if(run==1 || run==2 || run==3)
              {
                  if(run==bat)
                    printf("\nRUN OUT!!!");
                  else
                  {printf("\n%d runs is taken",run);
                  r+=run;
                                        printf("\n\nTotal run=%d",r);

                                        if(r>o)
    {printf("\n\nCongratulations!!\nYOU WON THE MATCH!!");getch();exit(0);}
    }}

              if(run==6)
              {
                  if(bat==run)
                    printf("\nCAUGHT OUT!!!");
                  else
                  {
                      printf("\nWOW!!\tUnbelievable.\t6 runs taken");
                      r+=run;
                      printf("\n\nTotal run=%d",r);

                      if(r>o)
    {printf("\n\nCongratulations!!\nYOU WON THE MATCH!!");getch();exit(0);}
                  }
              }
              if(run==4)
              {
                  if(run!=bat)
                  {printf("\nNice shot!!\t4 runs taken by the batter");
              r+=run;
                                    printf("\n\nTotal run=%d",r);

                                    if(r>o)
    {printf("\n\nCongratulations!!\nYOU WON THE MATCH!!");getch();exit(0);}
              }
              else
                printf("\nWhat a bowl!!\tBOLD OUT!!");}

              if(run==0 )
              {  if(run!=bat)
                  {printf("\nOhh!!\tWhat a bowling.\tNo runs taken by the batter");
                                        printf("\n\nTotal run=%d",r);}
                  else
                  {
                      printf("\nBOLD OUT!!");
                  }
              }
over--;
printf("\n%d balls left",over);
            }

printf("\n\nOver finished.\tYOUR TOTAL RUN IS=%d",r);
 if(r==o)
    printf("\nThe match is TIED");
else if(r<o)
    printf("\n\nBAD LUCK!!!\nYOU LOST THE MATCH");
        }



    if(lose==1)
        {printf("\nOpponent choose fielding first");

        //my batting
         overs=overs*6;
            while(overs)
            {     bat=rand()%7;
                printf("\n\nTake run\n");
            scanf("%d",&run);


             if( run==5)
            printf("\nInvalid run");
            if(run>6 && run<0)
                printf("\nInvalid run");

             if(run==1 || run==2 || run==3)
              {
                  if(run==bat)
                    printf("\nRUN OUT!!!");
                  else
                  {printf("\n%d runs taken",run);
                  r+=run;
                                        printf("\n\nTotal run=%d",r);}
              }
              if(run==6)
              {
                  if(bat==run)
                    printf("\nCaught out\n");
                  else
                  {
                      printf("\nWOW!!\tUnbelievable.\t6 runs taken");
                      r+=run;
                      printf("\n\nTotal run=%d",r);
                  }
              }
              if(run==4)
              {
                  if(run!=bat)
                  {printf("\nNice shot!!\t4 runs taken by the batter");
              r+=run;
                                    printf("\n\nTotal run=%d",r);
              }
              else
                printf("\nWhat a bowl!!\tBOLD OUT!!");}

              if(run==0 )
              {  if(run!=bat)
                  {printf("\nOhh!!\tWhat a bowling.\tNo runs taken by the batter");
                                        printf("\nTotal run=%d",r);}
                  else
                  {
                      printf("\nBOLD OUT!!");
                  }
              }
overs--;
printf("\n%d balls left",overs);
            }

printf("\n\nOver finished.\tYOUR TOTAL RUNS=%d\nTarget=%d",r,r+1);

//my bowling
 char ch[1];
t=t*6;

             while(t)
            {
                     ball=rand()%7;
                 printf("\n\nPress b to ball\n");
        scanf("%s",ch);
        bat=rand()%7;
            if(strcmp(ch,"b")==0)
            {



               if(bat==5 )
                {
                    if(ball==5)
                        {printf("\nOUT!!\twhat a bowling by the bowler");
                         printf("\n\nTotal runs=%d",o);}
                    else
                    {printf("\n0 runs taken by the opponent");
                     printf("\n\nTotal runs=%d",o);}
                }
              else  if(ball==bat)
                {
                    printf("\nOUT!!\twhat a bowling by the bowler");
                }
                else
                {
                    printf("\n%d runs taken by the opponent",bat);
                    o+=bat;
                    printf("\n\nTotal runs=%d",o);
                    if(o>r)
                    {
                        printf("\n\nBAD LUCK!!!\nYOU LOST THE MATCH");getch();
                        exit(0);
                    }

                }}

            t--;
            printf("\n%d balls left",t);}

            printf("\n\nOver finished\tOpponent's total run is=%d",o);
            if(o==r)
                printf("\nThe match is TIED");
            if(o<r)
                printf("\n\nCongratulations!!\nYOU WON THE MATCH!!");

        }

}

getch();
}




