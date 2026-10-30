# C Programlama Ogreniyorum

Bu depo, C programlama dilinin temelinden ileri konularina kadar adimli olarak
ogrencilerle calisabilmek icin hazirlandi. Her ders kendi kaynak dosyasi
icinde tek basina derlenebilen bir program icerir. Ornekler kisa tutuldu;
kodlar calistirildikca C'nin nasil dusundugunu, bellegi nasil kullandigini
ve karakterlerden dosyalara kadar hangi araca ne zaman basvurulmasi
gerektigini gozlemlemek kolaylasir.

Kursta Turkce bir egitim akisi izlenmesine ragmen kaynak koddaki yorumlar ve
ciktilar Ingilizce tutulmustur. Bu sayede kodun standart C toplulugundaki
kullanima daha yakin kalmasi ve sonraki dil belgelerinde anlatilan kavramlarin
kodla birlikte eslesen ifadelere sahip olmasi hedeflenmistir.

## C ile Calismaya Nereden Baslanir?

C kaynak kodlari metin dosyalarinda yazilir ve derleyici tarafindan makine
koduna donusturulur. En kucuk bir program da mutlaka `main` fonksiyonunu
barindirir. Calisma yaparken asagidaki hedefleri sirasiyla takip etmek en
verimli yontemdir:

1. Kaynak kodu okumadan once programin ekrana ne yazmasi beklenir tahmin et.
2. Programi derle ve beklenen sonuc ile gercek ciktiyi karsilastir.
3. Degerleri degistir, yeni girdiler dene ve hatalari gozlemle.
4. Kodu yeniden yazmadan once C derleyicisinin cagirdigi satirlari incele.
5. Her konudan sonra kucuk bir egzersiz uzerinde ayni yapiyi uygula.

Derleyici hatalarinda ilk satirdaki dosya ve satir numarasini kontrol etmek,
uyariyi okumadan kodu rastgele degistirmekten daha cok zaman kazandirir.
Programlari derlerken `-Wall -Wextra -Wpedantic` uyari bayraklari aciktir.

## Derleyici Kurulumu ve Derleme

Linux veya macOS tarafinda GCC veya Clang genellikle sistem paket yoneticisi
ile kurulabilir. Windows'ta en pratik seceneklerden biri MSYS2 ortaminda
GCC kullanmaktir. Derleyici kurulduktan sonra terminalde surumunu kontrol
edebilirsin:

```sh
gcc --version
```

Tum projeyi derlemek icin:

```sh
make
```

Tek bir ders derlemek ve calistirmak istersen:

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic lesson_14_loops.c -o lesson_14_loops
./lesson_14_loops
```

Windows'ta terminal urunleri `.exe` uzantili olur. Proje icindeki Makefile hem
ders dosyalarini hem de pratik programlarini derler.

## Dersler ve Konu Ozeti

### Temel Konsol Programlari

#### 1. [printf ile cikti](lesson_01_printf.c)
`printf` fonksiyonunun `%d`, `%u`, `%f`, `%c` ve `%s` gibi donusum belirleyicileri
ile farkli veri tiplerini ekrana nasil yazdirdigini ogren.

#### 2. [Kacis dizileri](lesson_02_escape_sequences.c)
Satir sonu, sekme, tirnak ve ters egik cizgi karakterlerini metinlerin icine
guvenli sekilde yerlestirmeyi calis. Kacis dizilerinin kaynak kodda yazilip
ekrana baska karakterler olarak verilmesini gozlemle.

#### 3. [Program yapisi ve temel degiskenler](lesson_03_basics.c)
`main`, `#include`, degisken tanimi, turevli veri tipleri ve basit
`printf`/`scanf` akisi gibi C programinin temel iskeletini incele.

#### 4. [Atama operatorleri](lesson_04_assignment.c)
`=`, `+=`, `-=`, `*=`, `/=` ve `%=` operatorlerinin mevcut bir degere nasil
yeni bir deger atadigini ve islemleri kisaltip kisaltmadigini gor.

#### 5. [Operatorler ve tur donusumu](lesson_05_operators.c)
Aritmetik, karsilastirma ve mantiksal islemlerin yaninda sabitler,
`sizeof` ve `double` ile `int` arasindaki otomatik tur donusumunu incele.

#### 6. [scanf ile guvenli giris](lesson_06_scanf.c)
Kullanici girdilerini alirken `scanf` fonksiyonunun donus degerini kontrol et.
Beklenen veriyi alamayan programa garbage veya tutarsiz veri uretmesini
engellemek icin yinelemeli giris, temizleme ve hata ciktisini uygula.

