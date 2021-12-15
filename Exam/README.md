```c
#include <stdio.h>

int main(int ac, char **av) {
  printf("ac: %d\n", ac);
  for(int i = 0; i < ac; i++)
    printf("av[%d]: %s\n", i, av[i]);
  return 0;
}
```
```
gcc main.c
./a.out askjdn adsjkn "sajdn dljn"
```
```
ac: 4
av[0]: ./a.out
av[1]: askjdn
av[2]: adsjkn
av[3]: sajdn dljn
```
