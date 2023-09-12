#include <stdio.h>
int foo(int n){
    return 'a';
}
int main(){
    foo(3);
    printf("Hello World\n");
    printf("these are numbers: %d, %0.10lf\n", 345, 9838.12);
    return 0;
}
