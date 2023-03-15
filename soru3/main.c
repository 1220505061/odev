/*int search(int D[], int N, int sayi){
	int i = 0;					//1
	while(i<N){			       //2
	if(D[i]==sayi) break;	             //3
	i++;					//4
	}
	if(i<N) return i;				//5
	else return -1;				//6
	/* 1. = 1
	   2. = n+1
	   3. = 1
	   4. = 1
	   5. = 1
	   6. = 1
	   toplam = n+6 T(n)=O(n) 
}


Bu kod parçası, basit bir doğrusal arama algoritmasıdır. Verilen bir dizi içinde, aranan elemanın bulunup bulunmadığını kontrol eder ve varsa elemanın dizindeki indisini, yoksa -1 değerini geri döndürür.

a) En iyi durum: Aranan eleman dizinin ilk elemanıdır. Bu durumda döngü sadece bir kez çalışacak ve aranan elemanın indisini bulacaktır. Bu nedenle, en iyi durumda algoritmanın çalışma zamanı sabit bir zamandır (O(1)).

b) Ortalama durum: Aranan elemanın dizide bulunma olasılığı, dizinin boyutuna ve dizinin içindeki elemanların dağılımına bağlıdır. Eğer eleman dizi içinde bulunuyorsa, doğrusal arama, elemanı bulana kadar ortalama olarak N/2 kez çalışacaktır. Bu nedenle, ortalama durumda algoritmanın çalışma zamanı O(N/2) = O(N) olacaktır.

c) En kötü durum: Aranan eleman dizinin son elemanıdır veya dizide hiç bulunmuyordur. Bu durumlarda, döngü en kötü ihtimalle tüm diziyi tarayacak ve aranan eleman bulunamayacaktır. Bu nedenle, en kötü durumda algoritmanın çalışma zamanı O(N) olacaktır.

Fatih ÇİÇEK - 1220505061 */

