#include <stdio.h>
#include <ctype.h>

int main(){
    printf("hello world");
    int c;
    int words;
    int chars;
    int lines;
    int prev;

    while((c = getchar()) != EOF){
        chars++;
        // if(c == '\n' && prev != '\n'){
        //     lines++;
        //     words++;
        //     // printf("%c", c);
        // }
        // if(isspace(c) != isspace(prev)){
        //     words++;
        // }
        // prev = c;

        
    }
    
    // printf("%d, %d, %d", lines, words, chars);
        return 0;
}