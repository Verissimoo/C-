//LISTA 1

//2

#include<iostream>
using namespace std;

int main() 
{
char ch;
 
cout << "Digite uma palavra \n"; cin >> ch;

if (ch == 'a')
cout << "É UMA VOGAL!";
else if (ch == 'e')
cout << "É UMA VOGAL!";
else if (ch == 'i')
cout << "É UMA VOGAL!";
else if (ch == 'o')
cout << "É UMA VOGAL!";
else if (ch == 'u')
cout << "É UMA VOGAL!";
else 
cout << "é conssoante";

return 0;
}

//3

#include<iostream>
#include<process.h>
using namespace std;

int main()
{
int i;
int f;

cout << "Digite um numero"; cin >> f;

for(i = 0; i <= f; i++)
   if(i % 2 == 0)
   {
    cout << i;
   } else
   continue;

return 0;
}

//4

#include<iostream>
#include<process.h>
using namespace std;

int main()
{
    int n;
    int s;
    int x;
    cout << "Digite um numero"; cin >> n;


    for(s=1; n >= s; s++)
    {
       x = s * s;
       cout << x << ' ';
    }

    cout << x + x;

return 0;
}

//6
#include<iostream>
#include<process.h>
using namespace std;

int main()
{
 int n = 1;
 int x;
 int i =1;
 int v;

while (5 >= n)
{
    x = i + n;
    cout << i << "+" << n << "=" << x << '\n';
    n++;

}
return 0;

}

//7

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 cout << setw(6) << '1';
 cout << '\n';
 cout << setw(5) << '2' << ' ' << '2';
 cout << '\n';
 cout << setw(4) << '3' << ' ' << '3' << ' ' << '3' << ' ';
 cout << '\n';
 cout << setw(3) << '4' << ' ' << '4' << ' ' << '4' << ' ' << '4' << ' ';
 cout << '\n';
 cout << setw(2) << '5' << ' ' << '5' << ' ' << '5' << ' ' << '5' << ' ' << '5' << ' ';
 cout << '\n';

return 0;
}

//8
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   int v;
   int i =1;
   int x;


   cout << "Digite um numero"; cin >> v;

   while(i < 100)
   {
       x = v * i;
    cout << setw(2) << x << ' ';
    i++;

   }


return 0;
}

//9

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 int n;
 float c, f;
 float temp1, temp2;

 cout << "Digite 1 para coverter de F para C" << '\n';
 cout << "Digite 2 para coverter de C para F";
 cin >> n;


if (n == '1')
   {
    cout << "digite a temp"; cin >> temp1;
       c = 5*(f-32)/9;
   cout << "o valor em Celsius é: " << c;
   }
else
     cout << "digite a temp"; cin >> temp2;
   f = (9*c/5) + 32;
   cout << "o valor em Filojhonsons é: " << f;


return 0;



 }

 //LISTA 2

 //1
#include<iostream>
using namespace std;

void mostra();

int main()
{
    mostra();
    return 0;
}

void mostra()
{
    cout << "Programar torna a vida interessante";
}

//2
#include<iostream>
using namespace std;

void tabela(int);

int main()
{
    int n;
    int r;
    cout << "digite um numero"; cin >> n;
    tabela(n);

}

void tabela(int n)
{
    int j = 1;
    int r;
    while(j<=6)
    {
        r = n * j;
        cout << n << "*" << j << "=" << r;
        cout << '\n';
        j++;
    }

}

//3
#include<iostream>
using namespace std;

void AeS(int);

int main()
{
    int n;
    cout << "Digite um numero: "; cin >> n;
    AeS(n);
  return 0;
}

void AeS(int n)
{
    int p;
    int c;
    p = (n - 1);
    c = (n + 1);
    cout << "O numero que antecede é: " << p;
    cout << "\nO numero posterior é: " << c;
}

//4
#include<iostream>
using namespace std;

void operacao(int, int, char);

int main()
{
    int n1, n2;
    int op;
    cout << "Digite o primeiro numero: "; cin >> n1;
    cout << "Digite o segundo numero: "; cin >> n2;
    cout << "Qual operação deseja fazer? "; cin >> op;
    operacao(n1, n2, op);

}

void operacao(int n1, int n2, char p )
{
    switch (p)
        {
            case 1: cout << n1 + n2; break;
            case 2: cout << n1 - n2; break;
            case 3: cout << n1 / n2; break;
            case 4: cout << n1 * n2; break;
            default: cout << "Tente novamente";
        }

}

//5
#include<iostream>
using namespace std;

void operador(char, int);

