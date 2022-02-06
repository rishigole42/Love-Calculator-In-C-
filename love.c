#include<stdio.h>
#include<time.h>

int main(){
    int result;
    char name1[20],name2[22];
    
   
    printf("enter your name:");
    scanf("%s",name1);
    printf("enter your crush name:");
    scanf("%s",name2);
    srand(time(0));
    result=random()%100+1;
    if(result<=50){
        printf("your Love is ok!!!! %d%:",result);
    }
    else{
         printf("yor Love is awsome %d%:",result);
        
        
    }
    
    //printf("%s\n ",name1);
    //printf("Loves\n");
    //printf("%s\n",name2);
    //printf("BY %d%:",result);
    
}
