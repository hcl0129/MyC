#include<stdio.h>
int main(void){int n=0;char ch; ch=getchar();while(ch!='\n'){if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')n+=1;ch=getchar();}printf("Vowels: %d",n);}