#### 7. [Karakter girisi](lesson_07_character_input.c)
`getchar` ve karakter siniflandirma fonksiyonlarini kullanarak tekli girdileri
okumayi, alfabetik karakterleri ayirmayi ve satir sonunu kontrol etmeyi calis.

#### 8. [Artirma ve azaltma](lesson_08_increment_decrement.c)
`++` ve `--` operatorlerinde on ek ile son ek arasindaki farki ogren. Son ek
operatorunun degerin kullanildiktan sonra degistirdigini gozlemle.

#### 9. [Iliskisel operatorler](lesson_09_relational.c)
`==`, `!=`, `<`, `<=`, `>` ve `>=` karsilastirmalarinin sonucu olan `0` ve
`1` degerlerini kullanarak iki sayiyi karsilastirmayi uygula.

#### 10. [Mantiksal operatorler](lesson_10_logical.c)
`&&`, `||` ve `!` operatorleri ile birden fazla kosulu birlestir. Kisa devre
degerlendirme sayesinde sonucu belirlemek icin gerideki ifadelerin nasil
calistirilmadigini gozlemle.

### Kararlar ve Donguler

#### 11. [Karar yapilari](lesson_11_decisions.c)
`if`, `else if`, `else` ve `switch` yapilarinin hangi kosullarda calistigini
karsilastir. Bir ders puanini birden fazla araliga ayirmak ve harf notuna
donusturmek iyi bir alistirmadir.

#### 12. [Operator onceligi](lesson_12_precedence.c)
C'deki islemlerin hangi sirayla yapildigini parantez kullanarak degistir.
Ayni ifadeyi parantezli ve parantezsiz yazip sonuclari karsilastir.

#### 13. [Tur donusumu](lesson_13_casting.c)
C'nin otomatik tur degistirmesini ve acik `(double)` tur donusumu arasindaki
farki incele. Tam sayi bolmesinin onceden neden veri kaybettigini gozlemle.

#### 14. [for, while ve do/while donguleri](lesson_14_loops.c)
Belirli sayida tekrar eden bir islemde `for`, kosula bagli tekrar eden bir
islemde `while` ve en az bir kez calismasi gereken islemde `do/while`
dongusunu kullan.

#### 15. [Ic ice kararlar](lesson_15_nested_decisions.c)
Bir kosulun sonucunu yeni bir kosulla birlestir. Kullanici girisi ve kapali
alan kurali gibi durumlarda dis ve ic kararlarin akisini cizerek incele.

#### 16. [Uclu operator](lesson_16_ternary.c)
`kosul ? dogru_ifade : yanlis_ifade` yapisinin basit bir if/else yerine
nasil kullanildigini ve okunabilirligi nasil etkiledigini ogrenen ornekleri
incele.

### Diziler ve Fonksiyonlar

#### 17. [Diziler ve karakter dizileri](lesson_17_arrays_strings.c)
Ayni tipteki verileri ardarda saklayan dizileri ve C'deki metinlerin sonuna
eklenen null karakterini `\0` ile incele.

#### 18. [Ic ice donguler](lesson_18_nested_loops.c)
Carpim tablosu, matris gezme ve kalip olusturma gibi satir-sutun yapilarini
iki dongu kullanarak olustur.

#### 19. [goto ve etiketler](lesson_19_goto.c)
Etiketli bir `goto` iceren kucuk bir akisi calistir; ayni davranisi daha sonra
`break` veya fonksiyon kullanarak nasil daha okunur hale getirebilecegini
tartis.

#### 20. [Bit duzeyi islemler](lesson_20_bitwise.c)
`&`, `|`, `^`, `~`, `<<` ve `>>` operatorleri ile bitleri islemeyi ogrenen
ornekleri calistir. Bitmask kavramini ve bayrak acma kapama kullanimini
incele.

#### 21. [Dizide arama](lesson_21_array_search.c)
Bir dizideki hedef degeri en basta baslayarak sirayla karsilastiran dogrusal
arama algoritmasini uygula.

#### 22. [Dizi siralama](lesson_22_array_sort.c)
Secmeli siralama ile en kucuk elemani bulup dizinin basina aktararak diziyi
siralamayi calis.

#### 23. [Matrisler](lesson_23_matrix.c)
Iki boyutlu dizilerin satir ve sutun indisleriyle nasil tanimlandigini,
hafizada satir satir sirasini takip ettigini ve dongulerle nasil gezildigini
goster.

