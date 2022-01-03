# SHELL 00

## Genel Notlar
```sh
Pwd
Ls -p
ls -a  'gizli dosyaları listeler.'
rm fileName
rmdir folderName
man touch
git push git@vogsphere.42istanbul.com.tr:vogsphere/intra-uuid-939d114a-dde0-4be8-9daa-47fe256d3856-3891464 master
```

### Vim  Komutları
```sh
:q 'çıkış'
:qa 'değişiklik yapmadan çık'
:w 'kaydet'
:wq 'kaydet çık'
```
- vim ayarları
```sh
vi ~/.vimrc 'içine aşağıdaki komutları yaz.   ":wq" ile çık.'
syntax on
set number
set ruler
set mouse=a
set cursorline
```

- Gizli Dosyaları Göster
```sh
defaults write com.apple.finder AppleShowAllFiles -boolean true ; killall Finder 
```
---
## Ex00
```sh
Mkdir 42
Ls
Cd 42
Touch z
Cat z ' "." işaretini yaz "control+d" iki kere basıp çık'
```
---
## Ex01
```sh
touch testShell00
R: 4 , w: 2, x: 1
chmod 455 testShell00
Ls -l
-r--r-xr-x  1 mmemis  2021_istanbul  0 Nov 22 18:29 testShell00

tar -cf testShell00.tar testShell00
```
---
## Ex02
```sh
touch -t 06012146 test1
cat > test3 '"1" yaz ctrl+d ye 2 kere bas çık'
ln test3 test5
ln -s test0 test6
touch -h -t 06012220 test6
chmod -h 777 test6
ls -l
tar -cf exo2.tar *
```
---
## Ex03
```sh
/usr/bin/kinit
kinit
klist -f
klist.txt dosyasını oluştur içine kopyala
cat klist.txt 'ile kontrol et'
```
---
## Ex04
```sh
Dosya ve klasörleri oluştur. "Mdls" dosyası oluştur. İçine "ls -tUpm" yaz.
-t      Sort by time modified (most recently modified first) before sort-
        ing the operands by lexicographical order. "Sözlük sırasına göre sıralar."
-U      Use time of file creation, instead of last modification for sort-
        ing (-t) or long output (-l). "Dosya oluşturma zamanına göre sıralar."
-p      Write a slash (`/') after each filename if that file is a direc-
        tory. "Klasörleri "/" ile gösterir.
-m      Stream output format; list files across the page, separated by
        commas. "Dosya ve klasörleri virgülle ayırır. "
Bash midls
Sonuç:  midls, file2, file1, folder2/, folder1/ 
```
---
## Ex05
```sh
42 klasörün içindeyken 
Git init
Git add.
Git commit -m "message"
vim git_commit.sh içine yaz "git log --pretty=%H | head -n 5"
'git log -5 --pretty=%h'
bash git_commit.sh | cat -e
```
---
## Ex06
```sh
vi .gitignore içine ".DS_Store mywork.c" yaz
vi git_ignore.sh  "git status --ignored -s | grep '!!' | cut -f 2 -d' '" yaz
touch .DS_Store
touch mywork.c
bash git_ignore.sh.  ~~~~~ bashgit_ignore.sh|cat -e a
```
---
## Ex07
```sh
Resources dan a ve sw.diff dosyalarını kopyala. Sonra aşağıdaki kodu yaz.
patch a sw.diff -o b
```
---
## Ex08
```sh
Mkdir ex08
vi clean içine "find . -type f \( -name '#*#' -o -name '*~' \) -print -delete"
Touch #sadas#
Bash clean => ./#asdhkjn# dosyayı siler.
```

---
## Ex09
```sh
Vim dosya adı bir. İçine rakamlarla 42 ye kadar yaz. Sonra 42 yaz.
file -m ft_magic 42
```