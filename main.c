#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Dizi Kac Elemanli olsun:");
    scanf("%d",&n);
    
    int dizi[n];
    printf("Elemanlari girin:");
    for (int i=0;i<n;i++){
        scanf("%d",&dizi[i]);
    }
    printf("\n\nDizi Tersten Yazdiriliyor:\n");
    for(int i=(n-1);i>=0;i--){
        printf("\n%d",dizi[i]);
    }




    return 0;
}