int main()
{
    char c;
    int n;
    cout << "Digite um caractere: "; cin >> c;
    cout << "Digite o numero de vezes: "; cin >> n;
    operador(c, n);
    return 0;
}

void operador(char c, int n)
{
    int j;
    for(j=0; j<n; j++) cout << c << " ";

}

//6
#include<iostream>
using namespace std;

void mult(int, int);

int main()
{
    int n1;
    int n2;
    cout << "Digite o primeiro numero"; cin >> n1;
    cout << "Digite o segundo numero"; cin >> n2;
    mult(n1, n2);


   
}

void mult(int n1, int n2)
{
    if(n1 % n2 == 0)
    {
        cout << "1(true)";
    } else 
    {
        cout << "0(false)";
    }

}

//7
#include<iostream>
using namespace std;

void mult(int, int);

int main()
{
    int n1;
    int n2;
    cout << "Digite o primeiro numero"; cin >> n1;
    cout << "Digite o segundo numero"; cin >> n2;
    mult(n1, n2);



}

void mult(int n1, int n2)
{
    if(n1 % n2 == 0)
    {
        cout << n2;
    } else
    {
        return mult(n2, n1%n2);
    }

}

//--------------------------
//lista de classes e objetos

//1
#include <iostream>
using namespace std;

//entrada para 4 notas
//soma e media dessas notas
//print da media

class nota
{
    private:
      int nota1, nota2, nota3, nota4;
      float s;
      float m;

    public:
    nota (): nota1(0), nota2(0), nota3(0), nota4(0)
      {cout << "inicio do construtor\n";}
      nota(int n1, int n2, int n3, int n4)
      {
           nota1 = n1;
           nota2 = n2;
           nota3 = n3;
           nota4 = n4;
      }
      void obtemNota()
      {
        cout << "\nDigite nota1: "; cin >> nota1;
        cout << "\nDigite nota2: "; cin >> nota2;
        cout << "\nDigite nota3: "; cin >> nota3;
        cout << "\nDigite nota4: "; cin >> nota4;
      }
      void somaMedia()
      {
        s = nota1 + nota2 + nota3 + nota4;
        m = s/4;

      }
      void mostraMedia()
      {
        cout << "Sua media e: " << m;
      }
};
int main()
{
   nota paulin;
   paulin.obtemNota();
   paulin.somaMedia();
   paulin.mostraMedia();
   return 0;
}

//--------------------------
//3

#include <iostream>
using namespace std;

class estudante
{
    private:
      int nota;
      int grau;
    public:
    estudante (): nota(0), grau(0)
      {cout << "inicio do construtor\n";}
      estudante(int n, int g)
      {
           nota = n;
           grau = g;
      }
      void mostraNeG()
      {
        cout << "Sua nota é: " << nota;
        cout << "\nSeu grau é: " << grau;
      }
};
int main()
{
   estudante junin(8, 3);
   estudante paulin(10, 1);

   junin.mostraNeG();
   return 0;
};

//4
#include <iostream>
using namespace std;

class Livro
{
  private:
    int livroId;
    int paginas;
    float preco;
  public:
    Livro(): livroId(0), paginas(0), preco(0)
    { }
    Livro(int lid, int p, float pc)
    {
      livroId = lid;
      paginas = p;
      preco = pc;
    };
    void obter()
    {
      cout << "Digite o id do livro: "; cin >> livroId;
      cout << "Digite quantas paginas: "; cin >> paginas;
      cout << "Digite o preço: "; cin >> preco;
    };
    void mostrar()
    {
      cout << "\nO id do livro é: " << livroId;
      cout << "\nO livro tem " << paginas << " paginas";
      cout << "\nO preço do livro é: $" << preco;
    };
    void definir(int dlid, int dp, float dpc)
    {
      livroId = dlid;
      paginas = dp;
      preco = dpc;
    };
    void mostraPreco()
    {
      cout << "Este livro custa: $" << preco;
    }
};

int main()
{
  Livro hp, got;

  hp.definir(18, 648, 99);
  got.obter();

  cout << "Descrição do livro1: \n";
  hp.mostrar();
  cout << "\nDescricao do livro2: \n";
  got.mostrar();

  hp.mostraPreco();


  return 0;
}// incompleto

//5
#include <iostream>
using namespace std;

class Int
{
  private:
    int cont;
  public:
    Int(): cont(0)
        {cout << "vazio ";}
      void incCont()
        {cont++;}
      int obtemCont()
        {return cont;}
      void inserir(int c)
      {cont = c;}


};

void soma(Int s1, Int s2, Int s3)
{
  int resultado;
  resultado = s1.obtemCont() + s2.obtemCont() + s3.obtemCont();
  cout << "\no resultado da soma é: " << resultado;
};

