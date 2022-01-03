
#include <iostream>

using namespace std;

int main()
{
    bool k=1;
    do{

    char repetir;

    short int eop;
    short int p;
    short int e;


    cout << "Pon 1 si quieres hacer un ejercicio, o 2 si quieres hacer un problema: ";
    cin>>eop;


    int A;
    int B;
    int N;


    if (eop==1){

            cout << "Escogiste hacer un ejercicio. Elije el numero del ejercicio que quieras hacer (pares del 2 al 30): ";
            cin >> e;

            switch(e){

            case 2:
                /* Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
                   Ej: si se ingresa 5 se debe imprimir:
                   5 es impar
                */

                cout<<"Dame un numero: ";
                cin>>N;

                if(N%2==0)
                    cout<< N <<" es par."<<endl<<endl;
                else
                    cout<< N <<" es impar."<<endl<<endl;

                break;

            case 4:
                /* Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
                    Ej: si se ingresan 7 y 3 se debe imprimir:
                    El menor es 3
                */

                cout<<"Dame un numero: ";
                cin>>A;
                cout<<"Dame otro numero: ";
                cin>>B;

                if (A<B)
                    cout<<"El menor es "<<A<<endl<<endl;
                else if(B<A)
                    cout<<"El menor es "<<B<<endl<<endl;
                else
                    cout<<"Ambos números son iguales."<<endl<<endl;

                break;


            } //corchete del switch para los ejercicios

}

    else if (eop==2){

        cout << "Escogiste hacer un problema. Elije el numero del problema que quieras hacer (pares del 2 al 30): ";
        cin >> p;

       switch(p){

       case 2:

           /* Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.
                    *  Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.

                       Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio de los
                       billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla.
                       Ej: si se ingresa 47810, el programa debe imprimir:
                       50000 : 0
                       20000: 2
                       10000 : 0
                       5000: 1
                       2000 : 1
                       1000: 0
                       500 : 1
                       200: 1
                       100 : 1
                       50: 0
                       Faltante: 10
                   */

                   cout<<"Dame plata: ";
                   cin>>N;             // A es un entero

                   cout<<"50000: "<<N/50000<<endl;
                   N=N-N/50000*50000;

                   cout<<"20000: "<<N/20000<<endl;
                   N=N-N/20000*20000;

                   cout<<"10000: "<<N/10000<<endl;
                   N=N-N/10000*10000;

                   cout<<"5000: "<<N/5000<<endl;
                   N=N-N/5000*5000;

                   cout<<"2000: "<<N/2000<<endl;
                   N=N-N/2000*2000;

                   cout<<"1000: "<<N/1000<<endl;
                   N=N-N/1000*1000;

                   cout<<"500: "<<N/500<<endl;
                   N=N-N/500*500;

                   cout<<"200: "<<N/200<<endl;
                   N=N-N/200*200;

                   cout<<"100: "<<N/100<<endl;
                   N=N-N/100*100;

                   cout<<"50: "<<N/50<<endl;
                   N=N-N/50*50;

                   cout<<"Faltante: "<<N<<endl;
        break;

    }   //corchete del switch para los problemas
    } //corchete del if para los problemas


    else {
           cout << "numero invalido"<<endl;
       }


        cout<<"Pon s si quieres hacer otro ejercicio o problema: ";
        cin>>repetir;

        if (repetir!='s')
            k=0;


}        //corchete de do while
    while(k==1);


    return 0;
}
