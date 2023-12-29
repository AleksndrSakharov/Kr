#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>




struct slovo
{
    int zagl;
    int str;
    int words;
};

struct slovo *Programm(char* s){
    int z = 0, st = 0, w = 0, i = 0;
    struct slovo *PREDL = malloc(sizeof(struct slovo*));
    int size = strlen(s);
    while (i < size){
        if (s[i] >= 65 && s[i] <= 90){
            z++;
            i++;
        }
        else if (s[i] >= 97 && s[i] <= 122){
            st++;
            i++;
        }
        else{
            while ((s[i] < 65 || s[i] > 90) && (s[i] < 97 || s[i] > 122))
            {
                i++;
            }
            w++;
        }
    }
    PREDL->str = st;
    PREDL->zagl = z;
    PREDL->words = w;
    return PREDL;
}


int main(){
    char* s = (char*)malloc(1000);
    fgets(s, 1000, stdin); 
    // printf("\n%s\n", s);
    struct slovo *SSS = Programm(s);
    printf("%d, %d, %d", SSS->str, SSS->zagl, SSS->words);
    free(SSS);
    free(s);
    return 0;
}