int main()
{
  Int n1, n2, n3;
  cout << "\nn1 = " << n1.obtemCont();
  cout << "\nn2 = " << n2.obtemCont();
  n3.inserir(10);

  n1.incCont();
  n1.incCont();
  n1.incCont();
  n1.incCont();

  n2.incCont();
  n2.incCont();
  n2.incCont();

  cout << "\nn1 = " << n1.obtemCont();
  cout << "\nn2 = " << n2.obtemCont();

  soma(n1, n2, n3);



  return 0;
}

//6
#include <iostream>
using namespace std;

class Cartesiano
{
  private:
    int x, y;
  public:
    Cartesiano(): x(0), y(0)
        {   };
      Cartesiano( int d1, int d2)
      {
        x = d1;
        y = d2;
      }
      void entrada_dados()
      {
        cout << "Digite o valor de x: "; cin >> x;
        cout << "\nDigite o valor de y"; cin >> y;
      }
      void mostra_dados();
};

void Cartesiano :: mostra_dados()
      {
        cout << "O valor de X e: " << x;
        cout << "\nO valor de Y e: " << y;
      }

int main()
{
  Cartesiano p1, p2;
  p1.entrada_dados();
  p1.mostra_dados();

  return 0;
}

//7
 #include <iostream>
using namespace std;

class Modelo
{
  private:
    
  public:
  int x, y;

      void escreve_dados(Modelo &v)
       {
        cout << "Digite o valor de x: "; cin >> v.x;
        cout << "Digite o valor de y: "; cin >> v.y;
       }

      void le_dados()
      {
        cout << "O X do objeto e: " << x;
        cout << "\nO Y do objeto e:\n " << y;

      };

};

int main()
{
  Modelo a;
  Modelo b;
  a.escreve_dados(a);
  b = a;
  b.x = b.x * 3;
  b.y = b.y * 3;

  a.le_dados();

  cout << "Objeto 2: \n";
  b.le_dados();

  return 0;
}


//8
#include <iostream>
using namespace std;

class Perfeito
{
  private:
    int x;
  public:
    Perfeito(): x(0)
    {   };
    Perfeito(int x1)
    {
    x = x1;
    }
    void entrada(){
      cout << "Digite um numero para a verificacao: "; cin >> x;
    }
    void verifica_perfeito()
    {
      int soma = 0;
      char resp;


      for(int i = 1; i <= x/2; i++){
        if( x % 1 == 0){
          soma +=i;
        };
      }

      if(soma == x){
        cout << "\ne perfeito";
      } else {
        cout << "\nNao e perfeito";
      }
    }
};

int main()
{
  Perfeito t;
  char resp;

  do{
  t.entrada();
  t.verifica_perfeito();
  cout << "\ndeseja testar novamente ? (y/n)"; cin >> resp;
  }while(resp != 'n');

  return 0;
}
//9
#include <iostream>
using namespace std;

class Pedagio
{
  private:
    int carro;
    double valor;
  public:
    Pedagio(): carro(0), valor(0)
    {  };
    Pedagio(int c, int v)
    {
      carro = c;
      valor = v;
    }
    void PagaCarro()
    {
      valor += 0.50;
      carro++;
    };
    void NaoPagaCarro()
    {
      carro++;
    };
    const void mostra()
    {
      cout << "\nValor arrecadado: $" << valor;
      cout << "\nNumero de carros: " << carro;
    }



};

int main()
{
  Pedagio br;
  char tecla;
  do{
    cout << "(p) para pagantes e (n) para caloteiros"; cin >> tecla;
    if(tecla == 'p'){
    br.PagaCarro();
  }else if(tecla == 'n'){
    br.NaoPagaCarro();
  }else{
    br.mostra();
  };
  }while(tecla != 'p' || 'n');

  return 0;
}
//10
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


struct endereco
{
  int casa;
  int rua;
  char cidade[256];

};
class Pessoa
{
  private:
     char nome[256];
     int idade;
     float salario;
     endereco e1;
  public:
    void entrada_dados()
    {
      cout << "Digite seu nome:"; cin >> nome;
      cout << "Digite sua idade:"; cin >> idade;
      cout << "Digite seu salario:"; cin >> salario;
      cout << "Digite seu endereco, casa: "; cin >> e1.casa;
      cout << "Digite seu endereco, rua: "; cin >> e1.rua;
      cout << "Digite seu endereco, cidade: "; cin >> e1.cidade;

    }
    void mostra_dados()
    {
      cout << "\nnome: " << nome;
      cout << "\nidade: " << idade;
      cout << "\nsalario e: " << salario;
      cout << "\nendereco, casa: " << e1.casa;
      cout << "\nendereco, rua: " << e1.rua;
      cout << "\nendereco, ciade: " << e1.cidade;

    }
};

