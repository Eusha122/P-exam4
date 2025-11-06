#include <stdio.h>

int count_before_one(int arr[],int N) {

    

    for(int i=0; i<N; i++){
        
        if(arr[i]== 1){
            return i;
        }

        
    }

    return N;


}

int main(){

    int N;

    scanf("%d", &N);

    int arr[N];

    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int a = count_before_one(arr, N);

    printf("%d\n", a);
    
    
}