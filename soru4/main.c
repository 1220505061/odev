#include <stdio.h>

   struct Ogrenci {
   char ad[50];
   char soyad[50];
   int no;
   char sokak[50];
   char ilce[50];
   char sehir[50];
};
   
   int main() {
   struct Ogrenci ogrenciler[5];


	 for (int a = 0; a < 5; a++) 
   {
      printf("Öðrenci %d bilgilerini girin:\n", a+1);
      
	  printf("Ad: ");
      scanf("%s", ogrenciler[a].ad);
      
	  printf("Soyad: ");
      scanf("%s", ogrenciler[a].soyad);
     
	  printf("No: ");
      scanf("%d", &ogrenciler[a].no);
     
	  printf("Sokak: ");
      scanf("%s", ogrenciler[a].sokak);
     
	  printf("Ýlçe: ");
      scanf("%s", ogrenciler[a].ilce);
     
	  printf("Þehir: ");
      scanf("%s", ogrenciler[a].sehir);
   }

   
     printf("\n");
     for (int a = 0; a < 5; a++)
    {
     
	  printf("Öðrenci %d bilgileri:\n", a+1);
     
	  printf("Ad: %s\n", ogrenciler[a].ad);
     
	  printf("Soyad: %s\n", ogrenciler[a].soyad);
     
	  printf("No: %d\n", ogrenciler[a].no);
     
	  printf("Adres: %s, %s, %s\n", ogrenciler[a].sokak, ogrenciler[a].ilce, ogrenciler[a].sehir);
     
	  printf("\n");
   }

   return 0;
}

