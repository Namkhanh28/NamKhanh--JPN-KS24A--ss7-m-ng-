#include <stdio.h>

int main(){
    int length; // do dai cua mang 
    printf("moi ban nhap do dai cua mang");
    scanf("%d" ,&length);

    int array[length];
    for(int i = 0 ;i < length ; i++){
        printf("array(%d) = %d\n ,i , array[i]");
        return 0;
    }
}