#include <iostream>
#include <cstring>

class Film
{
public:
    Film()
        : godina(1337)
    {
        ime[0] = '\0';
        reziser[0] = '\0';
        zanr[0] = '\0';
    }

    Film(char* i, char* r, char* z, int g)
        : godina(g)
    {
        strcpy(ime, i);
        strcpy(reziser, r);
        strcpy(zanr, z);
    }

    int get_godina() { return godina; }

    void pecati()
    {
        std::cout << "Ime: " << ime << std::endl;
        std::cout << "Reziser: " << reziser << std::endl;
        std::cout << "Zanr: " << zanr << std::endl;
        std::cout << "Godina: " << godina << std::endl;
    }

protected:
    char ime[100];
    char reziser[50];
    char zanr[50];
    int godina;
};

void pecati_po_godina(Film* f, int n, int g)
{
    for (int i = 0; i < n; i++)
        if (f[i].get_godina() == g) f[i].pecati();
}

int main()
{
    int n;
    std::cin >> n;

    Film filmovi[100];
    for (int i = 0; i < n; i++)
    {
        char ime[100];
        char reziser[50];
        char zanr[50];
        int godina;
        std::cin >> ime;
        std::cin >> reziser;
        std::cin >> zanr;
        std::cin >> godina;
        filmovi[i] = Film(ime, reziser, zanr, godina);
    }

    int godina;
    std::cin >> godina;
    pecati_po_godina(filmovi, n, godina);

    return 0;
}
