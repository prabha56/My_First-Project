#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    FILE *fp1, *fp2;
    fp1=fopen("input5.txt","r");
    fp2=fopen("output5.txt","w");
    char s[32][10]={"auto","break","case",
    "char","const","continue","default","do","double",
    "else","enum","extern","float","for","goto","if",
    "int","long","register","return","short","signed",
    "sizeof","static","struct","switch","typedef","union",
    "unsigned","void","volatile","while"};
    char st[100],st1[10];
 int i,j,m;
while(fgets(st,100,fp1)!=NULL){

        for(i=0,j=0;s[i]!=NULL;i++){
            if(isalnum(st[i]))
            st1[j++]=st[i];
        }
        st1[j]='\0';
        m=0;
        for(i=0;i<32;i++)
        {
            if(strcmp(st1,s[i])==0)
            m=1;
            }
        if (m==0)
            fprintf(fp2,"Not Keyword\n");
       else
             fprintf(fp2,"keyword\n");
}
        return 0;
    }

