#include <iostream>
#include <cstdlib>

using namespace std;
 
void pausa();
 
int main()
{
    bool bandera=false;
    char tecla;
 
    do
    {
        system("cls");
        cin.clear();
    
	cout<<"\t\t*********************************************" <<endl;
	cout<<"\t\t*********************************************" <<endl;
	cout<<"\t\t************   ZeroHiresCleaner   ***********" <<endl;
	cout<<"\t\t************  Desarrollado Por:   ***********" <<endl;
	cout<<"\t\t************  KillingName & Zero  ***********" <<endl;
	cout<<"\t\t************ https://goo.gl/gjKlys***********" <<endl;
	cout<<"\t\t************ no usar link espejo  ***********" <<endl;  
	cout<<"\t\t*********************************************" <<endl;
	cout<<"\t\t*********************************************" <<endl;
	cout<<"" 												  <<endl;
	cout<<"" 												  <<endl;
//con '\t\t\t' llevo un poco al centro el mensaje, y con '\n\n' salto 2 lineas hacia abajo.
    cout<<"\t1.-	Activar windows" 		<<endl;
	cout<<"\t2.-	Optimiza Tu PC" 		<<endl;
	cout<<"\t3.-	Limpia tu PC"	 		<<endl;
    cout<<"\t4.-	Elimina Publicidad" 	<<endl;
    cout<<"\t5.-	Windows 10" 			<<endl;
    cout<<"\t6.-	Guardar Cambios" 		<<endl;
	cout<<"" 								<<endl;
	cout<<"" 								<<endl;
	cout<<"\tEsperando su orden:" 			<<endl;
 
        cin >> tecla;
 
		switch(tecla)
		
		{

case '1':
		cout<<"Espere por favor cargando informacion . . .";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\act.exe");
		bandera=true;
		exit(0);
		break;

	case '2':
		cout<<"Cargando archivos . . . . .";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\op.exe");
		bandera=true;
		exit(0);
		break;
		
	case '3':
		cout<<"Se eliminaran los archivos temporales . . . ";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\Limpieza\\eliminar.cmd");
		bandera=true;
		exit(0);
		break;
	
	case '4':
		cout<<"Configuraremos tu pc para eliminar la publicidad ....";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\copi.cmd");
		bandera=true;
		exit(0);
		break;
		
	case '5':
		cout<<"Aqui se encuentran lis misterios de la vida :P";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\w10.exe");
		bandera=true;
		exit(0);
		break;
		
	case '6':
		cout<<"Guardadndo Cambios reiniciaremos el equipo";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\guardar.cmd");
		bandera=true;
		exit(0);
		break;		
 
			default:
				system("cls");
				cout << "Opcion no valida.\a\n";
				pausa();
				break;
		}
    }while(bandera!=true);
 
    return 0;
}
 
void pausa()

{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}
