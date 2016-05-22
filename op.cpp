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
    cout<<"\t1.-Optimizar internet paso 1" <<endl;
	cout<<"\t2.-Optimizar internet paso 2" <<endl;
	cout<<"\t3.-Optimizar PC" 			   <<endl;
	cout<<"\t4.-Optimizar Apagado" 		   <<endl;
	cout<<"\t5.-Optimizacion visual"       <<endl;
	cout<<"\t6.-Actiar nucleos PC"		   <<endl;
	cout<<"\tEsperando su orden:" 		   <<endl;
 
        cin >> tecla;
 
		switch(tecla)
		
		{

case '1':
		cout<<"Cargando archivos . . .";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\Optimizar\\acelerarinternet.reg");
		bandera=true;
		exit(0);
		break;

	case '2':
		cout<<"Cargando archivos . . . . .";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\Optimizar\\configuracion.cmd");
		bandera=true;
		exit(0);
		break;		
 	
 	case '3':
 		system("C:ZeroHirescleaner\\archivos\\Optimizar\\optimizar.reg");
 		bandera=true;
 		exit(0);
 		break;
 		
 	case '4':
	 	system("C:ZeroHirescleaner\\archivos\\Optimizar\\apagado.reg");	
		bandera=true;
		exit(0);
		break;
		
	case '5':	
		system("C:ZeroHirescleaner\\archivos\\Optimizar\\instrucciones.txt");
		system("C:\\Windows\\System32\\control.exe system");
		bandera=true;
		exit(0);
		break;
		
	case '6':
		system("C:\\ZeroHirescleaner\\archivos\\submenunucleos.exe");
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
