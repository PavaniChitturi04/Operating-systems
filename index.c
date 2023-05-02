#include<stdio.h>
#include<stdlib.h>

int main() {
    int f[50], index[50], i, n, st, len, j, c, k, ind, count = 0;
    for (i = 0; i < 50; i++) {
        f[i] = 0;
    }

    do {
        printf("Enter the index block: ");
        scanf("%d", &ind);

        if (f[ind] != 1) {
            printf("Enter no of blocks needed and no of files for the index %d on the disk:\n", ind);
            scanf("%d", &n);

            do {
                count = 0;
                printf("Enter the block numbers:\n");

                for (i = 0; i < n; i++) {
                    scanf("%d", &index[i]);

                    if (f[index[i]] == 0) {
                        count++;
                    }
                }

                if (count == n) {
                    for (j = 0; j < n; j++) {
                        f[index[j]] = 1;
                    }

                    printf("Allocated\n");
                    printf("File Indexed\n");

                    for (k = 0; k < n; k++) {
                        printf("%d-------->%d : %d\n", ind, index[k], f[index[k]]);
                    }
                }
                else {
                    printf("File in the index is already allocated\n");
                    printf("Enter another file indexed\n");
                }

            } while (count != n);
        }
        else {
            printf("%d index is already allocated\n", ind);
        }

        printf("Do you want to enter more file(Yes - 1/No - 0) ");
        scanf("%d", &c);

    } while (c != 0);

    return 0;
}

