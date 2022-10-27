#include<stdio.h>
#include<math.h>
#include<windows.h>

#define MAX_LINE 2048

void rin(int,float,int,int,int,int,int,int,float,float,float,float);
void bnb(int,float,float,float,float,int,int,int);
int days(int,int,int,int,int,int,float,float);
int days1(int,int,int,int,int,int,float,float);
float tds(int,float);


void main()
{

    float p,r,n,i,i1,account=0,a,a1,b,m,d1;
    int t,tdd,tmm,tyy,dd,mm,yy,daydiff,yeardiff,monthdiff,d,age;


    FILE*fp;
    int lpw,pw;
    char str[80],lstr[80],ch,choice1,ch1,choiceos;
    char scheme[MAX_LINE];
    int choice2;


    printf("If you are new customer enter A");
    printf("\nIf you are existing customer enter B");
    printf("\nEnter Your Choice :");
    scanf("%c",&choice1);
    switch(choice1)
    {
    case 'A':

        printf("\nEnter Username : ");
        scanf("%s",&str);

        printf("\nEnter Password :");
        scanf("%d",&pw);

        fp=fopen(str,"w");

        printf("\nEnter Principle : ");
        scanf("%f",&p);

        printf("\nEnter Duration in Years : ");
        scanf("%f",&n);

        printf("\nEnter Your Age : ");
        scanf("%d",&age);

        printf("\nPlease Select Duration of Scheme by Entering Character Beside It \n A   7 days To 15 days \n B   15 days To 45 days \n C   46 days To 90 days\n D   91 days To 180 days\n E   181 days upto 1 year\n F   Above 1 year Upto  2 year\n G   Above 2 year Upto  3 year\n H   Above 3 year Upto  4 years\n I   Above 4 year Upto  5 year\n J  Above 5 year Upto  8 year\n K  Above 8 year Upto  10 year\n L  Vasudhara Tax Planning Scheme (5 years)");
        printf("\nEnter Your Choice :");
        scanf("\n%c",&choiceos);

        switch(choiceos)
        {
        case 'A':
            fprintf(fp,"Scheme : 7 days To 15 days");
            if(p<10000000)
            {
                r=4.00;
            }
            else if (p<10000000 && age>=60)
            {
                r=4.00;
            }
            else if (p>=10000000)
            {
                r=3.75;
            }
            break;
        case 'B':
            fprintf(fp,"Scheme : 15 days To 45 days");
            if(p<10000000)
            {
                r=4.00;
            }
            else if (p<10000000 && age>=60)
            {
                r=4.00;
            }
            else if (p>=10000000)
            {
                r=3.75;
            }
            break;
        case 'C':
            fprintf(fp,"Scheme : 46 days To 90 days");
            if(p<10000000)
            {
                r=4.75;
            }
            else if (p<10000000 && age>=60)
            {
                r=4.75;
            }
            else if (p>=10000000)
            {
                r=4.50;
            }
            break;
        case 'D':
            fprintf(fp,"Scheme : 91 days To 180 days");
            if(p<10000000)
            {
                r=4.75;
            }
            else if (p<10000000 && age>=60)
            {
                r=4.75;
            }
            else if (p>=10000000)
            {
                r=4.50;
            }
            break;
        case 'E':
            fprintf(fp,"Scheme : 181 days upto 1 year");
            if(p<10000000)
            {
                r=5.00;
            }
            else if (p<10000000 && age>=60)
            {
                r=5.00;
            }
            else if (p>=10000000)
            {
                r=4.75;
            }
            break;
        case 'F':
            fprintf(fp,"Scheme : Above 1 year Upto  2 year");
            if(p<10000000)
            {
                r=5.75;
            }
            else if (p<10000000 && age>=60)
            {
                r=6.25;
            }
            else if (p>=10000000)
            {
                r=5.50;
            }
            break;
        case 'G':
            fprintf(fp,"Scheme : Above 2 year Upto  3 year");
            if(p<10000000)
            {
                r=6.00;
            }
            else if (p<10000000 && age>=60)
            {
                r=6.50;
            }
            else if (p>=10000000)
            {
                r=5.75;
            }
            break;
        case 'H':
            fprintf(fp,"Scheme : Above 3 year Upto  4 year");
            if(p<10000000)
            {
                r=6.00;
            }
            else if (p<10000000 && age>=60)
            {
                r=6.50;
            }
            else if (p>=10000000)
            {
                r=5.75;
            }
            break;
        case 'I':
            fprintf(fp,"Scheme : Above 4 year Upto  5 year");
            if(p<10000000)
            {
                r=6.25;
            }
            else if (p<10000000 && age>=60)
            {
                r=6.75;
            }
            else if (p>=10000000)
            {
                r=6.00;
            }
            break;
        case 'J':
            fprintf(fp,"Scheme : Above 5 year Upto  8 year");
            if(p<10000000)
            {
                r=6.00;
            }
            else if (p<10000000 && age>=60)
            {
                r=6.50;
            }
            else if (p>=10000000)
            {
                r=5.75;
            }
            break;
        case 'K':
            fprintf(fp,"Scheme : Above 8 year Upto  10 year");
            if(p<10000000)
            {
                r=6.00;
            }
            else if (p<10000000 && age>=60)
            {
                r=6.50;
            }
            else if (p>=10000000)
            {
                r=5.75;
            }
            break;
        case 'L':
            fprintf(fp,"Scheme : Vasudhara Tax Planning Scheme (5 Years)");
            if(p<10000000)
            {
                r=6.25;
            }
            else if (p<10000000 && age>=60)
            {
                r=6.75;
            }
            else if (p>=10000000)
            {
                r=6.00;
            }
            break;

        default :
        {
            printf("Enter Valid Choice");
            break;
        }
        }

        printf("\nEnter 1 for Compounding Yearly");
        printf("\nEnter 2 for Compounding Half Yearly");
        printf("\nEnter 3 for Compounding Quarterly");
        printf("\nEnter Your Choice :");
        scanf("%d",&choice2);

        printf("\nEnter today's Date in (dd/mm/yyyy) format");
        scanf("%d/%d/%d",&dd,&mm,&yy);

        fprintf(fp,"\n%s",str);
        fprintf(fp,"\n%d",pw);
        fprintf(fp,"\n%f",p);
        fprintf(fp,"\n%f",r);
        fprintf(fp,"\n%f",n);
        fprintf(fp,"\n%d",age);
        fprintf(fp,"\n%d",choice2);
        fprintf(fp,"\n%d",dd);
        fprintf(fp,"\n%d",mm);
        fprintf(fp,"\n%d",yy);

        fclose(fp);

        break;

    case 'B':

start:
        printf("\nEnter your Username :");
        scanf("%s",&str);

        printf("\nEnter Password :");
        scanf("\n%d",&pw);

        fp=fopen(str,"r");

        fgets(scheme, MAX_LINE, fp);
        fscanf(fp,"%s",&lstr);
        fscanf(fp,"%d",&lpw);
        fscanf(fp,"%f",&p);
        fscanf(fp,"%f",&r);
        fscanf(fp,"%f",&n);
        fscanf(fp,"%d",&age);
        fscanf(fp,"%d",&choice2);
        fscanf(fp,"%d",&dd);
        fscanf(fp,"%d",&mm);
        fscanf(fp,"%d",&yy);

        if(strcmp(lstr,str)==0 && lpw==pw)
        {
            printf(" \n Scheme : %s",scheme);
            printf(" \n Username : %s",str);
            printf("\n\n Principle : %f",p);
            printf("\n\n Rate : %f",r);
            printf("\n\n Term : %f",n);
            printf("\n\n Age : %d",age);
            printf("\n\nCompoundation type : %d",choice2);
            printf("\n[1 = Yearly]  [2 = Half Yearly]  [3 = Quarterly]\n");
            printf("\n\nOpening Date of FD : %d",dd);
            printf("\nOpening Month of FD : %d",mm);
            printf("\nOpening Year of FD : %d",yy);

            fclose(fp);


            //+++++++++++++ Q HY Y ++++++++++++++++++++

            printf("\n\nEnter Compoundation Type :");
            scanf("\n%c",&ch1);
            switch(ch1)
            {
            case '1':

                i=(p*(pow((1+(r/100)),n)))-p;
                tds(age,i);
                printf("\nPointer Is Here %f",i);

                a=p+i;

                break;

            case '2':

                i=(p*(pow((1+(r/200)),(2*n))))-p;
                tds(age,i);
                printf("\nPointer Is Here %f",i);

                a=p+i;

                break;

            case '3':

                i=(p*(pow((1+(r/400)),(4*n))))-p;
                tds(age,i);
                printf("\nPointer Is Here %f",i);

                a=p+i;

                break;

            default :

                printf("Enter valid Choice");
                break;
            }


            SYSTEMTIME stime;
            GetSystemTime(&stime);
            tdd=stime.wDay;
            tmm=stime.wMonth;
            tyy=stime.wYear;


            if(tdd<dd&&tmm<mm&&tyy<yy || tdd<dd&&tmm<mm&&tyy==yy || tdd<dd&&tmm==mm&&tyy<yy ||
                    tdd<dd&&tmm==mm&&tyy==yy || tdd<dd&&tmm>mm&&tyy<yy || tdd==dd&&tmm<mm&&tyy<yy ||
                    tdd==dd&&tmm<mm&&tyy==yy || tdd==dd&&tmm==mm&&tyy<yy || tdd==dd&&tmm>mm&&tyy<yy ||
                    tdd>dd&&tmm<mm&&tyy<yy || tdd>dd&&tmm<mm&&tyy==yy || tdd>dd&&tmm==mm&&tyy<yy ||
                    tdd>dd&&tmm>mm&&tyy<yy )
            {
                printf("\nPlease first make FD");
            }
            else
            {
                yy=yy+n;
                printf("\n\nMaturity Date is: %02d/%02d/%04d\n",dd,mm,yy);

                if(tdd==dd&&tmm==mm&&tyy==yy)
                {
                    d=days (dd,tdd,mm,tmm,yy,tyy,i,b);
                    rin(d,a,dd,tdd,mm,tmm,yy,tyy,r,n,p,i);
                }
                else if(tdd<dd&&tmm<mm&&tyy>yy || tdd<dd&&tmm==mm&&tyy>yy)
                {
                    tdd=tdd+30;
                    tmm=tmm+11;
                    tyy=tyy-1;
                    d=days (dd,tdd,mm,tmm,yy,tyy,i,b);
                    rin(d,a,dd,tdd,mm,tmm,yy,tyy,r,n,p,i);
                }
                else if(tdd<dd&&tmm>mm&&tyy==yy || tdd<dd&&tmm>mm&&tyy>yy)
                {
                    tdd=tdd+30;
                    tmm=tmm-1;
                    d=days (dd,tdd,mm,tmm,yy,tyy,i,b);
                    rin(d,a,dd,tdd,mm,tmm,yy,tyy,r,n,p,i);
                }

                else if(tdd==dd&&tmm<mm&&tyy>yy || tdd>dd&&tmm<mm&&tyy>yy)
                {
                    tmm=tmm+12;
                    tyy=tyy-1;
                    d=days (dd,tdd,mm,tmm,yy,tyy,i,b);
                    rin(d,a,dd,tdd,mm,tmm,yy,tyy,r,n,p,i);
                }
                else if(tdd==dd&&tmm==mm&&tyy>yy || tdd==dd&&tmm>mm&&tyy==yy || tdd>dd&&tmm==mm&&tyy==yy||
                        tdd>dd&&tmm==mm&&tyy>yy || tdd>dd&&tmm>mm&&tyy==yy || tdd>dd&&tmm>mm&&tyy>yy )
                {
                    d=days (dd,tdd,mm,tmm,yy,tyy,i,b);
                    rin(d,a,dd,tdd,mm,tmm,yy,tyy,r,n,p,i);
                }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
                else if(tdd<dd&&tmm<mm&&tyy<yy || tdd<dd&&tmm<mm&&tyy==yy || tdd<dd&&tmm==mm&&tyy<yy||
                        tdd<dd&&tmm==mm&&tyy==yy || tdd==dd&&tmm<mm&&tyy<yy || tdd==dd&&tmm<mm&&tyy==yy ||
                        tdd==dd&&tmm==mm&&tyy<yy)
                {
                    d=days1(dd,tdd,mm,tmm,yy,tyy,i,b);
                    bnb(d,d1,p,r,n,dd,mm,yy);
                }
                else if(tdd<dd&&tmm>mm&&tyy<yy || tdd==dd&&tmm>mm&&tyy<yy)
                {
                    yy=yy-1;
                    mm=mm+12;
                    d=days1(dd,tdd,mm,tmm,yy,tyy,i,b);
                    bnb(d,d1,p,r,n,dd,mm,yy);
                }

                else if(tdd>dd&&tmm<mm&&tyy<yy || tdd>dd&&tmm<mm&&tyy==yy)
                {
                    dd=dd+30;
                    mm=mm-1;
                    d=days1(dd,tdd,mm,tmm,yy,tyy,i,b);
                    bnb(d,d1,p,r,n,dd,mm,yy);
                }

                else if(tdd>dd&&tmm==mm&&tyy<yy || tdd>dd&&tmm>mm&&tyy<yy)
                {
                    yy=yy-1;
                    mm=mm+11;
                    dd=dd+30;
                    d=days1(dd,tdd,mm,tmm,yy,tyy,i,b);
                    bnb(d,d1,p,r,n,dd,mm,yy);
                }
            }

        }
        else if (strcmp(lstr,str)==1 && lpw==pw || strcmp(lstr,str)==0 && lpw!=pw)
        {
            printf("Username or Password Invalid");
            printf("\n\n");

            char choice1;
            int pwn;
            printf("\nEnter A to Retry");
            printf("\nEnter B to change Password");
            scanf("\n%c",&choice1);
            switch(choice1)
            {
            case 'A':
                goto start;
                break;
            case 'B':
                printf("Enter new password");
                scanf("%d",&pwn);
                pw=pwn;

                fp=fopen(str,"w");

                fprintf(fp,"%s",str);
                fprintf(fp,"\n%d",pw);
                fprintf(fp,"\n%f",p);
                fprintf(fp,"\n%f",r);
                fprintf(fp,"\n%f",n);
                fprintf(fp,"\n%d",choice2);
                fprintf(fp,"\n%d",dd);
                fprintf(fp,"\n%d",mm);
                fprintf(fp,"\n%d",yy);

                fclose(fp);

                printf("Login Again");
                break;
            default:
                printf("Invalid Choice");
                break;
            }
        }
        else
        {
            printf("Username and Password both invalid");
            printf("\n\n");
            goto start;
        }

        break;

    default:
    {
        printf("Invalid Choice");
        break;
    }
    }


/////////////////////////////////////////////////////////////////////////////////////////////////////////


}
void rin(int d,float a,int dd,int tdd,int mm,int tmm,int yy,int tyy,float r,float n,float p,float i)
{

    float m,b;
    float account=0;

    m=(d*0.0027);
    b=(a*4*m)/100;

    if(tdd==dd && tmm==mm && tyy==yy)
    {
        char choice;
        printf("\n\nA=> Renewal including interest \nB=> Renewal without interest \nC=> no Renewal\n ");
        printf("\nEnter your choice");
        scanf("\n%c",&choice);
        switch(choice)
        {
        case 'A' :
            printf("\n\nYour FD is renewed with principle %f",a);
            printf("\n\nBalance=%f",account);
            p=a;
            i=(p*(pow((1+(r/100)),n)))-p;
            printf("\n\nInterest =>%f",i);
            a=p+i;
            printf("\n\nAmount After renewal => %f",a);
            printf("\n\n");
            break;
        case 'B':
            account=account+i;
            printf("\nYour account is credited with %f",i);
            printf("\nYour FD is renewed with principle %f",p);
            printf("\nBalance=%f",account);
            printf("\n\n");
            break;
        case 'C' :
            account=account+a;
            printf("\nYour account is credited with %f",a);
            printf("\nBalance=%f",account);
            printf("\n\n");
            break;
        default :
            printf("\nEnter valid option");
            printf("\n\n");
            break;
        }
    }
    else if(d<=15)
    {
        char choice;
        printf("A=> Renewal including interest \nB=> Renewal without interest \nC=> no Renewal\n ");
        printf("\nEnter your choice");
        scanf("\n%c",&choice);
        switch(choice)
        {
        case 'A' :

            printf("\n\nYour FD is renewed with principle %f",a);
            printf("\n\nBalance=%f",account);
            p=a;
            i=(p*(pow((1+(r/100)),n)))-p;
            printf("\n\nInterest =>%f",i);
            a=p+i;
            printf("\n\nAmount After renewal => %f",a);
            printf("\n\n");
            break;
        case 'B':

            account=account+i;
            printf("\n\nYour Account is credited with %f",i);
            printf("\n\nYour FD is renewed with principle %f",p);
            printf("\n\nBalance=%f",account);
            printf("\n\n");
            break;
        case 'C' :
            account=account+a+b;
            printf("\n\nYour account is credited with %f+%f",a,b);
            printf("\n\nBalance=%f",account);
            printf("\n\n");
            break;
        default :
            printf("\nEnter valid option");
            break;
        }
    }
    else if(d>15)
    {
        char choice;
        printf("A=> Renewal including interest \nB=> Renewal without interest \nC=> no Renewal\n ");
        printf("\nEnter your choice");
        scanf("\n%c",&choice);
        switch(choice)
        {
        case 'A' :
            a=a+b;
            printf("\n\nYour FD is renewed with principle %f",a);
            printf("\n\nBalance=%f",account);
            p=a;
            i=(p*(pow((1+(r/100)),n)))-p;
            printf("\n\nInterest =>%f",i);
            a=p+i;
            printf("\n\nAmount After renewal => %f",a);
            printf("\n\n");
            break;
        case 'B':
            account=account+i+b;
            printf("\n\nYour account is credited with %f + %f",i,b);
            printf("\n\nYour FD is renewed with principle %f",p);
            printf("\n\nBalance=%f",account);
            printf("\n\n");
            break;
        case 'C' :
            account=account+a+b;
            printf("\n\nYour account is credited with %f+%f",a,b);
            printf("\n\nBalance=%f",account);
            printf("\n\n");
            break;
        default :
            printf("Enter valid option");
            break;
        }
    }
    else
    {
        printf("Enter valid date");
    }
}

