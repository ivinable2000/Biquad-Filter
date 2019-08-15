#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    float G, A, B, C, D;
    G = atof(argv[1]);
    A = atof(argv[2]);
    B = atof(argv[3]);
    C = atof(argv[4]);
    D = atof(argv[5]);

    int var;
    float x[3] = {0, 0, 0};
    float y[3] = {0, 0, 0};
    while((scanf("%f", x + 2)) != EOF){ 
        y[2] = G * (x[2] + A*x[1] + B*x[0]) - C*y[1] - D*y[0];
        printf("%g\n", y[2]);
        
        for (int i = 0; i < 2; i++)
        {
            x[i] = x[i + 1];
            y[i] = y[i + 1];
        }
    }
    return 0;
}
