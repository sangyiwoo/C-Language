#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char chg[100];
    
    printf("���ڿ��� �Է��ϼ��� : ");
    

    gets(str);
    
    int Len = strlen(str);
    int i=0;
    
    for(int j=Len; j!=-1;j--)
        {
            chg[i]=str[j];
            i++;
        }
    for(int i=0; i!=Len+1;i++)
        {
            printf("%c", chg[i]);
        }
}