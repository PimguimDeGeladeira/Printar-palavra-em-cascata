#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main()
{
        char str1[]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char str2[]= "Hello World";
        int tamanho1 = strlen(str1), tamanho2 = strlen(str2);
        char str3[tamanho2];
        int i,j;//h=0;
        for(j=0;j<tamanho2;j++){
            for(i=0;i<tamanho1;i++){
                sleep(0.9);
                if(isspace(str2[j])){
                    str3[j] = ' ';
                    //h++;
                    i++;
                    break;
                }
                if(j>0){
                    for(int k=0;k<strlen(str3);k++){
                        printf("%c",str3[k]);
                        printf("[%d]", k);
                    }
                }
                printf("%c\n",str1[i]);
                if(str1[i]==str2[j]){
                    str3[j] = str1[i];
                    i=0;
                    break;
                }
            }
        }

    return 0;
}
