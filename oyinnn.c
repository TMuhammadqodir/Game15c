#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int n;
void filll(int *p){
    *p = 0;
    *p++;
    int *p1 = p, value = 1, s1 = 0, s2 = 0;
    while (true){
        p1 = p - s2;
        *p = rand() % (n * n - 1) + 1;
        for (int i = 1; i < s2 + 1; i++){
            if (*p == *(p1++)){
                s1++;
            }
        }
        if (s1 == 0){
            p++;
            s2++;
        }
        if (s2 == n * n - 1)
            break;

        s1 = 0;
    }
}
void structure1(int arr[][n]){
    int j = 0;
    if (n == 3){
        for (int i = 0; i < n; i++){
            printf("-----  -----  -----\n");
            printf("| %d |  | %d |  | %d | \n", arr[i][j], arr[i][j + 1], arr[i][j + 2]);
            printf("-----  -----  -----\n");
        }
    }
    if (n == 4){
        for (int i = 0; i < n; i++){
            printf(" ------    ------    ------    ------\n");
            printf("| %3d  |  | %3d  |  | %3d  |  | %3d  | \n", arr[i][j], arr[i][j + 1], arr[i][j + 2], arr[i][j + 3]);
            printf(" ------    ------    ------    ------\n");
        }
    }
    if (n == 5){
        for (int i = 0; i < n; i++){
            printf(" ------    ------    ------    ------    ------\n");
            printf("| %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  | \n", arr[i][j], arr[i][j + 1], arr[i][j + 2], arr[i][j + 3], arr[i][j + 4]);
            printf(" ------    ------    ------    ------    ------\n");
        }
    }
    if (n == 6){
        for (int i = 0; i < n; i++){
            printf(" ------    ------    ------    ------    ------    ------\n");
            printf("| %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  | \n", arr[i][j], arr[i][j + 1], arr[i][j + 2], arr[i][j + 3], arr[i][j + 4], arr[i][j + 5]);
            printf(" ------    ------    ------    ------    ------    ------\n");
        }
    }
    if (n == 7){
        for (int i = 0; i < n; i++){
            printf(" ------    ------    ------    ------    ------    ------    ------\n");
            printf("| %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  | \n", arr[i][j], arr[i][j + 1], arr[i][j + 2], arr[i][j + 3], arr[i][j + 4], arr[i][j + 5], arr[i][j + 6]);
            printf(" ------    ------    ------    ------    ------    ------    ------\n");
        }
    }
    if (n == 8){
        for (int i = 0; i < n; i++){
            printf(" ------    ------    ------    ------    ------    ------    ------    ------\n");
            printf("| %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  | \n", arr[i][j], arr[i][j + 1], arr[i][j + 2], arr[i][j + 3], arr[i][j + 4], arr[i][j + 5], arr[i][j + 6], arr[i][j + 7]);
            printf(" ------    ------    ------    ------    ------    ------    ------    ------\n");
        }
    }
    if (n == 9){
        for (int i = 0; i < n; i++){
            printf(" ------    ------    ------    ------    ------    ------    ------    ------    ------\n");
            printf("| %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  | \n", arr[i][j], arr[i][j + 1], arr[i][j + 2], arr[i][j + 3], arr[i][j + 4], arr[i][j + 5], arr[i][j + 6], arr[i][j + 7],arr[i][j+8]);
            printf(" ------    ------    ------    ------    ------    ------    ------    ------    ------\n");
        }
    }
    if (n == 10){
        for (int i = 0; i < n; i++){
            printf(" ------    ------    ------    ------    ------    ------    ------    ------    ------    ------\n");
            printf("| %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  |  | %3d  | \n", arr[i][j], arr[i][j + 1], arr[i][j + 2], arr[i][j + 3], arr[i][j + 4], arr[i][j + 5], arr[i][j + 6], arr[i][j + 7],arr[i][j+8],arr[i][j+9]);
            printf(" ------    ------    ------    ------    ------    ------    ------    ------    ------    ------\n");
        }
    }
}

void move1(int *p, int arr[][n], int k){
    int arr1[n][n], num = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr1[i][j] = num++;
        }
    }
    arr1[n - 1][n - 1] = 0;
    int a, b, c, d, s1 = 0, s2 = 0;
    int *p1, *p2;
    while (true){
        printf("\n   0-bo'sh joy\n");
        structure1(arr);
        printf("surishlar:%d", s2);
        printf("\nqaysi sonni surmoqchisiz: ");
        scanf("%d", &k);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (arr[i][j] == k){
                    a = i;
                    b = j;
                    p1 = &arr[i][j];
                }
                if (arr[i][j] == 0){
                    c = i;
                    d = j;
                    p2 = &arr[i][j];
                }
            }
        }
        if ((a == c && (d == b + 1 || d == b - 1)) || (b == d && (c == a + 1 || c == a - 1))){
            *p1 = *p1 + *p2;
            *p2 = *p1 - *p2;
            *p1 = *p1 - *p2;
            s2++;
        }
        else{
            printf("%d bu raqamni surib bo'lmaydi:\n", k);
            for (int i = 0; i < 100000; i++){
                for (int j = 0; j < 50000; j++){
                }
            }
            system("clear");
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (arr[i][j] == arr1[i][j]){
                    s1++;
                }
            }
        }
        if (s1 == n * n){
            system("clear");
            structure1(arr);
            printf("surishlar soni %d ta", s2);
            printf("\n Yutdingiz:\n");
            break;
        }
        s1 = 0;
        system("clear");
    }
}
int main(){
    srand(time(0));
    while (1){
        printf("o'yin qoidasi:\n");
        printf("shu holat berilgan bolsin       bunday holga kelgazish kk\n");
        printf("      0   4   5   8                    1   2   3   4\n");
        printf("      1   2   7   3                    5   6   7   8\n");
        printf("      6   9  11  13                    9  10  11  12\n");
        printf("     10  14  15  12                   13  14  15   0\n");
        printf("\nqiyinlik darajasini kiriting [3...10]-->");
        scanf("%d", &n);
        if (3 <= n && n <= 10){
            system("clear");
            break;
        }
        else
            system("clear");
    }
    int arr[n][n], k;
    filll(&arr[0][0]);
    move1(&arr[0][0], arr, k);
    return 0;
}