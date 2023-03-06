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
    // 1) de�i�kenleri tan�mla
    int array[10], reverseArray[10], i, even=0;
    
    printf("Enter 10 numbers between 1 and 100\n");
    // 2) 1-100 aras�nda 10 say� oku, say� bu aral�kta de�ilse hata ver ve tekrar girdi al
    for (i = 0; i<SIZE; i++) {
        printf("\nWrite the %d. number: ", i+1);
        scanf("%d",&array[i]);
        if (array[i]<1 || array[i]>100) {
            printf("\n\nYour input is out of the rangei please try again\n\n");
            i -= 1; // ayn� array eleman�n� de�i�tirmek i�in i'yi azaltt�k, bu sayede d�ng� ba�lay�nca otomatik art��� ayn� say�ya kar��l�k gelmesini sa�layacak.
        }
    }
    
    // 3) evenElements i �a��r�p sonu�lar� yazd�r
    even = evenElements(array);
    
    printf("\nNumber of even elements: %d\n", even);
    
    // printf("\nNumber of even elemnts: %d\n", evenElements(array)); // �eklinde de �al���r
    
    // 4) copyRev fonksiyonunu kullan
    copyRev(array, reverseArray);
    
    // 5) printRev kullarak ters halini yazd�r
    printRev(reverseArray);
    
    return 0;
}

// 6) evenElements fonksiyonunu yaz�n
int evenElements(int arr[]) {
    int i, even=0;
    for (i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            even += 1;
        }
    }
    return even;
}

// 7) copyRev fonksiyonunu yaz�n
void copyRev(int arr[], int rev[]) {
    int i, k=0;
    for (i = SIZE; i > 0; i--) {
        rev[k] = arr[i-1];
        k+=1;
    }
}
