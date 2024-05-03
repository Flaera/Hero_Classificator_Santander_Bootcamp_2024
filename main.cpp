#include <iostream>
#include <string>
#define DEBUG0 if(0)
#define OPTION_CONFIRM 's'


int main(int agrv, char* argc[]){
    std::string hero_name;
    int hero_xp = 0;
    std::string hero_class;
    char next = OPTION_CONFIRM;

    while (next==OPTION_CONFIRM){
        std::cout<<"Existe heroi para avaliar o nivel(s/n)? ";
        std::cin>>next;
        if (next==OPTION_CONFIRM){
            std::cout<<"Digite o nome do heroi: ";
            std::cin>>hero_name;
            std::cout<<"Digite o numero da XP do heroi: ";
            std::cin>>hero_xp;
            //Se XP for menor do que 1.000 = Ferro
            if (hero_xp<1000){hero_class="Ferro";}
            // Se XP for entre 1.001 e 2.000 = Bronze
            else if (hero_xp>=1001 && hero_xp<=2000){hero_class="Bronze";}
            // Se XP for entre 2.001 e 5.000 = Prata
            else if (hero_xp>=2001 && hero_xp<=5000){hero_class="Prata";}
            // Se XP for entre 5.001 e 7.000 = Ouro
            else if (hero_xp>=5001 && hero_xp<=7000){hero_class="Ouro";}
            // Se XP for entre 7.001 e 8.000 = Platina
            else if (hero_xp>=7001 && hero_xp<=8000){hero_class="Platina";}
            // Se XP for entre 8.001 e 9.000 = Ascendente
            else if (hero_xp>=8001 && hero_xp<=9000){hero_class="Ascendente";}
            // Se XP for entre 9.001 e 10.000= Imortal
            else if (hero_xp>=9001 && hero_xp<=10000){hero_class="Imortal";}
            // Se XP for maior ou igual a 10.001 = Radiante
            else if (hero_xp>=10001){hero_class="Radiante";}
            //Bonu:
            // Caso a pessoa digite 1000, para não ter que fazer Try/Catch que não foi ensinado.
            else{hero_class="Indefinido";}

            std::cout<<"O Herói de nome **{"<<hero_name<<"}** está no nível de **{"<<hero_class<<"}**\n";
        }
        else{std::cout<<"Goodbye!!\n";}
    }
}