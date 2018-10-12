#include <stdio.h>
#include <math.h>

int kiemtra(int ik) {
    while (ik < 0) {
        printf("do dai canh khong duoc nho hon 0\n");
        printf("nhap lai so do\n");
        scanf("%d", &ik);
    }
    return ik;
}

float tinhch(int ia, int ib) {
    return (float) sqrt(pow(ia, 2) + pow(ib, 2));
}

int main() {
    int ia, ib;
    printf("nhap so do hai canh ke cua tam giac vuong\n");
    printf("nhap vao so do canh thu nhat\n");
    scanf("%d", &ia);
    kiemtra(ia);
    printf("nhap vao so do canh thu hai\n");
    scanf("%d", &ib);
    kiemtra(ib);
    printf("chieu dai canh huyen cua tam giac la %.4f\n", tinhch(ia, ib));
    return 0;
}
