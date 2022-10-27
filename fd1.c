
#include<stdio.h>
#include<math.h>
#include<windows.h>

void rin(int,float,int,int,int,int,int,int,float,float,float,float);
void bnb(int,float,float,float,float);
int days(int,int,int,int,int,int,float,float);
int days1(int,int,int,int,int,int,float,float);


void main()
{

    float p,r,n,i,i1,account=0,a,a1,b,m,d1;
    int tdd,tmm,tyy,dd,mm,yy,daydiff,yeardiff,monthdiff,d;
    char choice;




    printf("A=> Compounding Yearly \nB=> Compounding Half Yearly \nC=> Compounding Quarterly ");
    scanf("\n%c",&choice);
    switch (choice)
    {
    case 'A':
        printf("Enter Principle Amount \n");
        scanf("%f",&p);

        printf("Enter Rate Of Interest \n");
        scanf("%f",&r);

        printf("Enter Term \n");
        scanf("%f",&n);

        i=(p*(pow((1+(r/100)),n)))-p;

        printf("Interest =>%f",i);

        a=p+i;
        break;
    case 'B':
        printf("Enter Principle Amount \n");
        scanf("%f",&p);

        printf("Enter Rate Of Interest \n");
        scanf("%f",&r);

        printf("Enter Term \n");
        scanf("%f",&n);

        i=(p*(pow((1+(r/200)),(2*n))))-p;
        printf("Interest =>%f",i);
        a=p+i;
        break;
    case 'C':
        printf("Enter Principle Amount \n");
        scanf("%f",&p);

        printf("Enter Rate Of Interest \n");
        scanf("%f",&r);

        printf("Enter Term \n");
        scanf("%f",&n);

        i=(p*(pow((1+(r/400)),(4*n))))-p;
        printf("Interest =>%f",i);
        a=p+i;
        break;
    default :
        printf("Enter valid Choice");
    }
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("\nDate of Arrival of Customer %d/%d/%d",stime.wDay,stime.wMonth,stime.wYear);
    tdd=stime.wDay;
    tmm=stime.wMonth;
    tyy=stime.wYear;

    printf("\nOpening date of fd in (dd/mm/yy) format: ");
    scanf("%d/%d/%d",&dd,&mm,&yy);


    if(tdd<dd&&tmm<mm&&tyy<yy || tdd<dd&&tmm<mm&&tyy==yy || tdd<dd&&tmm==mm&&tyy<yy ||
            tdd<dd&&tmm==mm&&tyy==yy || tdd<dd&&tmm>mm&&tyy<yy || tdd==dd&&tmm<mm&&tyy<yy ||
            tdd==dd&&tmm<mm&&tyy==yy || tdd==dd&&tmm==mm&&tyy<yy || tdd==dd&&tmm>mm&&tyy<yy ||
            tdd>dd&&tmm<mm&&tyy<yy || tdd>dd&&tmm<mm&&tyy==yy || tdd>dd&&tmm==mm&&tyy<yy ||
            tdd>dd&&tmm>mm&&tyy<yy )
    {
        printf("Please first make FD");
    }
    else
    {
        yy=yy+n;
        printf("Maturity Date is: %02d/%02d/%04d\n",dd,mm,yy);

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
            bnb(d,d1,p,r,n);
        }
        else if(tdd<dd&&tmm>mm&&tyy<yy || tdd==dd&&tmm>mm&&tyy<yy)
        {
            yy=yy-1;
            mm=mm+12;
            d=days1(dd,tdd,mm,tmm,yy,tyy,i,b);
            bnb(d,d1,p,r,n);
        }

        else if(tdd>dd&&tmm<mm&&tyy<yy || tdd>dd&&tmm<mm&&tyy==yy)
        {
            dd=dd+30;
            mm=mm-1;
            d=days1(dd,tdd,mm,tmm,yy,tyy,i,b);
            bnb(d,d1,p,r,n);
        }

        else if(tdd>dd&&tmm==mm&&tyy<yy || tdd>dd&&tmm>mm&&tyy<yy)
        {
            yy=yy-1;
            mm=mm+11;
            dd=dd+30;
            d=days1(dd,tdd,mm,tmm,yy,tyy,i,b);
            bnb(d,d1,p,r,n);
        }
    }
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
        printf("A=> Renewal including interest \nB=> Renewal without interest \nC=> no Renewal\n ");
        printf("\nEnter your choice");
        scanf("\n%c",&choice);
        switch(choice)
        {
        case 'A' :
            printf("\nYour FD is renewed with principle %f",a);
            printf("\nBalance=%f",account);
            p=a;
            i=(p*(pow((1+(r/100)),n)))-p;
            printf("\nInterest =>%f",i);
            a=p+i;
            printf("\nAmount After renewal => %f",a);
            printf("\n\n");
            break;
        case 'B':
            account=account+i;
            printf("\nyour account is credited with %f",i);
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

            printf("\nYour FD is renewed with principle %f",a);
            printf("\nBalance=%f",account);
            p=a;
            i=(p*(pow((1+(r/100)),n)))-p;
            printf("\nInterest =>%f",i);
            a=p+i;
            printf("\nAmount After renewal => %f",a);
            printf("\n\n");
            break;
        case 'B':

            account=account+i;
            printf("\nyour account is credited with %f",i);
            printf("\nYour FD is renewed with principle %f",p);
            printf("\nBalance=%f",account);
            printf("\n\n");
            printf("\n\n");
            break;
        case 'C' :
            account=account+a+b;
            printf("\nYour account is credited with %f+%f",a,b);
            printf("\nBalance=%f",account);
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
            printf("\nYour FD is renewed with principle %f",a);
            printf("\nBalance=%f",account);
            p=a;
            i=(p*(pow((1+(r/100)),n)))-p;
            printf("\nInterest =>%f",i);
            a=p+i;
            printf("\nAmount After renewal => %f",a);
            printf("\n\n");
            break;
        case 'B':
            account=account+i+b;
            printf("\nYour account is credited with %f + %f",i,b);
            printf("\nYour FD is renewed with principle %f",p);
            printf("\nBalance=%f",account);
            printf("\n\n");
            break;
        case 'C' :
            account=account+a+b;
            printf("\nYour account is credited with %f+%f",a,b);
            printf("\nBalance=%f",account);
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
void bnb(int d,float d1,float p,float r,float n)
{
    float a,account,i,b;
    int dd,mm,yy;

    char choice;

    printf("\nA=>Break FD \nB=> Not to break FD ");
    scanf("\n%c",&choice);

    switch(choice)
    {
    case 'A':
        printf("A=> Compounding Yearly \nB=> Compounding Half Yearly \nC=> Compounding Quarterly ");
        scanf("\n%c",&choice);
        switch (choice)
        {
        case'A':
                d1=n-(d*0.0027);

            if(d1<=1)
            {
                r=5;
                n=d1;
                i=(p*(pow((1+(r/100)),n)))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>1 && d1<=2)
            {
                r=6;
                n=d1;
                i=(p*(pow((1+(r/100)),n)))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>2 && d1<=3)
            {
                r=8;
                n=d1;
                i=(p*(pow((1+(r/100)),n)))-p;
                a=p+i;
                account=account+a;
            }
            else
            {
                r=9;
                n=d1;
                i=(p*(pow((1+(r/100)),n)))-p;
                a=p+i;
                account=account+a;
            }

            printf("\nyour account is credited with %f",account);
            printf("\nBalance => %f",account);

            break;
        case'B':
                d1=n-(d*0.0027);

            if(d1<=1)
            {
                r=5;
                n=d1;
                i=(p*(pow((1+(r/200)),(2*n))))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>1 && d1<=2)
            {
                r=6;
                n=d1;
                i=(p*(pow((1+(r/200)),(2*n))))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>2 && d1<=3)
            {
                r=8;
                n=d1;
                i=(p*(pow((1+(r/200)),(2*n))))-p;
                a=p+i;
                account=account+a;
            }
            else
            {
                r=9;
                n=d1;
                i=(p*(pow((1+(r/200)),(2*n))))-p;
                a=p+i;
                account=account+a;
            }
            printf("\nyour account is credited with %f",account);
            printf("\nBalance => %f",account);

            break;
        case'C':
                d1=n-(d*0.0027);

            if(d1<=1)
            {
                r=5;
                n=d1;
                i=(p*(pow((1+(r/400)),(4*n))))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>1 && d1<=2)
            {
                r=6;
                n=d1;
                i=(p*(pow((1+(r/400)),(4*n))))-p;
                a=p+i;
                account=account+a;
            }
            else if(d1>2 && d1<=3)
            {
                r=8;
                n=d1;
                i=(p*(pow((1+(r/400)),(4*n))))-p;
                a=p+i;
                account=account+a;
            }
            else
            {
                r=9;
                n=d1;
                i=(p*(pow((1+(r/400)),(4*n))))-p;
                a=p+i;
                account=account+a;
            }
            printf("\nyour account is credited with %f",account);
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
        printf("Come on  %02d/%02d/%04d\n",dd,mm,yy);
        break;
    default :
    {
        printf("Enter valid option");
        break;
    }
    }
}
