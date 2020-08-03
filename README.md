# Poligon Koordinatları Kontrol Hesabı

**Amaç;**
=========

Devlet yollarında kullanılan poligon noktaları koordinatlarının doğruluk kontrolü için kullanılır.

**Kullanım;**
=============

**Çalıştırıldığında;**

Ölçüm kontrol değerleri ile (Sağa_Değer (Kont_Ölç), Yukarı_Değer (Kont_Ölç), h_Elipsoit (Kont_Ölç)), gerçek koordinat değerlerinin (Sağa_Değer (Ger_Koord), Yukarı_Değer (Ger_Koord), h_Elipsoit (Ger_Koord)) değerlerini girdikten sonra KONTROL değerlerini elde edebilirsiniz.

Yazılım içerisinde izdüşüm koordinat farklarının ortalaması Büyük Ölçekli Harita ve Harita Bilgileri Üretim Yönetmeliği (BÖHHBÜY) madde 88′de belirtildiği üzere ...> 7cm den büyük olamaz. Hesaplamada bunun kontrolü kullanıcının uyarılması ile sağlanmaktadır. Aynı zamanda Koordinat değer farklarının dx, dy ve dh değerlerinin yönetmelikteki madde 88 ışığında ...> 10cm değerini geçmemesi gerekmektedir. Geçmesi sonucunda yazılım kullanıcıyı yine uyarmaktadır.
