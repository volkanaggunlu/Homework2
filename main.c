#include <stdio.h>
#include <stdlib.h>






#define adres_uzunluk 250 // ev adresi i�in maksimum karakter uzunlu�u belirlendi.

struct ogr{//struct a��ld� ve allta ��renci bilgileri i�in gerekli veri tipleri ve isimler belirlendi.
  char isim[30]; 
  char soyisim[30];
  int num;
  char ev_adres[adres_uzunluk];
};

int main() {
 
  struct ogr ogrencibilgileri[5];//5 ��renci i�in struct.

  
  for (int i = 0; i < 5; i++) {// 5 ��rencinin bilgilerinin tek tek girilmesi �in a��lm�� olan for d�ng�s�.
    printf("%d. Ogrencinin ismi: ", i+1);
    scanf("%s", ogrencibilgileri[i].isim); // ��recinin ismi girilir

    printf("%d .Ogrencinin soyismi: ", i+1);
    scanf("%s", ogrencibilgileri[i].soyisim);// ��rencinin soyismi girilir.

    printf("%d. Ogrencinin  numarasi: ", i+1);
    scanf("%d", &ogrencibilgileri[i].num); // ��rencinin numaras� girilir.

    printf("%d. Ogrencinin ev adresi: ", i+1);// ��rencinin adresi girilir.
    getchar(); // scanf kullan�m�nda bo�luktan sonras� g�r�lmedi�i i�in kullan�lm��t�r.
    fgets(ogrencibilgileri[i].ev_adres, adres_uzunluk, stdin);
    
  }
  for (int i = 0; i < 5; i++) {// Bu d�ng�de ise �stte girilmi� olan ��renci bilgileri s�rayla 5 ��renci i�in ekrana yazd�r�l�r.
    printf("%d. Ogrenci \n", i+1);
    printf("Isim: %s\n", ogrencibilgileri[i].isim);
    printf("Soyisim: %s\n", ogrencibilgileri[i].soyisim);
    printf("Numara: %d\n", ogrencibilgileri[i].num);
    printf("Adres: %s\n\n", ogrencibilgileri[i].ev_adres);
  }
  

  return 0;












}
