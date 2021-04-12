int dc(Linked List ,int n) {
    int i;
    char s[n/2];
    p = L->next;
    for(i = 0;i < n/2; i++){
        s[i] = p->data;
        p = p->next;
    }
    i--;
    while(p != NULL&& s[i] == p->data){
        i--;
        p = p->next;
    }
    i++;
    if( i == 0){
        return 1;
    }
    else{
        return 0;
    }
}