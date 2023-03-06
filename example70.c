#include <stdio.h>
#define SIZE 10

int evenElements(int arr[]); 
void copyRev(int arr[], int rev[]);
void printRev(int rev[]) {
    int i; 
    printf("The reverse array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%5d",rev[i]);
    }
}

int main() {
    // 1) deðiþkenleri tanýmla
    int array[10], reverseArray[10], i, even=0;
    
    printf("Enter 10 numbers between 1 and 100\n");
    // 2) 1-100 arasýnda 10 sayý oku, sayý bu aralýkta deðilse hata ver ve tekrar girdi al
    for (i = 0; i<SIZE; i++) {
        printf("\nWrite the %d. number: ", i+1);
        scanf("%d",&array[i]);
        if (array[i]<1 || array[i]>100) {
            printf("\n\nYour input is out of the rangei please try again\n\n");
            i -= 1; // ayný array elemanýný deðiþtirmek için i'yi azalttýk, bu sayede döngü baþlayýnca otomatik artýþý ayný sayýya karþýlýk gelmesini saðlayacak.
        }
    }
    
    // 3) evenElements i çaðýrýp sonuçlarý yazdýr
    even = evenElements(array);
    
    printf("\nNumber of even elements: %d\n", even);
    
    // printf("\nNumber of even elemnts: %d\n", evenElements(array)); // þeklinde de çalýþýr
    
    // 4) copyRev fonksiyonunu kullan
    copyRev(array, reverseArray);
    
    // 5) printRev kullarak ters halini yazdýr
    printRev(reverseArray);
    
    return 0;
}

// 6) evenElements fonksiyonunu yazýn
int evenElements(int arr[]) {
    int i, even=0;
    for (i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            even += 1;
        }
    }
    return even;
}

// 7) copyRev fonksiyonunu yazýn
void copyRev(int arr[], int rev[]) {
    int i, k=0;
    for (i = SIZE; i > 0; i--) {
        rev[k] = arr[i-1];
        k+=1;
    }
}