int days1(int dd,int tdd, int mm,int tmm,int yy,int tyy,float i,float b)
{
    int daydiff,monthdiff,yeardiff,d;

    daydiff=dd-tdd;
    monthdiff=mm-tmm;
    yeardiff=yy-tyy;
    d=(yeardiff*365)+(monthdiff*30)+daydiff;
    printf("\nCustomer came before %d days of maturity date",d);
    printf("\n");
    printf("\n");

    return d;
}
int days (int dd,int tdd, int mm,int tmm,int yy,int tyy,float i,float b)
{
    int daydiff,monthdiff,yeardiff,d;

    daydiff=tdd-dd;
    monthdiff=tmm-mm;
    yeardiff=tyy-yy;
    d=(yeardiff*365)+(monthdiff*30)+daydiff;
    printf("\nCustomer came after %d days of maturity date",d);
    printf("\n");
    printf("\n");
    return d;
}
void bnb(int d,float d1,float p,float r,float n,int dd,int mm,int yy)
{
    float a,account,i,b;


    char choice;

    printf("\nA=>Break FD \nB=> Not to break FD ");
    scanf("\n%c",&choice);

    switch(choice)
    {
    case 'A':
        printf("1=> Compounding Yearly \n2=> Compounding Half Yearly \n3=> Compounding Quarterly ");
        scanf("\n%c",&choice);
        switch (choice)
        {
        case'1':
                d1=n-(d*0.0027);

            if(d1<=1)
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/100)),n)))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>1 && d1<=2)
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/100)),n)))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>2 && d1<=3)
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/100)),n)))-p;
                a=p+i;
                account=account+a;
            }
            else
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/100)),n)))-p;
                a=p+i;
                account=account+a;
            }

            printf("\nyour account is credited with %f",account);
            printf("\nBalance => %f",account);

            break;
        case'2':
                d1=n-(d*0.0027);

            if(d1<=1)
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/200)),(2*n))))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>1 && d1<=2)
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/200)),(2*n))))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>2 && d1<=3)
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/200)),(2*n))))-p;
                a=p+i;
                account=account+a;
            }
            else
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/200)),(2*n))))-p;
                a=p+i;
                account=account+a;
            }
            printf("\nyour account is credited with %f",account);
            printf("\nBalance => %f",account);

            break;
        case'3':
                d1=n-(d*0.0027);

            if(d1<=1)
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/400)),(4*n))))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>1 && d1<=2)
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/400)),(4*n))))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>2 && d1<=3)
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/400)),(4*n))))-p;
                a=p+i;
                account=account+a;
            }
            else
            {
                r=r-1;
                n=d1;
                i=(p*(pow((1+(r/400)),(4*n))))-p;
                a=p+i;
                account=account+a;
            }
            printf("\n\nYour account is credited with %f",account);
            printf("\nBalance => %f",account);

            break;
        default :
        {
            printf("Enter valid option");
            break;
        }

        }
        break;
    case 'B':
        printf("\n Come on  %d/%d/%d",dd,mm,yy);
        break;
    default :
    {
        printf("Enter valid option");
        break;
    }
    }
}
float tds(int age , float i)
{
    float tempi,idiff;

    if (age<60 && i>40000)
    {
        tempi=i;
        printf("\n\nInterest before deducting TDS %f",i);
        i=i-(0.1*i);
        printf("\nInterest after deducting TDS %f",i);
        idiff=tempi-i;
        printf("\nTDS : %f",idiff);
    }
    else if (age>60 && i>50000)
    {
        tempi=i;
        printf("\n\nInterest before deducting TDS %f",i);
        i=i-(0.1*i);
        printf("\nInterest after deducting TDS %f",i);
        idiff=tempi-i;
        printf("\nTDS : %f",idiff);
    }

    return i ;
}
