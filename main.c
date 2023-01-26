#include <stdio.h>
#include <stdbool.h>

int fct(int x) {
    printf("a "); 
    int i;
    
    if (x > 0) {
        printf("b ");
        
        i = 0;
        int y;
        printf("d ");
        
        while(true) {
            printf("e ");
            int z = x % 2;
            
            if (z != 0) {
                printf("f ");
                printf("h ");
                break;
            } // if(z!=0)

            printf("g ");
            x = x / 2;
            i = i + 1;
            y = (x^1) & x;
            printf("i ");

            while (0 <= y && y <= 100) {
                printf("k ");
                y = 2 * y;
                printf("l ");
            } // while (0 <= y && y <= 100)
            printf("j ");
        } // while(true)

        printf("m\n");
        return i;
        
    }
    printf("c ");
    printf("n\n");
    return 0;
}

int fct2(int x) {
    printf("a ");
    int i;

    if (x > 0) {
        
        printf("b ");
        i = 0;
        int y;
        printf("d ");

        while(x % 2 == 0) {
            
            printf("e' ");
            x = x / 2;
            i = i + 1;
            y = (x^1) & x;
            printf("i ");

            while (0 <= y && y <= 100) {
                
                printf("k ");
                y = 2 * y;
                printf("l ");
                
            } // while (0 <= y && y <= 100)
            
            printf("j ");
        } // while(x % 2 == 0)

        printf("h ");
        printf("m\n");
        return i;

    }
    printf("c ");
    printf("n\n");
    return 0;
}

int main() {
    printf("Test 1: k = 0, x = 0\n");
    int out1 = fct2(0);
    printf("out1: %d\n", out1);

    printf("Test 2: k = 0, x = 1\n");
    int out2 = fct2(1);
    printf("out2: %d\n", out2);

    printf("Test 3: k = 1, k' = 0, x = 502\n");
    int out3 = fct2(502);
    printf("out3: %d\n", out3);

    printf("Test 4: k = 1, k' = 1, x = 186\n");
    int out4 = fct2(186);
    printf("out4: %d\n", out4);

    printf("Test 5: k = 1, k' = 2, x = 86\n");
    int out5 = fct2(86);
    printf("out5: %d\n", out5);

    printf("\nNEW TESTS FROM HERE\n");

    printf("Test 6: k = 2, k' = 0, k'' = 0, x = 1004\n");
    int out6 = fct2(1004);
    printf("out6: %d\n", out6);

    printf("Test 7: k = 2, k' = 0, k'' = 1, x = 372\n");
    int out7 = fct2(372);
    printf("out7: %d\n", out7);

    printf("Test 8: k = 2, k' = 0, k'' = 2, x = 172\n");
    int out8 = fct2(172);
    printf("out8: %d\n", out8);

    printf("Test 9: k = 2, k' = 1, k'' = 2, x = 108\n");
    int out11 = fct2(108);
    printf("out9: %d\n", out11);

    printf("\n---\n");
    
    for (int i = 0; i < 10000; i++) {
        // check if i is a power of 2
        if ((i & (i - 1)) == 0) {
            continue;
        }
        printf("NOW TESTING %d\n", i);
        int out9 = fct2(i);
        printf("out9: %d\n", out9);
    }
    
    return 0;
}
