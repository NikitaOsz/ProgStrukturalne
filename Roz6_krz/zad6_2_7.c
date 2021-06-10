
int** alokuj(unsigned int n){

    int ** t = malloc(n*sizeof(int*));

    for(int i = 0; i < n; i++){
        t[i] = malloc((i + 1)*sizeof(int));
    }
    return t;
}
