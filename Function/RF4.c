#include <stdio.h>
#include <stdlib.h>

//�ki tamsay�n�n �arp�m�n� �arp�m sembol� kullanmadan ger�ekle�tiren rek�rsif fonksiyonunu C dilinde yaz�n�z.//

int rek_carpma(int N,int M);
int main(){
	int a,b;
	printf("carpilacak iki tamsayiyi giriniz:");
	scanf("%d%d",&a,&b);
	printf("%d x %d = %d\n",a,b,rek_carpma(a,b));
	return 0;
}
int rek_carpma(int N,int M){
	int sonuc;
	if(M==1){
		sonuc=N;
	}else{
		sonuc=N+rek_carpma(N,M-1);
	}
	return sonuc;
}
