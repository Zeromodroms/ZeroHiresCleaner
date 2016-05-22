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
    cout<<"\t1.-Eliminar publicidad microsoft edge" <<endl;
	cout<<"\t2.-Hacer Lite Windows 10" 	   <<endl;
	cout<<"\t3.-Mejora seguridad W10" 	   <<endl;
	cout<<"\tEsperando su orden:" 		   <<endl;
 
        cin >> tecla;
 
		switch(tecla)
		
		{

case '1':
		cout<<"Cargando archivos . . .";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\Windows10\\edge.reg");
		bandera=true;
		exit(0);
		break;

	case '2':
		cout<<"Cargando archivos . . . . .";
		cout<<"";
		system("C:\\ZeroHirescleaner\\archivos\\Windows10\\WinLite10V6.1\\rmApps.cmd");
		bandera=true;
		exit(0);
		break;		
 	
 	case '3':
 		cout<<"Deshabilita la opcion modificar host para evitar problemas";
		system("C:ZeroHirescleaner\\archivos\\Windows10\\DWS.exe");
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
