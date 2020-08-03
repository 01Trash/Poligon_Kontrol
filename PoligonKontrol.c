#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double saga_Deger_K, yukari_Deger_K, h_Elipsoit_K, saga_Deger_G, yukari_Deger_G, h_Elipsoit_G;
	double dx, dy, dh, ds;

		/// Bilinenleri isteyelim.
	// Poligon noktasının ölçüm koordinat değerleri; Saga_Deger(Kont_Ölç), Yukarı_Deger(Kont_Ölç), h_Elipsoit(Kont_Ölç)
	printf("Saga_Deger(Kont_Ölç) değerini giriniz: ");
	scanf("%lf", &saga_Deger_K);
	printf("Yukarı_Deger(Kont_Ölç) değerini giriniz: ");
	scanf("%lf", &yukari_Deger_K);
	printf("h_Elipsoit(Kont_Ölç) değerini giriniz: ");
	scanf("%lf", &h_Elipsoit_K);
	// Poligon noktasının gerçek koordinat değerleri; Saga_Deger(Ger_Koord), Yukarı_Deger(Ger_Koord), h_Elipsoit(Ger_Koord)
	printf("Saga_Deger(Ger_Koord) değerini giriniz: ");
	scanf("%lf", &saga_Deger_G);
	printf("Yukarı_Deger(Ger_Koord) değerini giriniz: ");
	scanf("%lf", &yukari_Deger_G);
	printf("h_Elipsoit(Ger_Koord) değerini giriniz: ");
	scanf("%lf", &h_Elipsoit_G);

		/// Bilinmeyenlerin hesaplanması.
	printf("\n\t=== Hesap sonuçları! === \n");
	/* Koordinat sağa değerlerin kontrolü; dx
	dx = saga_Deger_K - saga_Deger_G; */
	dx = saga_Deger_K - saga_Deger_G;
	printf("Koordinat sağa değerlerin kontrol değeri: %f\n", dx);
	/* Koordinat yukarı değerlerin kontrolü; dy
	dy = yukari_Deger_K - yukari_Deger_G; */
	dy = yukari_Deger_K - yukari_Deger_G;
	printf("Koordinat yukarı değerlerin kontrol değeri: %f\n", dy);
	/* Koordinat elipsoit değerlerin kontrolü; dh
	dh = h_Elipsoit_K - h_Elipsoit_G; */
	dh = h_Elipsoit_K - h_Elipsoit_G;
	printf("Koordinat elipsoit değerlerin kontrol değeri: %f\n", dh);
	/* İzdüşüm koordinat farklarının kontrolü; ds
	ds = sqrt(dy^2 + dx^2); */
	ds = pow((pow(dy, 2) + pow(dx, 2)), 0.5);
	printf("İzdüşüm koordinat farklarının kontrol değeri: %f\n", ds);
	if (ds < 7)
	{
		printf("Kontrol doğru bir şekilde sağlanmıştır. \n");
	}
	else
	{
		printf("Lütfen değerlerinizi kontrol ediniz! \n");
	}

	return 0;
}
