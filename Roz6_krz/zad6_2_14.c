int suma(int t[][100][100]){
    int suma = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            for(int x = 0; x < 100; x++){
                suma += t[i][j][x];
            }
        }
    }
    return suma;
}

