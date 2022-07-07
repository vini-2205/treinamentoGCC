#include <bits/stdc++.h>

int main(){
    int quantidades;
    int retas,regiao,tamanho,qntda1,qntda2,verdadeiro=0;;
    std::string golpe;
    std:: cin >> quantidades;
    for(int i=0; i<quantidades; i++){
        std:: cin >> golpe;
        tamanho = size(golpe);
        for(int j=0;j<tamanho;j++){
            if(golpe[j]=='a' && verdadeiro==0){
                for(int k=j;k<tamanho;k++){
                    if(golpe[j]!='a'){
                        break;
                    }
                    qntda1++;
                }
                verdadeiro=1;
            }
            if(golpe[j]=='a' && verdadeiro==1){
                for(int k=j;k<tamanho;k++){
                    if(golpe[j]!='a'){
                        break;
                    }
                    qntda2++;
                }
                verdadeiro=1;
            }
        }
        
        std::cout <<regiao<<std::endl;
    }
    return 0;
}
