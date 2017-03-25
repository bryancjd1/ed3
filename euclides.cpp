#include <iostream>

using namespace std;
int modulo(int a, int b)
{
    int c,r;
    if (a<0)
    {
        c=(a/b)-1;
        r=a-c*b;
    }
    else
    {
        c=(a/b);
        r=a-c*b;
    }
    return r;
}
class mcd
{
    public:
        int maximo(int x, int y)
        {
            while( y > 0 )
            {
                int f = modulo(x,y);
                x = y;
                y = f;
            }
            return x;
        }
};
int main()
{
    mcd c;
    int a,b;
    a=18;
    b=4;
    cout<<c.maximo(a,b);
}
