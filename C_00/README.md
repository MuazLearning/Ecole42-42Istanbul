```sh
gcc *
./a.out
./a.out | wc -c
gcc -o main main.c 'a.out yerine main olarak çıktıyı verir.'
main './a.out yerinebu komut ile çıktıyı görebiliriz.'
Gcc -Wall -Werror -Wextra main.c
```
### Vim
#### Ayarlar
```sh
cd ~/
vi ~/.vimrc
'İçine aşağıdakileri yazıp ":wq" ile çık.'
syntax on
set number
set mouse=a
set ruler
set cursorline 
```
#### Kısayollar
```sh
shift+j "alt satırı bir üst satıra taşır."
o "bir alt satıra geçer. Yeni satır."
shift+a "satır sonuna gider."
u "geri alma."
ctrl+a "sayıyı artırır."
ctrl+x "sayıyı azaltır."
:q! "kaydetmeden çık"
:q "çık"
:w "kaydet"
:w deneme2.txt "farklı kaydeder"
:wq "kaydet çık"
x "Karakter sil"
cw "Kelimeyi değiştir"
dw "Kelimeyi sil"
D "Satırın kalanını sil"
dd "Satırı sil"
yy "Satırı panoya kopyala"
p "Panodakini yapıştır"
CTRL-r "Son geri almayı kaldır"
/deneme "deneme sözcüğünü bul"
n "Sonraki bulunan kelimeye git"
:7 "7. satıra gider."
https://www.syslogs.org/vi-basvuru-klavuzu-cheat-sheet/
```

```
caffeinate
command+shift+4 => ekran alıntısı mac için.
```
```c
#define Max(n1, n2) (n1>n2) ? s1 : s2
#define Max(n1, n2) (n1>n2) // true or false
#define Max 50
#define flt 2.45
printf("%t", tab);
printf("%n", new_line);
printf("%c", char);
printf("%s", str);
printf("%18.3s", str); // 18 karakter boş bırakır. 3 karakter strden yazar.
printf("%-20s", str);
printf("%.2f", float); // virgülden sonra 2 hane.
printf("%d", int);
int i = 5;
int *p = &i;
scanf("%c", &char);
scanf("%s", &str);
scanf("%d", &i);
printf("%p", pointer_address);
printf("%u", pointer_address);
printf("%x", pointer_address);
printf("%d", *pointer_value);
printf("%x", &number); // Bellek adresini verir.  
system("COLOR 2"); // çıktının rengini yeşil verir. 'A' light green.
```
