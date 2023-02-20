#include<stdio.h>
#include<string.h>

int main()
{
    char data[100],stuf[100],destuf[100];
    int i,j;
    printf("Enter data:");
    scanf("%s",data);
    printf("Packate before stuffing: %s\n",data);

    i=0;j=0;
    //stuffing
    stuf[j++]='D';stuf[j++]='L';stuf[j++]='E';
    stuf[j++]='S';stuf[j++]='T';stuf[j++]='X';
    while(data[i]!='\0'){
        if(data[i]=='D'&&data[i+1]=='L'&&data[i+2]=='E')
        {
            stuf[j++]='D';
            stuf[j++]='L';
            stuf[j++]='E';
            stuf[j++]='D';
            stuf[j++]='L';
            stuf[j++]='E';
            i+=3;
        }
        else stuf[j++]=data[i++];
    }
    stuf[j++]='D';stuf[j++]='L';stuf[j++]='E';
    stuf[j++]='E';stuf[j++]='T';stuf[j++]='X';
    printf("Frame after stuffing: %s\n",stuf);
    return 0;
}
