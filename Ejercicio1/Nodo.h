#include <vector>
using namespace std;

class Arista{
    public:
    Arista(char _c);
    char getValue();
    private:
    char value;
};

class Nodo{
    public:
    Nodo(char _c);
    Nodo(char _c, vector<Arista> _aristas);
    void addArista(Arista _arista);
    void addArista(char _value);
    char getValue();
    vector <Arista> getAristas();
    Arista getArista(char _value);
    private:
    char value;
    vector<Arista> aristas;
};