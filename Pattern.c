#include <stdio.h>

void upper(int input){
    
    
    int hash = 1;
    int space =input-1;
    int dash =3;

    for(int i=1; i<=input; i++){

        for(int k=0; k<space; k++){
            printf(" ");
        }


        if(i%2==1){
            for(int j =1; j<=hash; j++){
            printf("#");
        }
        }
        else{
            for(int j =1; j<=hash; j++){
            printf("-");
        }
    }
        printf("\n");

        hash+=2;
        space--;
    }
}


void lower(int input){

    
    int hash = (input*2)-3;
    int space =1;
    

    for(int i=input-1; i>=1; i--){

        for(int k=0; k<space; k++){
            printf(" ");
        }


        if(i%2==1){
            for(int j =1; j<=hash; j++){
            printf("#");
        }
        }
        else{
            for(int j =1; j<=hash; j++){
            printf("-");
        }
    }
        printf("\n");

        hash-=2;
        space++;
    }
}


int main(){

    int input;
    scanf("%d", &input);

    upper(input);
    lower(input);
    return 0;
}
