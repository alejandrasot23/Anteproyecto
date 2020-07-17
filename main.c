#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

FILE* fp;

int main()
{
	int num,b,c,d,u,nac,edd,dia;
    char nom[30],esc,mes,dicc,fac,l,pass[10];
    char enteroACaracter[nac];
	const char contrasena[]="Uingenierias";
    int po,x,prom, correcto, intento;
    do
    {
    printf("UNIVERSIDAD DE LA INGENIERIA\n\n\n");
    printf("1)Informacion Importante: \n");
    printf("2)Carreras disponibles: \n");
    printf("3)Registro de estudiantes: \n");
    printf("4)Portal Docente: \n");
    printf("5)Presiona 5 para salir\n\n");
    printf("Selecciona una opcion:  ");

    scanf("%d",&num);

    switch(num)
    {
    
    case 1: 
    printf("\n---BIENVENIDO A NUESTRO PORTAL---\n\n");
    printf("\n Mision: Educamos a personas de todo Costa Rica en areas de ingenieria mediante educacion a distancia, ofrecemos educacion de calidad a bajo precio con el fin de formar mas profesionales para el pais expertos en diferentes tecnologias y facilitando el acceso de educacion a estudiantes que no tienen muchos recursos mediante nuestras bajas cuotas de matricula, ademas de facilitarles la opcion dividir la cuota de matricula a lo largo de los meses de duracion de los cursos.");
    printf("\n Vision: Satisfacer la demanda de ingenieros que existe en el pais, aumentar nuestra oferta de ingenierias, ademas de ofrecer educacion a todos los rincones del pais. Aumentar nuestra capacidad de becas socioeconomicas para asi llegar a personas con tipo de situaciones economicas, ademas de incluir becas de otra indole como por alto rendimiento o participacion. \n");
	printf("\n Somos una universidad que promovemos la igualdad, respetamos todo tipo de creencias, la diversidad y promovemos a nuestros estudiantes el respeto a las diferencias y promovemos la importancia de la inteligencia emocional. \n");
	system("pause");
        break;

    case 2:
    system("cls");
    printf("CARRERAS DISPONIBLES: \n");
    printf("1)Ingenieria Quimica\n\n");
    printf("2)Ingenieria Electrica\n\n");
    printf("3)Ingenieria Industrial\n\n");
    printf("4)Ingenieria En Sistemas\n\n");
    printf( "Presione cualquier tecla para continuar: ");
    scanf("%d",&b);
    
	    switch(b)
	    {
	    case 1:
	    printf("La ingenieria quimica es una rama de la ingenieria que se encarga del estudio, diseño, manutencion, evaluacion, optimizacion, simulacion, construccion y operacion de todo tipo de elementos\n");
		system("pause");
		break;
		}
    
    system("cls");
     break;


    case 3:
        system("cls");
	    
		printf("REGISTRO DE ALUMNOS\n\n");
        printf("Cuantos alumnos quiere registrar\?");
        scanf("%d", &po);
        for(x=1;x<=po;x++)
         {
        printf("Nombre completo:  ");
        scanf("%s", &nom);
        printf("Año de nacimiento: ");
        scanf("%d",&nac);
        
        if (nac>2020)
        {
        printf("DATOS ERRONESOS,INTENTE DE NUEVO\n");
                printf("año de nacimiento:  ");
        scanf("%d",&nac);
        }

        printf("Dia de nacimiento: ");
        scanf("%d", &dia);
        printf("Mes de nacimiento:  ");
        scanf("%s", &mes);
        printf("Edad:  ");
        scanf("%d", &edd);
        printf("Escuela bachillerato de proveniencia: ");
        scanf("%s", &esc);
        printf("Promedio: ");
        scanf("%d", &prom);

        printf("Direccion de domicilio: ");
        scanf("%s", &dicc);
        printf("Carrera a ingresar: ");
        scanf("%s", &fac);
	    
        printf("\n");
        printf("Tus datos se han guardado correctamente\n\n");
        
        FILE* fp;
	    fp = fopen("nuevosIngresos.txt", "wtr");
	    fputs(nom, fp);
		fclose(fp);
		
		printf("Presione cualquier tecla para continuar:  ");
        scanf("%d",&c);
        system("cls");
        break;
	}
    case 4:
        system("cls");
        printf("PORTAL DOCENTE\n\n");
        intento=1;
	    correcto=0;
	
	    printf("Introduzca la contrasena: "); gets(pass); printf("\n");
	    if (strcmp(pass,contrasena)==0) correcto=1;
	    while ((correcto==0)&&(intento<3))
	    {
			intento++;
	        printf("Contrasena incorrecta. %i intento: ", intento); gets(pass); printf("\n");
	        
	        if (strcmp(pass,contrasena)==0) correcto=1;
	    }
	
	    if (correcto==0) printf("Se han excedido el numero de intentos.");
	    else
	        {
	            printf("Bienvenido profesor\n\n");
	                system("cls");
				    printf("Seleccione su carrera \n");
				    printf("1)Ingenieria Quimica\n\n");
				    printf("2)Ingenieria Electrica\n\n");
				    printf("3)Ingenieria Industrial\n\n");
				    printf("4)Ingenieria En Sistemas\n\n");
				    printf( "Presione su opcion para continuar: ");
				    scanf("%d",&b);
				    
					    switch(b)
					    {
					    case 1:
						printf("Nuevos ingresos\n\n");
						FILE *fp;
						fp = fopen ( "nuevosIngresos.txt", "r" );        
						if (fp==NULL) {fputs ("No hay nuevos ingresos registrados",stderr); exit (1);}
						system("pause");
						fclose ( fp );
						system("pause");
						break;
						}
				    
				    system("cls");
				     break;
	        }


    case 5:
       system("cls");
       getch();
        break;





     case 0:
    default:
    printf("ESTA OPCION ES DESCONOCIDA\n\n");
    break;


    }
    }
    while (num !=0);

    return 0;
}