int main()
{
 Pessoa verissimo;
 

  return 0;
}

// Lista 4
//2
#include <iostream>
#include <string>

using namespace std;

class resultado
{
private:
    int matricula;
    string nome;
    float notas[3];

public:
  void entrada()
    {

        cout<<"Digite a matricula: ";
        cin>>matricula;
        cout<<"Digite o nome do aluno: ";
        cin.ignore();
        getline(cin,nome);
        for (int i = 0; i < 3; i++)
        {
            cout<<"Digite a "<<i+1<<"a nota: ";
            cin>>notas[i];
        }

      };
  void mostra()
   {
    cout << "Matricula: " << matricula;
    cout << "Nome: " << nome;
    cout << "Nota 1: " << notas[0];
    cout << "Nota 2: " << notas[1];
    cout << "Nota 3: " << notas[2];

   }
  void total()
  {
    float t;
    t = notas[0] + notas[1] + notas[2];
    cout << "\nO somatorio das notas e: " << t;
  }
  void media()
  {
    float m;
    m = (notas[0] + notas[1] + notas[2]) / 3;
    cout << "\nSua media e: " << m;
  }
};

int main()
{
    resultado junin;
    junin.entrada();
    junin.mostra();
    junin.total();
    junin.media();
    return 0;
}
//3
#include <iostream>
#include <string>

using namespace std;

class resultado
{
private:
    int matricula;
    string nome;
    float notas[3];

public:
  void entrada()
    {

        cout<<"Digite a matricula: ";
        cin>>matricula;
        cout<<"Digite o nome do aluno: ";
        cin.ignore();
        getline(cin,nome);
        for (int i = 0; i < 3; i++)
        {
            cout<<"Digite a "<<i+1<<"a nota: ";
            cin>>notas[i];
        }

      };
  void mostra()
   {
    cout << "\nMatricula: " << matricula;
    cout << "\nNome: " << nome;
    cout << "\nNota 1: " << notas[0];
    cout << "\nNota 2: " << notas[1];
    cout << "\nNota 3: " << notas[2];

   }
  void total()
  {
    float t;
    t = notas[0] + notas[1] + notas[3];
    cout << "\nO somatorio das notas e: " << t;
  }
  void media()
  {
    float m;
    m = (notas[0] + notas[1] + notas[3]) / 3;
    cout << "\nSua media e: " << m;
  }

};

int main()
{

    resultado aluno[40];
    for(int j=0; j<40; j++){
      aluno[j].entrada();
      aluno[j].mostra();
      aluno[j].total();
      aluno[j].media();
    };
    return 0;
}
//4
#include <iostream>
#include <string>

using namespace std;

class Tv
{
private:
  string nomeMarca;
  int modelo;
  float preco;
public:
  Tv()
  {
      nomeMarca = "Nao definido";
      modelo = 0;
      preco = 0;
  };
  void mostra()
  {
    cout << "\nMarca: " << nomeMarca;
    cout << "\nModelo: " << modelo;
    cout << "\npreco: " << preco;
  };
  void inserirAt()
  {
    cout << "\nDigite a marca: "; cin >> nomeMarca;
    cout << "Digite o modelo: "; cin >> modelo;
    cout << "preco: $"; cin >> preco;
  };
};

int main()
{
  Tv lg;
  lg.mostra();
  lg.inserirAt();
  lg.mostra();
  
  return 0;
};

//5
#include <iostream>
#include <string>

using namespace std;

class Vetor
{
private:
  int num[10];
public:
  void leVetor()
  {
    for(int i=0; i<10; i++)
    {
      cout << "digite o" << i+1 << "o. valor: ";
      cin >> num[i];
    }

  }
  void mostraVetor()
  {
    for(int j=0;j < 10; j++)
    {
      cout << num[j] << " ";
    }
  }
  void ordenaVetor()
  {
    int aux;
    for(int a=0; a <10; a++)
    {
      for(int b=a+1; b<10; b++ )
      {
        if(num[a]>num[b]){
          aux = num[a];
          num[a] = num[b];
          num[b] = aux;
        };
      };
    };
  }; 
};

int main()
{
  Vetor x;
  x.leVetor();
  x.mostraVetor();
    return 0;
} 

//LISTA 3
//1
#include <iostream>
#include <string>
using namespace std;


