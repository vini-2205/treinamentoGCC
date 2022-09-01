#include <bits/stdc++.h>

int main(){
    int quantidades;
    std:: cin >> quantidades;
    for(int i=0; i<quantidades; i++){
        int total=0, tamanho,qntd1=0,qntd2=0,verdadeiro=0;
        std::string golpe;
        std::string resposta;
        std:: cin >> golpe;
        tamanho = golpe.size();
            for(int j=0;j<tamanho;j++){

                if( (golpe[j] == 'a') && (verdadeiro == 0)){
                    for(int k=j; k<tamanho; k++){
                        if(golpe[k] != 'a'){
                            j=k+1;
                            verdadeiro = 1;
                            break;
                        }
                        qntd1++;
                    }
                }

                if( (golpe[j] == 'a') && (verdadeiro==1)){
                    for(int k=j; k<tamanho; k++){
                        if(golpe[k] != 'a'){
                            j=k+1;
                            verdadeiro = 2;
                            break;
                        }
                        qntd2++;
                    }
                }

                if(verdadeiro==2){
                    break;
                }

            }
        total = (qntd1*qntd2);
        std:: cout << 'k';
        for(int j=0; j<total; j++){
            std:: cout << 'a';
        }
        std:: cout <<std::endl;
    }
    return 0;
}
