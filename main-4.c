/*DOCUMENTATION:
Dev: SSR-04 (SACHIN SABARIRAM)
DOC: 06-01-2021
CATEOGRY: FUN INTERACTIVE PROGRAM
CREATED ON: LINUX BASED COMPILER
https://www.onlinegdb.com/online_c_compiler
*/

#include<stdio.h>
#include<string.h>
#include<ncurses.h>
#include <unistd.h>
  
void main()
{
    char n1[30]="FLAMES";
    char s1[100];
    char s2[100];
    int count=0;
    
    printf("\n\t\tWELCOME TO FLAMES");
    printf("\n\tYOUR RELATIONSHIP CHECKER");
    
    printf("\n\nNOTE:THIS PROGRAM IS JUST CREATED FOR FUN PURPOSES, IT DOESN'T DEFINE YOUR RELATIONSHIP");
    
    printf("\n\nDo you agree to use the program just for fun purposes--");
    
    printf("\n\n\nENTER NAME ONLY IN LOWERCASE WITHOUT SPACES");
    
    printf("\n\nEnter the name-1:");
    scanf("%s",s1);
    printf("\n\nEnter the name-2:");
    scanf("%s",s2);
    char s3[30];
    strcpy(s3,s2);
    printf("\n\nThe given names are: ");
    printf("%s\t%s",s1,s2);
    int l= strlen(s1);
    int l1=strlen(s2);
    int t=l+l1;
    
void removech(char toRemove)
{
    int i = 0;
    int len = strlen(s2);

    while(i<len && s2[i]!=toRemove)
        i++;

    while(i < len)
    {
        s2[i] = s2[i+1];
        i++;
    }
}

    
    for(int i=0;i<l;i++)
        {
         for(int j=0;j<l1;j++)
            {
                if(s1[i]==s2[j])
                    {count+=1;
                     removech(s2[j]);
                     break;
                    }
             }
        }
      
    int rem= (t-(count*2));
    
    //printf("\n\nREM=%d T=%d C=%d",rem,t,count);
    //printf("\n%s",s2);
    
    count = rem;

    
    
    void remove(char c)
    {
        switch(c)
        {
            case 'F':
            printf("You aren't friends");
            break;
            case 'L':
            printf("You don't love");
            break;
            case 'A':
            printf("You aren't connected by affection");
            break;
            case 'M':
            printf("Marraige not possible");
            break;
            case 'E':
            printf("You aren't enemies");
            break;
            case 'S':
            printf("You can't be sis/bro");
            break;
        }
    }
   
   
   
    void remain(char x)
    {
        int l4=strlen(n1);
        for(int m=0; m<l4; m++)
        {
            if(n1[m]==x)
            {
                for(int p=m; p<l4; p++)
                {n1[p]=n1[p+1];}
                m--;
                l4--;
            }
        }
        printf("\nRemaining possibilities are: %s",n1);
    }
    
    
    
    int i =1;
    int current = 0;
    int temp=count;
    
    while(strlen(n1)>1)
    {
        printf("\n\nRound %d: \n",i);
        temp=current+count;
        if(temp<=strlen(n1))
        {
            remove(n1[temp-1]);
            remain(n1[temp-1]);
            current=temp-1;
        }
        else
        {
            while(temp>strlen(n1))
            {
                temp=temp- strlen(n1);
            }
            sleep(1);
            remove(n1[temp-1]);
            sleep(1);
            remain(n1[temp-1]);
            current=temp-1;
        }
        i++;
        sleep(1);
    }
    
    char result=n1[0];
    
    refresh();
    
    printf("\n\n\n\t\t\t\tThe relationship between \n\n\t\t\t %s and %s is",s1,s3 );
    printf("\n\n\n");
    
    switch(result)
    {
        case 'F':
        printf("YOU ARE \"BEST\" FRIENDS FORVER, WHAT\'S BETTER THAN A GOOD FRIEND :)");
        break;
        case 'L':
        printf("LOOKS LIKE THERE\'S MAGIC BETWEEN YOU CALLED \"LOVE \"");
        break;
        case 'A':
        printf("AWW..SO SWEET THAT YOU BOTH ARE CONNECTED BY A NOBEL THING CALLED \"AFFECTION\":)");
        break;
        case 'M':
        printf("LOOKS LIKE MADE FOR EACH OTHER AND YOUR BOND WILL BE EVER LASTING BY \"MARRAIGE\"");
        break;
        case 'E':
        printf("NAH, MY PREDICTION MAY BE WRONG !, YOU CAN BE GOOD FRIENDS IF YOU TRY");
        break;
        case 'S':
        printf("HURRAY..THERE\'S NO BETTER THING IN LIFE THAN HAVING A LOVABLE \"SIS/BRO\"");
        break;
    }
    
    sleep(2);
    
    printf("\n\nTHANK YOU, HOPE YOU HAD FUN :)");
    
}