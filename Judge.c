int Judge(char A[ ]) {
    int k = 0;
    for(int i = 0;A[i] != '\0';i++) {
        if(A[i] == 'I') {
            k++;
        }
        else if(A[i] == 'O') {
            k--;
            if(k < 0){
                return -1;
            }
        }
    }
    if(k == 0){
        return true;
    }
    else {
        return false;
    }
}