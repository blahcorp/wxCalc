#ifndef FUNKS_H
#define FUNKS_H

/*
Fichero: funks.h -> En el se realiza la definición de la clase.

RadioBox Index:
        0 = Sumar           if (in == 0) numresultado = num1 + num2;
        1 = Restar          if (in == 1) numresultado = num1 - num2;
        2 = Multiplicar     if (in == 2) numresultado = num1 * num2;
        3 = Dividir         if (in == 3) numresultado = num1 / num2;
        4 = Porcentaje
    	5 = Raiz Cuadrada
    	6 = Factorial
    	7 = Logaritmo

Atributos = Caracteristicas del objeto (Encapsulamiento: private-public)
Metodos = Acciones del objeto
*/

class funks {
    public: //Metodos de la clase
        funks();
        virtual ~funks();
        funks(const funks& other);
        int sumarInt(int, int, int);


    protected:

    private: //Atributos de la clase
        int tipo;
        int inum1;
        double dnum1;
        int inum2;
        double dnum2;

};

#endif // FUNKS_H
