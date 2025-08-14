//decimal to binary  
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[32];
    int i=0;
    while(n!=0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    return 0;
}
