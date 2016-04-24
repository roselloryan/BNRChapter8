//
//  main.c
//  BNRChapter 8-Loops


#include <stdio.h>
#include <readline/readline.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
//    int i = 0;
//    while (i <12) {
//        printf("%d Aaron is cool.\n", i);
//        i++;
//    }

    
//    int i;
//    for (int i = 0; i < 12; i++) {
//        
//        if (i % 3 == 0) {
//            continue;
//        }
//        
//        printf("Checking: i = %d\n", i);
//        
//        if (i + 90 == i*i) {
//            break;
//        }
//    }
//    printf("the answer is %d", i);
    
//    
//    int i;
//    do {
//        printf(" %d Aaron is cool.\n", i);
//        i++;
//    }
//    while (i < 12);
    
    
//    for (int i = 99; i > -1; i-=3) {
//    
//        printf("%d\n", i);
//        
//        if (i %5 == 0) {
//            printf("Found One!\n");
//        }
//    }

    
//    printf("Who is cool?");
//    const char *name  = readline(NULL);
//    printf("%s is cool!\n\n", name);
    
    printf("Where should I start counting down from?");
//    const char *startString = readline(NULL);
    int startInt = atoi(readline(NULL));
    
        for (int i = startInt; i > -1; i-=3) {
    
            printf("%d\n", i);
    
            if (i %5 == 0) {
                printf("Found One!\n");
            }
        }
    
    
    return 0;
}
