#include <stdio.h>
#include <string.h>

void mergeSort(char str[100]);
void merge(char left[100], char right[100], char str[100]);

int main(void){
    char str[100];
    printf("input string:  ");
    scanf("%99s",str);
    mergeSort(str);
    printf("output string: %s\n", str);
    return 0; }
void mergeSort(char str[]){
    int len=strlen(str);
    if(len<=1){ 
        return; }
    int mid=len/2;
    char left[100];
    char right[100];
    for(int i=0; i<mid; i++){
        left[i]=str[i]; }
    left[mid]='\0';
    for(int i=mid; i<len; i++){
        right[i-mid]=str[i]; }
    right[len-mid]='\0';
    mergeSort(left);
    mergeSort(right);
    merge(left, right, str);
    return;}
void merge(char left[100], char right[100], char str[100]){
    int l=0, r=0, i=0;
    while(left[l]!='\0' && right[r]!='\0'){
        if(left[l]<=right[r]){
            str[i]=left[l];
            l++;
            i++;}
        else{
            str[i]=right[r];
            r++;
            i++;} }
    while(left[l]!='\0'){
        str[i]=left[l];
        l++;
        i++;  }
    while(right[r]!='\0'){
        str[i]=right[r];
        r++;
        i++; } 
    str[i]='\0'; }













