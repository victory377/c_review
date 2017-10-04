#include<stdio.h>
#include<string.h>


int check(const char data[],int start, int end);
int number=0;
int main(){
    char data[20],poly[10];
    char *ptr=data,*ptr1=poly;
    int num=0,num1=0,i=0,start=0,offset=0;
    int first=1;
    
    printf("Input the data and polymorphism\n");
    scanf("%s",data);
    scanf("%s",poly);
    while(*ptr++) num++;
    while(*ptr1++) num1++;
//    printf("%d %d\n",num,num1);
    for(i=num;i<(num+num1-1);i++){ 
        data[i] = '0';}
    data[num+num1-1] = '\0';

    do{
        if(first == 1){
            for(i=0;i<num1;i++){
                data[i] ^= poly[i];
                printf("%c",data[i]);
            }
            first=-10;
        }else{
            start+=offset;
            num1+=offset;
            offset = check(data,start,num1);
        }
    }while((num+num1-1)!=num1);
    ptr=data;
    printf("%c",*ptr);
    while(*ptr++)printf("%c",*ptr);
    return 0;
}
int check(const char data[], int start, int end){
    int i=0;
    char tmp;
    for(i=start;i<end;i++){
        tmp = data[i];
        if(tmp == 0){
            number++;
        }
        else{ 
            break;}
    }
    return number;
}