#### 24. [Fonksiyonlar, kapsam ve recursion](lesson_24_functions.c)
Fonksiyon bildirimi, tanimi, parametre aktarimi ve yerel degiskenlerin kapsamini
incele. Recursion ile bir fonksiyonun kendini cagirmasini ve tekrar disina
cikmasini adim adim gozlemle.

#### 25. [fgets ile guvenli metin girisi](lesson_25_string_input.c)
Metin girdilerini sinirli dizilerde almak icin `fgets` kullan. Satir sonunu
temizle ve karakter dizisinin sonuna mutlaka `\0` yazildigindan emin ol.

### Fonksiyonlarla Veri ve Islemler

#### 26. [Isaretciler](lesson_26_pointers.c)
Bir degiskenin adresini, isaretcinin tuttuğunu adresi ve isaretciye
dereference operatoruyle erisimi calis.

#### 27. [Metin kutuphane fonksiyonlari](lesson_27_string_functions.c)
`strlen`, `strcpy`, `strcat` ve `strcmp` fonksiyonlarinin ne yaptigini ve
uzunluk-sinirli fonksiyonlarin neden daha guvenli oldugunu incele.

#### 28. [Metin dizileri](lesson_28_string_arrays.c)
Birden fazla metni iki boyutlu karakter dizisi veya isaretci dizisi ile
saklamayi karsilastir.

#### 29. [Isaretci ve diziler arasinda iliski](lesson_29_pointer_arrays.c)
Dizi adinin ilk elemanın adresi olarak degerlendirilmesini ve indeksleme ile
isaretci aritmetiginin farkli yazimlar halinde ayni veriye neden ulasir oldugunu
incele.

#### 30. [Isaretci parametreleri](lesson_30_pointer_parameters.c)
Fonksiyonlarin `int *` gibi parametreler alarak cagiran fonksiyonun degiskenini
degistirebilmesini deger aktarmaktan farkli bir goruntuyle calis.

#### 31. [const ve isaretciler](lesson_31_const.c)
`const int *`, `int * const` ve `const int * const` ifadeleri arasindaki farki
isaretcinin adresiyle mi yoksa adresin hedefiyle mi degistirilebildigini
kontrol ederek ogren.

#### 32. [Dinamik bellek](lesson_32_memory.c)
Calisma zamani bellek ayirmak icin `malloc`, `calloc`, `realloc` ve `free`
fonksiyonlarini kullan. Ayirma basarisi, bellek sizintisi ve dangling pointer
risklerini kontrol et.

### Yapilar ve Gelismis Bellek Kullanimi

#### 33. [Yapilar, enum, union ve typedef](lesson_33_structures.c)
Ilgili veri alanlarini tek bir veri tipi altinda gruplandirmayi; enum ile
sabitleri adlandirmayi; union ile ortak depolama alanini ve typedef ile
kisa tip adlarini ogren.

#### 34. [Cift isaretci](lesson_34_double_pointers.c)
Bir adresin adresini temsil eden `T **` ifadesini ve bunun isaretcinin
kendisini degistiren fonksiyonlarda neden kullanildigini calis.

#### 35. [Fonksiyona dizi aktarimi](lesson_35_array_parameters.c)
C'de dizi parametrelerinin gercekten bir kopya degil, dizinin ilk elemanina
giden isaretci olarak donustugunu; boyutun fonksiyona ayrı aktarilmasi
gerektigini incele.

#### 36. [Bit alanlari](lesson_36_bit_fields.c)
Bir yapinin alanlarina kac bit ayrildigini belirle. Bit alanlarinin bit paketleme
ve kucuk bayrak gruplari icin nasil kullanildigini, platform bagimliliginin
nasil etkiledigini tartis.

#### 37. [Ic ice yapilar](lesson_37_nested_structures.c)
Bir yapinin alanini baska bir yapidan olustur. Nokta operatoru ile alanlara
nasıl ulasildigini ve yasam dongusunu cizerek oku.

#### 38. [Kendini referans eden yapilar](lesson_38_linked_node.c)
Bir yapi icinde kendi tipini iceren bir alan tanimlanamazken kendini isaretci
olarak icerme neden kullanisli oldugunu ve bunu tek dugumlu bir yapi ile
incele.

#### 39. [Bagli liste](lesson_39_linked_list.c)
Dinamik olarak olusturulan dugumleri `next` alanlariyla birlestir. Liste
olusturma, gezme, silme ve ayirilan butun dugumleri serbest birakma islemlerini
kodla takip et.

#### 40. [Fonksiyon isaretcileri ve qsort](lesson_40_advanced.c)
Fonksiyonun adresini tutan isaretci tanimi yap; davranisi fonksiyona parametre
olarak gonder ve standart kutuphanedeki `qsort` ile karsilastirmali siralama
gerceklestir.

