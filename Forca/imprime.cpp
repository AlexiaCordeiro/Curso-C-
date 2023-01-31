#include <string>
#include <iostream>
#include <vector>
#include <map>


extern std::vector<char> chutes_errados;
extern std::map<char, bool> chutou;
extern std::string palavra_secreta;



void imprime_cabecalho()
{
    std::cout << "*********************" << std::endl;
    std::cout << "*** Jogo da Forca ***" << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << std::endl;
}

void imprime_erros()
{
    std::cout << "Chutes errados: ";
    for (char letra : chutes_errados)
    {
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}

void imprime_palavra()
{
    for (char letra : palavra_secreta)
    {
        if (chutou[letra])
        {
            std::cout << letra << " ";
        }
        else
        {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}