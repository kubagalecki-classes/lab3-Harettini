#include <iostream>

class Figura
{

    double pole;

public:
    Figura(double A) { pole = A; }
    void         setpole(const double a) { pole = a; }
    double       getpole() { return pole; }
    virtual void id() { std::cout << "figura " << pole << "\n"; }
};

class Kolo : public Figura
{
public:
    Kolo(const double R) : Figura(2 * 22 / 7 * R) {}
    void id() { std::cout << "kolo " << getpole() << "\n"; }
};

class Kwadrat : public Figura
{
public:
    Kwadrat(const double a) : Figura(a * a) {}
    void id() { std::cout << "kwadrat " << getpole() << "\n"; }
};

void id(Figura& A)
{
    A.id();
}

int main()
{
    Kwadrat KA(4);
    id(KA);
    Figura DS = static_cast< Figura >(KA);

    id(DS);

    Figura* f  = new Kwadrat{54};
    Kolo*   GF = static_cast< Kolo* >(f);
    id(*GF);

    if (dynamic_cast< Kwadrat* >(f))
        std::cout << "to działa"
                  << "\n";
    if (dynamic_cast< Kolo* >(f))
        std::cout << "to nie powinno"
                  << "\n";
    if (dynamic_cast< Figura* >(f))
        std::cout << "cooo????"
                  << "\n";
}
