#include <stdio.h>

int main() {
    int index = 1;
    int position = 0;

    LOOP: while (position < 10001) {
        index++;

        int i;
        for(i = 2; i < index; i++) {
            if (index % i == 0) {
                goto LOOP;
            }
        }

        position++;
    }

    printf("%d\n", index);
}
