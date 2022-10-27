#include<stdio.h>
#include<stdlib.h>
//ex 1
int fib(int n){

    if(n==1 || n==2)
            return 1;
    else
        return fib(n-1)+fib(n-2);
}
//ex 2
int lois(int n){

    if(n==1)
        return 1;

    else if(n==2)
        return 3;

    else
        return lois(n-1)+lois(n-2);
}
//ex 3
float agiota(int n){

    if(n==0)
        return 500;
    else
        return (agiota(n-1)-100) * 1.1;
}
//ex 4
float alice(int n){

    if(n==0)
        return 50000;
    else
        return alice(n-1)+(3000*1.05);
}
//ex 5
float carr(int n){

    if(n==0)
        return 10000;
    else
        return carr(n-1)-(10000*0.1)+50;
}
//ex 6
int itera(n){
    int f=1;

    while(n>1){
        f = f * n;
        n = n -1;
    }
    return f;
}

int recur(int n){
    if(n==0)
        return 1;
    else
        return n * recur(n-1);
}
main(){


    printf("%i \t",fib(10));

    printf("%i \t",lois(8));

    printf("%f \t",agiota(4));

    printf("%3.f \t",alice(4));

    printf("%3.f \t",carr(7));

    printf("%i \t",itera(10));

    printf("%i \t",recur(10));

}
