#include <bits/stdc++.h>

int main(){
    int quantidades;
    int retas;
    int regiao;
    std:: cin >> quantidades;
    for(int i=0; i<quantidades; i++){
        std:: cin >> retas;
        regiao = (((retas*(retas+1))/2)+1);
        std::cout <<regiao<<std::endl;
    }
    return 0;
}
