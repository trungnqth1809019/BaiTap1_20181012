#include <stdio.h>
#include <math.h>

int kiemtra(int ik) {
    while (ik < 0) {
        printf("so do canh tam giac khong duoc nho hon 0\n");
        printf("nhap lai so do\n");
        scanf("%d", &ik);
    }
    return ik;
}

float tinhch(int ia, int ib) {
    return (float) sqrt(pow(ia, 2) + pow(ib, 2));
}

int nhapsodo(int is) {
    int in;
    printf("nhap vao so do canh thu %d\n", is);
    scanf("%d", &in);
    kiemtra(in);
    return in;
}

int main() {
    int ia, ib;
    printf("nhap so do hai canh ke cua tam giac vuong\n");
    ia = nhapsodo(1);
    ib = nhapsodo(2);
    printf("chieu dai canh huyen cua tam giac la %.4f\n", tinhch(ia, ib));
    return 0;
}
