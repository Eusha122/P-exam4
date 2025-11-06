#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int space = x-1;

    for(int i=1; i<=x; i++){
        for(int j =space; j>0; j--){
            printf(" ");
        }

        for(int al =i; al>=1; al--){
            printf("%d", al);
        }
        printf("\n");

        space--;
    }
    return 0;
}