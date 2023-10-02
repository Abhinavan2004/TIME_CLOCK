#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
    int h,m,s;
    int d=1000;
    printf("Set the time=>");
    scanf("%d %d %d",&h,&m,&s);

    if(h>12 || m>60 || s>60){
        printf("ERROR\n");
        exit(1);
    }
    else{
        while(1){
            s++;
            if(s>59){
                m++;
                s=0;
            }
            else if(m>59){
                h++;
                m=0;
            }
            else if(h>12){
                h=1;
            }
            printf("CLOCK=>\n %02d %02d %02d",h,m,s);
            Sleep(d);
            system("cls");
        }
    }
}