class Pessoa
{
    private:
       int id;
       string nome;
       string endereco;
    public:
        Pessoa()
         {id =0, nome = '\0' , endereco = '\0'; };

        void entrada1()
        {
            cout << "Digite sua identidade (CPF):"; cin >> id;
            cout << "Digite seu endereco: "; cin >> endereco;
            cout << "Digite seu nome: "; cin >> nome;

        }
        void mostra1()
        {
            cout << "Sua id e: " << id << endl;
            cout << "Seu nome e: " << nome << endl;
            cout << "Seu endereco e: " << endereco << endl;
        }

};

class Estudante : public Pessoa
{
    private:
      int matricula;
      float nota;

    public:
      void entrada()
      {

        cout << "Digite sua matricula: "; cin >> matricula;
        cout << "Digite sua nota: "; cin >> nota;
        Pessoa::entrada1();
      }

      void mostra()
      {

        cout << "Sua matricula e: " << matricula << endl;
        cout << "Sua nota e: " << nota << endl;
        Pessoa::mostra1();
      }

};

int main()
{
    Estudante pedrin;
    pedrin.entrada1();
    pedrin.mostra1();

    return 0;
}

//2
//continuação da 1
int main()
{
    Estudante alunos[40];
    for(int j=0; j<40; j++){
        cout << " Preencha as infos do aluno " << j+1 << endl;
        alunos[j].entrada();
        cout << " infos do aluno: " << j+1 << endl;
        alunos[j].mostra();
    };

    return 0;
}

//3
#include <iostream>
using namespace std;


class Pai
{
    private:
       int b;
    public:

        void entrada()
        {
            cout << "Digite o segundo numero "; cin >> b;
        }
        void mostra()
        {
          cout << "O segundo numero e: " << b << endl;

        }

};

class Filho : public Pai
{
    private:
      int a;
    public:

         void entradaF()
         {
          Pai::entrada();
           cout << "Digite o primeiro numero "; cin >> a;
          
         }
         void mostraF()
        {
          cout << "O primeiro numero e: " << a << endl;
          Pai::mostra();
        }

};

int main()
{
  Filho numeros;
  numeros.entradaF();
  numeros.mostraF();
  
    return 0;
}

//4
#include <iostream>
using namespace std;


class A
{
    private:
       int a;
    public:

        void in()
        {
            cout << "Digite o nro de A "; cin >> a;
        }
        void out()
        {
          cout << "O valor de A e " << a << endl;

        }

};

class B
{
    private:
      int b;
    public:

         void entrada()
         {
           cout << "Digite o nro de B "; cin >> b;

         }
         void saida()
        {
          cout << "O valor de B e: " << b << endl;

        }

};

class C : public A, public B
{
  private:
    int c;
  public:

    void obtem_heranca()
    {
      A::in(), B::entrada(),
      cout << "Digite o nro C "; cin >> c;
    };
    void mostra_heranca()
    {
      A::out(), B::saida(), cout << "O valor de C e: " << c;
    }

};

int main()
{

  C obj;
  obj.obtem_heranca();
  obj.mostra_heranca();


    return 0;
};

//LISTA 6
//1
#include <iostream>
using namespace std;

int main()
{
    int var1;
    int var2;
    cout << "Digite dois valores inteiros: ";
     cin >> var1;
     cin >> var2;


    int* p1;
    int* p2;
    int* p3;
    p1 = &var1;
    p2 = &var2;

    p3 = p1;
    p1 = p2;
    p2 = p3;

    cout << " = " << *p1 << "/" << *p2;

    return 0;
}

//2
#include <iostream>
using namespace std;


int main()
{
   void print(int*);
   int varray[5] = {10, 20, 30, 40, 50};

   print(varray);

}

void print(int* ptr)
{
  for(int j=0; j<5;j++){
    cout << *ptr++ << ", ";
  }
}

//3
#include <iostream>
using namespace std;


int main()
{

   char vstring[] = "E N G E N H A R I A";
   char* p1;
   p1 = vstring;

   cout << p1;

   return 0;

}

//4
#include <iostream>
using namespace std;


int main()
{
   void leitura(int*, int);

   int n;
   int* p;
    p = new int[n];
    cout << "Digite o valor de n: ";
    cin >> n;

   leitura(p, n);

   cout << " Você digitou: ";
   for(int i=0; i<n;i++)
    {
        cout << *p++ << endl;
    };

    delete[] p;

   return 0;

}

void leitura(int* ptr, int n)
{
   for(int i=0; i<n;i++)
   {

       cout << "Digite os elementos contidos em n: " << n << endl; cin >> *(ptr++);
   };

}

//5




















