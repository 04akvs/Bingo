#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void start_the_game()
{
   char ch1;
   int b[6]={1,2,3,4,5,6},c,d;
   int a1[5][5]={
                     23,  20,   2,  22,   1,
                     10,   6,  18,  12,  25,
                     24,   3,  11,  14,   7,
                      4,  16,   9,  21,  17,
                      5,  13,  19,   8,  15
                },
       a2[5][5]={
                      1,   3,   5,   7,   9,
                     11,  13,  15,  17,  19,
                     21,  23,  25,   2,   4,
                      6,   8,  10,  12,  14,
                     16,  18,  20,  22,  24

                },
      a3[5][5]={
                     21,   4,  11,  16,   1,
                     12,  18,  23,  17,  22,
                      3,   8,  13,   7,   2,
                      6,   9,   5,  24,  14,
                     15,  25,  20,  10,  19
               },
      a4[5][5]={
                      4,   1,  21,  18,  14,
                      2,   3,  22,  13,  15,
                     16,  17,  23,  19,  20,
                      9,  12,  24,   7,   8,
                     10,  11,  25,   6,   5
               },
      a5[5][5]={
                     24,  11, 21,   8,   2,
                      9,  18, 19,  17,   6,
                     13,   1,  5,   3,  15,
                      7,  16,  4,  22,  12,
                     23,  14, 10,  20,  25
               },
      a6[5][5]={
                      3,   8, 11,   5,   2,
                     19,  17, 13,  20,  10,
                      6,  22,  1,  24,  15,
                     12,   4, 16,  23,   7,
                      9,  14, 21,  18,  25 
               };
  
      cout<<"Choices for choosing the matrix:"<<'\n';
      cout<<'\n';
      for(int i=0;i<5;i++)
         {
            for(int j=0;j<5;j++)
            {
               if(a1[i][j]/10==0)
                cout<<0<<a1[i][j]<<" ";
               else
               {
                 cout<<a1[i][j]<<" ";
               }
            }
            cout << "\t\t";
            for(int j=0;j<5;j++)
            {
               if(a2[i][j]/10==0)
                cout<<0<<a2[i][j]<<" ";
               else
               {
                 cout<<a2[i][j]<<" ";
               }
            }
            cout << "\t\t";
            for(int j=0;j<5;j++)
            {
               if(a3[i][j]/10==0)
                cout<<0<<a3[i][j]<<" ";
               else
               {
                 cout<<a3[i][j]<<" ";
               }
            }
            cout << "\t\t";
            for(int j=0;j<5;j++)
            {
               if(a4[i][j]/10==0)
                cout<<0<<a4[i][j]<<" ";
               else
               {
                 cout<<a4[i][j]<<" ";
               }
            }
            cout << "\t\t";
            for(int j=0;j<5;j++)
            {
               if(a5[i][j]/10==0)
                cout<<0<<a5[i][j]<<" ";
               else
               {
                 cout<<a5[i][j]<<" ";
               }
            }
            cout << "\t\t";
            for(int j=0;j<5;j++)
            {
               if(a6[i][j]/10==0)
                cout<<0<<a6[i][j]<<" ";
               else
               {
                 cout<<a6[i][j]<<" ";
               }
            }
            cout << '\n';
         }
         cout<<'\n';
         cout<<"Player1 is requested to choose a matrix(1,2,3,4,5,6)"<<'\n';
         cin>>c;
         while(1)
         {
            if(c==1||c==2||c==3||c==4||c==5||c==6)
               break;
            else
            {
               cout<<"Player1 is requested to choose a matrix(1,2,3,4,5,6)"<<'\n';
               cin>>c;
            }
            
         }
         cout<<"Now choices avaliable for player2 to choose a matrix are:"<<'\n';
         for(int i=0;i<6;i++)
         {
            if(c!=b[i])
               cout<<b[i]<<" ";
         }
         cout<<'\n';
         cout<<"Player2 is requested to choose a matrix"<<'\n';
         cin>>d;
         while(1)
         {
           if(d==1||d==2||d==3||d==4||d==5||d==6)
              {
                 if(c==d)
                   {
                      cout<<"Player2 is requested to choose a matrix"<<'\n';
                      cin>>d;
                   }
                  else
                   break;
              }
           else
           {
                cout<<"Player2 is requested to choose a matrix"<<'\n';
                cin>>d;
           }
         }
         int f[5][5],e[5][5];
         if(c==1)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  f[i][j]=a1[i][j];
            }
         }
         else if(c==2)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  f[i][j]=a2[i][j];
            }
         }
         else if(c==3)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  f[i][j]=a3[i][j];
            }
         }
         else if(c==4)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  f[i][j]=a4[i][j];
            }
         }
         else if(c==5)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  f[i][j]=a5[i][j];
            }
         }
         else if(c==6)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  f[i][j]=a6[i][j];
            }
         }
         if(d==1)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  e[i][j]=a1[i][j];
            }
         }
         else if(d==2)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  e[i][j]=a2[i][j];
            }
         }
         else if(d==3)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  e[i][j]=a3[i][j];
            }
         }
         else if(d==4)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  e[i][j]=a4[i][j];
            }
         }
         else if(d==5)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  e[i][j]=a5[i][j];
            }
         }
         else if(d==6)
         {
            for(int i=0;i<5;i++)
            {
               for(int j=0;j<5;j++)
                  e[i][j]=a6[i][j];
            }
         }
         int x1,x2,p1=0,p2=0;
            while(p1!=5||p2!=5)
               {
                  cout<<"Player1 is requested to choose a number from his/her matrix"<<'\n';
                  cin>>x1;
                  while(1)
                  {
                    if(x1>=1&&x1<=25)
                      break;
                    else
                    {
                      cout<<"Player1 is requested to choose a number from his/her matrix"<<'\n';
                      cin>>x1;
                    }
                    
                  }
                  int t1=1,t2=1,t3=1,t4=1,q1,q2,q11,q22,fla1=0,fla2=0;
                  for(int i=0;i<5;i++)
                  {
                     for(int j=0;j<5;j++)
                     {
                        if(f[i][j]==x1)
                        {
                           f[i][j]=-2;
                           q1=i;
                           q2=j;
                           fla1=1;
                        }
                        if(e[i][j]==x1)
                        {
                           e[i][j]=-1;
                           q11=i;
                           q22=j;
                           fla2=1; 
                        }
                        if(fla1==1&&fla2==1)
                           break;
                     }
                     if(fla1==1&&fla2==1)
                           break;
                  }
                  system("CLS");
                  system("color D");
                  cout<<"Current matrix of player1 and player2 are respectively:"<<'\n';
                  cout<<'\n';
                  for(int i=0;i<5;i++)
                  {
                     for(int j=0;j<5;j++)
                     {
                           if(f[i][j]/10==0&&f[i][j]%10>0)
                           cout<<0<<f[i][j]<<" ";
                           else
                           {
                              cout<<f[i][j]<<" ";
                           }
                     }
                     cout<<"\t\t";
                     for(int j=0;j<5;j++)
                     {
                           if(e[i][j]/10==0&&e[i][j]%10>0)
                           cout<<0<<e[i][j]<<" ";
                           else
                           {
                              cout<<e[i][j]<<" ";
                           }
                     }
                     cout<<'\n';
                  }
                  cout<<'\n';
                  for(int k=0;k<5;k++)
                  {
                     if(k!=q2)
                     {
                        if(f[q1][k]==-2)
                        t1++;
                     }
                     if(k!=q22)
                     {
                        if(e[q11][k]==-1)
                        t2++;
                     }
                     if(k!=q1)
                     {
                        if(f[k][q2]==-2)
                        t3++;
                     }
                     if(k!=q11)
                     {
                        if(e[k][q22]==-1)
                        t4++;
                     }

                  }
                  if(t1==5)
                  p1++;
                  if(t3==5)
                  p1++;
                  if(t2==5)
                  p2++;
                  if(t4==5)
                  p2++;
                  cout<<"The current score of player1 is:"<<'\n';
                  cout<<p1<<'\n';
                  cout<<"The current score of player2 is:"<<'\n';
                  cout<<p2<<'\n';
                  if(p1==5&&p2<p1)
                  {
                     cout<<"Player1 is the winner\n\nGAME OVER"<<'\n';
                     exit(1);
                  }
                  else if(p2==5&&p1<p2)
                  {
                     cout<<"Player2 is the winner\n\nGAME OVER"<<'\n';
                     exit(1);
                  }
                  else if(p1==5&&p2==5)
                  {
                     cout<<"Draw\n\nGAME OVER"<<'\n';
                     exit(1);
                  }
                  
                  cout<<"Player2 is requested to choose a number from his/her matrix"<<'\n';
                  cin>>x2;
                  while(1)
                  {
                    if(x2>=1&&x2<=25)
                      break;
                    else
                    {
                      cout<<"Player2 is requested to choose a number from his/her matrix"<<'\n';
                      cin>>x2;
                    }
                    
                  }
                  t1=1,t2=1,t3=1,t4=1,q1,q2,q11,q22,fla1=0,fla2=0;
                  for(int i=0;i<5;i++)
                  {
                     for(int j=0;j<5;j++)
                     {
                        if(f[i][j]==x2)
                        {
                           f[i][j]=-2;
                           q1=i;
                           q2=j;
                           fla1=1;
                        }
                        if(e[i][j]==x2)
                        {
                           e[i][j]=-1;
                           q11=i;
                           q22=j;
                           fla2=1; 
                        }
                        if(fla1==1&&fla2==1)
                           break;
                     }
                     if(fla1==1&&fla2==1)
                           break;
                  }
                  system("CLS");
                  system("color E");
                  cout<<"Current matrix of player1 and player2 are respectively:"<<'\n';
                  cout<<'\n';
                  for(int i=0;i<5;i++)
                  {
                     for(int j=0;j<5;j++)
                     {
                           if(f[i][j]/10==0&&f[i][j]%10>0)
                           cout<<0<<f[i][j]<<" ";
                           else
                           {
                              cout<<f[i][j]<<" ";
                           }
                     }
                     cout<<"\t\t";
                     for(int j=0;j<5;j++)
                     {
                           if(e[i][j]/10==0&&e[i][j]%10>0)
                           cout<<0<<e[i][j]<<" ";
                           else
                           {
                              cout<<e[i][j]<<" ";
                           }
                     }
                    cout<<'\n';
                  }
                  cout<<'\n';
                  for(int k=0;k<5;k++)
                  {
                     if(k!=q2)
                     {
                        if(f[q1][k]==-2)
                        t1++;
                     }
                     if(k!=q22)
                     {
                        if(e[q11][k]==-1)
                        t2++;
                     }
                     if(k!=q1)
                     {
                        if(f[k][q2]==-2)
                        t3++;
                     }
                     if(k!=q11)
                     {
                        if(e[k][q22]==-1)
                        t4++;
                     }

                  }
                  if(t1==5)
                  p1++;
                  if(t3==5)
                  p1++;
                  if(t2==5)
                  p2++;
                  if(t4==5)
                  p2++;
                  cout<<"The current score of player1 is:"<<'\n';
                  cout<<p1<<'\n';
                  cout<<"The current score of player2 is:"<<'\n';
                  cout<<p2<<'\n';
                  if(p1==5&&p2<p1)
                  {
                     cout<<"Player1 is the winner\n\nGAME OVER"<<'\n';
                     exit(1);
                  }
                  else if(p2==5&&p1<p2)
                  {
                     cout<<"Player2 is the winner\n\nGAME OVER"<<'\n';
                     exit(1);
                  }
                  else if(p1==5&&p2==5)
                  {
                     cout<<"Draw\n\nGAME OVER"<<'\n';
                     exit(1);
                  }
                  
         }
}
 void instructions()
{
  system("color B");
   cout<<"                                                 |******|  WELCOME TO BINGO  |******|"<<'\n';
   cout<<"Enter 1 for:"<<'\n'<<"1. How to play"<<'\n';
   cout<<"or any other key to begin the game"<<'\n';
   int x;
   cin>>x;
   cout<<'\n';    
   switch(x)
   {
      case 1:
            {
               cout<<"INSTRUCTIONS FOR THE GAME:"<<'\n';
               cout<<'\n';
               cout<<"1)The game comprises of two players"<<'\n'<<"2)Each player has to choose one matrix from the given matrices"<<'\n';
               cout<<"3)One can choose any number from the matrix which has been selected by them, turn by turn and the game will begin with player1"<<'\n';
               cout<<"4)After each turn current matrix of each player will be visible"<<'\n';
               cout<<"5)Numbers which have already been choosen will be visible as -2 in player1 matrix and -1 in player2 matrix"<<'\n';
               cout<<"6)If 5 consequtive numbers (already chosen by both) in a row or a column of the matrix, are there in the the player's matrix, the player will be awarded 1 point"<<'\n';
               cout<<"7)The player who scores 5 points earlier will be the winner"<<'\n';
               cout<<'\n';
               break;
            }
      default:
            {  cout<<"THE GAME BEGINS"<<"\n\n";
               break;
            }
            
   }
}
int main()
{
   instructions();
   start_the_game();
}