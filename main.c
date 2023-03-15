#include <stdio.h>
#include <stdlib.h>






#define adres_uzunluk 250 // ev adresi için maksimum karakter uzunluðu belirlendi.

struct ogr{//struct açýldý ve allta öðrenci bilgileri için gerekli veri tipleri ve isimler belirlendi.
  char isim[30]; 
  char soyisim[30];
  int num;
  char ev_adres[adres_uzunluk];
};

int main() {
 
  struct ogr ogrencibilgileri[5];//5 öðrenci için struct.

  
  for (int i = 0; i < 5; i++) {// 5 öðrencinin bilgilerinin tek tek girilmesi çin açýlmýþ olan for döngüsü.
    printf("%d. Ogrencinin ismi: ", i+1);
    scanf("%s", ogrencibilgileri[i].isim); // Öðrecinin ismi girilir

    printf("%d .Ogrencinin soyismi: ", i+1);
    scanf("%s", ogrencibilgileri[i].soyisim);// Öðrencinin soyismi girilir.

    printf("%d. Ogrencinin  numarasi: ", i+1);
    scanf("%d", &ogrencibilgileri[i].num); // Öðrencinin numarasý girilir.

    printf("%d. Ogrencinin ev adresi: ", i+1);// Öðrencinin adresi girilir.
    getchar(); // scanf kullanýmýnda boþluktan sonrasý görülmediði için kullanýlmýþtýr.
    fgets(ogrencibilgileri[i].ev_adres, adres_uzunluk, stdin);
    
  }
  for (int i = 0; i < 5; i++) {// Bu döngüde ise üstte girilmiþ olan öðrenci bilgileri sýrayla 5 öðrenci için ekrana yazdýrýlýr.
    printf("%d. Ogrenci \n", i+1);
    printf("Isim: %s\n", ogrencibilgileri[i].isim);
    printf("Soyisim: %s\n", ogrencibilgileri[i].soyisim);
    printf("Numara: %d\n", ogrencibilgileri[i].num);
    printf("Adres: %s\n\n", ogrencibilgileri[i].ev_adres);
  }
  

  return 0;












}
