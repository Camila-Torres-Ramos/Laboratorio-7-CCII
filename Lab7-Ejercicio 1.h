#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;


class Persona{
    private:
        int edad;
        string nombre;
    public:
        void estudia(){
            cout<<"ingrese un nombre y edad: "<<endl;
            cin>>nombre>>edad;
            cout<<nombre<<" estudia en la UNSA y tiene "<<edad<<" anios"<<endl;
        }
};
class Estudiante: public Persona
{
};

#endif
