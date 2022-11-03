#include <stdlib.h>
#include <stdio.h>

int compile(char program[50]){
    int x;
    char str[1];
    int *tape = malloc(50*sizeof(int));
    int ptr = 0;

    for (int i; i < 50; i++){
        switch (program[i]) {
            case '+':
                tape[ptr]++;
                break;
            case '-':
                tape[ptr]--;
                break;
            case '>':
                ptr++;
                tape[ptr] = tape[ptr] || 0;
                break;
            case '<':
                ptr--;
                tape[ptr] = tape[ptr] || 0;
                break;
            case '.':
                printf("%d", tape[ptr]);
                break;
            case ',':
                scanf("%1s", str);
                sscanf(str, "%d", &x);
                tape[ptr] = x;
                break;

        }
    }
}


int main(){
    return 0;
}
