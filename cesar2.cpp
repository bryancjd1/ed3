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
class cesar{
	private:
		int clave;
		string alfabeto;
	public:
		cesar(int clave){
			this->clave = clave;
			this->alfabeto = "abcdefghijklmnopqrstuvwxyz";
		}
		string encriptar(string texto)
		{
			string encriptado = "";
			int c;
			for(int i = 0;i<texto.size();i++)
            {
				c = alfabeto.find(texto[i]) + clave;
				if(c > alfabeto.size() - 1)
					c = modulo(c,alfabeto.size());
				encriptado += alfabeto[c];
			}
			return encriptado;
		}
		string desencriptar(string texto){
			string desencriptado = "";
			int c;
			for(int i = 0;i<texto.size();i++)
            {
				c = alfabeto.find(texto[i]) - clave;
				if(c > alfabeto.size() - 1)
					c = modulo(c,alfabeto.size());
				desencriptado += alfabeto[c];
			}

			return desencriptado;
		}
};

int main(int argc, char const *argv[])
{

	int clave = -5;
	string texto, encriptado, desencriptado;

	cesar a(clave);
	cesar b(clave);

	texto = "defg";
	cout<<texto<<endl;
	encriptado = a.encriptar(texto);
	cout<<encriptado<<endl;
	desencriptado = b.desencriptar(encriptado);
	cout<<desencriptado;

	return 0;

}