### Dosyalar ve Ileri C Konulari

#### 41. [Metin dosyasi islemleri](lesson_41_files.c)
`fopen`, `fprintf`, `fscanf`, `fgets` ve `fclose` fonksiyonlarini kullanarak
metin dosyasina yazma ve dosyadan okuma yapisini incele.

#### 42. [Ikili dosyalar](lesson_42_binary_files.c)
`fwrite` ve `fread` ile veriyi ikili dosya olarak kaydet. Aynı yapiyi tekrar
okurken dosyanin sayisal degerleri metin olarak degil bayt olarak sakladigini
gozlemle.

#### 43. [Dosyada rasgele erisim](lesson_43_random_access_files.c)
`fseek` ve `ftell` fonksiyonlariyla dosya imlecini belirli konumlara tasiyarak
bellek tarzi bir kayit erisimi gerceklestir.

#### 44. [Komut satiri argumanlari](lesson_44_command_line.c)
Program baslatilirken verilen `argc` ve `argv` degerlerini okuyarak
komut satirindan dosya adi veya sayi gibi girdileri isle.

#### 45. [On islemci](lesson_45_preprocessor.c)
`#include`, `#define`, `#ifdef`, `#if` ve `#endif` direktiflerinin derlemeden
once kaynak kodu nasil etkiledigini calis.

#### 46. [Birden fazla dosyaya ayrilmis program](lesson_46_multiple_files.c)
Header ve kaynak dosyalarina ayrilmis kodun derleme bagimliligini, bildirimleri
ve tanimlari incele. Include guard'nin tekrarli dahil etmeyi engellemesini gör.

#### 47. [Hata yonetimi](lesson_47_error_handling.c)
`errno`, sayisal donusum fonksiyonlari ve fonksiyon donus degerleri ile hata
durumunu nasil tespit edip anlamli bir mesajla bildirilecegini ogrenen ornekleri
incele.

#### 48. [Sayisal sinirlar](lesson_48_limits.c)
`limits.h`, `float.h` ve standart tiplerin tasma sinirlari ile kayan nokta
karakteristiklerini incele.

#### 49. [Degisken sayida arguman](lesson_49_variadic.c)
`stdarg.h` makrolari ile derleme zamaninda sayisi sabit olmayan fonksiyon
parametrelerinin nasil alindigini `va_list`, `va_start`, `va_arg` ve `va_end`
ile calis.

#### 50. [Tam C modulu tasarimi](lesson_50_complete_module.c)
Birden fazla C ozelligini tek bir modül icinde bir araya getirerek veri
turunu, API sinirini, hata kontrolunu ve temiz bellek kullanimini birlikte
tasarla.

## Uygulama Programlari

Kurs ilerledikce su bagimsiz alistirmalarla bilgi tekrar edilmelidir:

1. [Dort islem hesap makinesi](program_01_calculator.c)
2. [Celsius/Fahrenheit donusturucu](program_02_temperature_converter.c)
3. [Sayi tahmin oyunu](program_03_number_guess.c)
4. [Not ortalamasi ve harf notu hesaplayici](program_04_grade_calculator.c)
5. [Carpim tablosu](program_05_multiplication_table.c)
6. [Palindrom kontrolu](program_06_palindrome.c)
7. [Temel istatistikler](program_07_statistics.c)
8. [Yapi kullanan envanter kaydi](program_08_inventory.c)
9. [Metin dosyali kisi kaydi](program_09_file_contact.c)
10. [Bagli listeli yapilacaklar uygulamasi](program_10_linked_todo.c)

Her programi derlerken olasi girdileri, beklenen ciktiyi ve hata durumunu
tanımlayın:

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic program_01_calculator.c -o calculator
./calculator
```

## Nereden Baslamali?

`lesson_01_printf.c` dosyasini acip `main` fonksiyonuna odaklanarak basla.
Sonra dosyayi kucuk degisikliklerle tekrar derle. Konular sirasina uymak
onerilir cunku isaretciler ve dinamik bellek gibi sonraki dersler diziler,
fonksiyonlar ve yapilar hakkinda edinilen bilgiyi kullaniyor.

Derslerin dokuzuncusu kadar kolay ilerliyormuş gibi hissedersen ara vermeden
sonraki derse gecmek yerine kendi orneklerini yaz, bir hata al ve derleyicinin
mesajini satirla eslestir. C'de uzun sureli ogrenme, kodu calistirmak kadar
hatayi okumakla da saglanir.
