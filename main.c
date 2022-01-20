#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 0;
    int B = 0;
    int A1 = 0;
    int B1 = 0;
    int i = 0;
    printf("Ember A: %d",A);
    printf("\nEmber B: %d",B);

    while ((A != 4) || (B != 4))
    {
        printf("\n");
        printf("\n1 = Isi penuh A");
        printf("\n2 = Isi penuh B");
        printf("\n3 = Tuang isi A ke B");
        printf("\n4 = Tuang isi B ke A");
        printf("\n5 = Kosongkan A");
        printf("\n6 = Kosongkan B");
        printf("\n");
        printf("\nLangkah (pilih dengan angka): ");

        scanf("%d", &i);

        if(i == 1){
            A = 3;
        }
        else if (i == 2){
            B = 5;
        }
        else if (i == 3) {
            A1 = max(A+B-5, 0);
            B = min(5, A+B);
            A = A1;
        }
        else if (i == 4){
            B1 = max((A+B-3), 0);
            A = min(3, (A+B));
            B = B1;
        }

        else if (i == 5){
            A = 0;
        }
        else if (i == 6){
            B = 0;
        }
        printf("\nNilai A: %d",A);
        printf("\nNilai B: %d",B);
    };
}

max(a,b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

min(a,b){
    if (a < b){
        return a;
    }
    else{
        return b;
    }
}
