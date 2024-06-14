#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <Windows.h>

int main(){
    char str1[]= "abcdefghijklmnopqrstuvwxyz0123456789";
    char str2[1001];
    printf("Digite uma frase: ");
    scanf("%[^\n]",str2);
    int tamanho1 = strlen(str1), tamanho2 = strlen(str2);
    char *str3 = (char*)calloc(tamanho2,sizeof(char));
    for(int i=0;i<tamanho2;i++){
        for(int j=0;j<tamanho1;j++){
            if(isspace(str2[i])){
                str3[i] = ' ';
                j++;
                break;
            }
            if(i>0){
                for(int k=0;k<tamanho2*sizeof(char);k++){
                    printf("%c",str3[k]);  
                }
            }
            if(isupper(str2[i])){
                printf("%c\n",toupper(str1[j]));
            }else{
                printf("%c\n",str1[j]);
            }
            Sleep(25);
            if(isupper(str2[i])){
                if(toupper(str1[j])==toupper(str2[i])){
                    str3[i] = toupper(str1[j]);
                    j=0;
                    break;
                }
            }
            if(str1[j]==str2[i]){
                str3[i] = str1[j];
                j=0;
                break;
            }
        }
    }
    return 0;
}