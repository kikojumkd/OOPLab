#include <iostream>
#include <cstring>

class Krug
{
public:
    Krug()
        : radius(1)
        , p(0)
        , a(0)
        , pi(3.14)
    {
    }

    Krug(float r)
        : radius(r)
        , p(0)
        , a(0)
        , pi(3.14)
    {

    }

    float plostina()
    {
        a = pi * radius * radius;
        return a;
    }

    float perimetar()
    {
        p = 2 * radius * pi;
        return p;
    }

    bool ednakvi()
    {
        return (a == p);
    }

protected:
    const float pi;
    float radius;
    float a;
    float p;
};

int main()
{
    float r;
    std::cin >> r;

    Krug k(r);
    std::cout << k.perimetar() << std::endl;
    std::cout << k.plostina() << std::endl;
    std::cout << k.ednakvi() << std::endl;

    return 0;
}
