#include<stdio.h>
int maximum(){
    int max,min;
    int arr[11]={1,7,8,9,6,5,16};
    max=arr[0];
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("the maximum number in an array is:%d\n",max);
    return 0;

}
int minimum(){
    int max,min;
    int arr[6]={1,7,8,9,6,5};
    min=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("the minimum number in an array is:%d",min);
    return 0;

}
int main(){
    maximum();
    minimum();
    return 0;
}