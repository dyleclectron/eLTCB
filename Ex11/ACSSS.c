#include <stdio.h>
#include <stdlib.h>

void* sieve_prime() {
    int *prime = (int*)calloc(1000000, sizeof(int));
    if (prime == NULL) {
        return NULL;
    }
    for (int i = 2; i <= 1000000; i++) prime[i] = 1;
    for (int i = 2; i * i <= 1000000; i++) {
        while (!prime[i]) i++;
        for(int j=i*i;j<=1000000;j+=i ) prime[j]=0;
    }
    return prime;
}

int unit(int n, int m, int a[1001][1001]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (i == j && a[i][j] != 1)
                return 0;
            if (i != j && a[i][j] != 0)
                return 0;
        }
    return 1;
}

int symmetric(int n, int m, int a[1001][1001]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (a[i][j] != a[j][i])
                return 0;
        }
    return 1;
}

void main() {  
    int *prime = (int*)sieve_prime(); 
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100][100], isPrime[1001], is = 0, sumPrime = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            if (prime[a[i][j]]) {
                isPrime[is++] = a[i][j];
                sumPrime += a[i][j];
            }
        }
    free(prime);
    printf("\nMa tran co %d so nguyen to la :\n", is);
    for (int i = 0; i < is; i++)
        printf("%d ", isPrime[i]);
    printf("\nTong cac so nguyen to la: %d", sumPrime);
    int min = a[0][0], max = a[0][0], min_i = 0, min_j = 0, max_i = 0, max_j = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                min_i = i;
                min_j = j;
            }
            if (a[i][j] > max) {
                max = a[i][j];
                max_i = i;
                max_j = j;
            }
        }
    printf("\nPhan tu nho nhat la %d tai vi tri [%d][%d]", min, min_i, min_j);
    printf("\nPhan tu lon nhat la %d tai vi tri [%d][%d]", max, max_i, max_j);
    if (m != n) {
        printf("\nMa tran khong phai la ma tran don vi");
        printf("\nMa tran khong phai la ma tran doi xung");
    } else {
        if (unit(n, m, a))
            printf("\nMa tran la ma tran don vi");
        else
            printf("\nMa tran khong phai la ma tran don vi");

        if (symmetric(n, m, a))
            printf("\nMa tran la ma tran doi xung");
        else
            printf("\nMa tran khong phai la ma tran doi xung");
        float sum = 0;
        for (int i = 0; i < n; i++) sum += a[i][i];
        printf("\nTong trung binh cac phan tu tren duong cheo chinh la: %.2f", sum / n);
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m - 1; j++)
            for (int k = j + 1; k < m; k++)
                if (a[i][j] > a[i][k]) {
                    int tmp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = tmp;
                }
    printf("\nMa tran sau khi sap xep hang 2 la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}