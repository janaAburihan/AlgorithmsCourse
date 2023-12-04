#include <iostream>
#include <sys/time.h>

long long fun1(int x){
    long long f=1; 
    for(int i=1;i<=x;i++)f*=i; 
    return f;
}

long long fun2(int x){
    if(x==0)return 1; 
    return x*fun2(x-1);
}

int main () {
    // Start measuring time
    struct timeval begin, end;
    gettimeofday(&begin, 0);
    
    // code...
    //std::cout<<fun1(1000000)<<std::endl;
    //std::cout<<fun2(1000000)<<std::endl;
    
    // Stop measuring time and calculate the elapsed time
    gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;
    
    // print time
    std::cout<<elapsed;
    
    return 0;
}


