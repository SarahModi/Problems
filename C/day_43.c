#include <stdio.h>

int main() {
    //increment operators
    //++i i++
    int i = 1;
    printf("%d\n", i++); //use i, then increase. 

    return 0;
}

//OUTPUT
1 //The compiler prints only "1" but has already incremented 2 internally. If you add another print statement it will print "1 & 2"

#include <stdio.h>

int main() {
    //increment operators
    //i++ ++i
    int i = 1;
    printf("%d\n", i++); //use i, then increase
  printf("%d\n", i);

    return 0;
}

//OUTPUT
1
2
