#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void signalCatch(int num)
{
    printf("Catch signal = %d\n", num);
    return;
}

int main()
{
    signal(1, signalCatch);
    signal(2, signalCatch);
    signal(3, signalCatch);
    signal(4, signalCatch);
    signal(5, signalCatch);
    signal(6, signalCatch);
    signal(7, signalCatch);
    signal(8, signalCatch);
    signal(9, signalCatch);
    signal(10, signalCatch);
    signal(11, signalCatch);
    signal(12, signalCatch);
    signal(13, signalCatch);
    signal(14, signalCatch);
    signal(15, signalCatch);
    signal(16, signalCatch);
    signal(17, signalCatch);
    signal(18, signalCatch);
    signal(19, signalCatch);
    signal(20, signalCatch);
    signal(21, signalCatch);
    signal(22, signalCatch);
    signal(23, signalCatch);
    signal(100, signalCatch);
    signal(101, signalCatch);
    signal(102, signalCatch);
    while(1);
    return 0;    
}
