//program to implement the delay function using sleep()
#include<stdio.h>
#include<stdint.h>
#include<unistd.h>
#define LOOP_NO 10
int main()
{
    for(int i = 0;i<LOOP_NO;i++)
    {
        printf("%d loop completed\n",i);
        sleep(1);

    }
}