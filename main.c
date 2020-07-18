#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int num,b,c,d,u,nac,edd,dia;
    char nom[30],esc[30],mes[10],dicc[40],fac[15],l,pass[20];
	const char contrasena[]="Uingenierias";
    int po,x,prom, correcto, intento;
    do{
		printf("UNIVERSIDAD DE LA INGENIERIA\n\n\n");
		printf("1)Informacion Importante: \n");
		printf("2)Carreras disponibles: \n");
		printf("3)Registro de estudiantes: \n");
		printf("4)Portal Docente: \n");
		printf("5)Presiona 5 para salir\n\n");
		printf("Selecciona una opcion:  ");

		scanf("%d",&num);

		switch(num){
		
			case 1: 
				printf("\n---BIENVENIDO A NUESTRO PORTAL---\n\n");
				printf("\n Mision: Educamos a personas de todo Costa Rica en areas de ingenieria mediante educacion a distancia, ofrecemos educacion de calidad a bajo precio con el fin de formar mas profesionales para el pais expertos en diferentes tecnologias y facilitando el acceso de educacion a estudiantes que no tienen muchos recursos mediante nuestras bajas cuotas de matricula, ademas de facilitarles la opcion dividir la cuota de matricula a lo largo de los meses de duracion de los cursos.");
				printf("\n Vision: Satisfacer la demanda de ingenieros que existe en el pais, aumentar nuestra oferta de ingenierias, ademas de ofrecer educacion a todos los rincones del pais. Aumentar nuestra capacidad de becas socioeconomicas para asi llegar a personas con tipo de situaciones economicas, ademas de incluir becas de otra indole como por alto rendimiento o participacion. \n");
				printf("\n Somos una universidad que promovemos la igualdad, respetamos todo tipo de creencias, la diversidad y promovemos a nuestros estudiantes el respeto a las diferencias y promovemos la importancia de la inteligencia emocional. \n");
				break;

			case 2:
				printf("CARRERAS DISPONIBLES: \n");
				printf("1)Ingenieria Quimica\n\n");
				printf("2)Ingenieria Electrica\n\n");
				printf("3)Ingenieria Industrial\n\n");
				printf("4)Ingenieria En Sistemas\n\n");
				printf("5)Salir\n\n");
				printf( "Elija una opcion de carrera: ");
				scanf("%d",&b);
			
				switch(b){
					case 1:
						printf("La ingenieria quimica es una rama de la ingenieria que se encarga del estudio, diseño, manutencion, evaluacion, optimizacion, simulacion, construccion y operacion de todo tipo de elementos\n");
						break;
					case 2:
						printf("La ingenieria electrica es el campo de la ingenieria que se ocupa del estudio y la aplicacion de la electricidad, la electronica y el electromagnetismo\n");
						break;
					case 3:
						printf("La ingenieria industrial es una de las ramas de la ingenieria, y se ocupa de la optimizacion de uso de recursos humanos, tecnicos e informativos, asi como el manejo y gestion optimos de los sistemas\n");
						break;
					case 4:
						printf("La ingenieria en sistemas es una rama interdisciplinaria de la ingenieria que permite estudiar y comprender la realidad, con el proposito de implementar u optimizar sistemas complejos.\n");
						break;
					default:
						break;

				}
				break;
			case 3:
				printf("REGISTRO DE ALUMNOS\n\n");
				printf("Cuantos alumnos quiere registrar?\n");
				scanf("%d", &po);
			
				FILE* fp;
				fp = fopen("nuevosIngresos.txt", "wtr");

				for(x=1;x<=po;x++){
					printf("Nombre completo: \n");
					scanf("%s", nom);
					printf("Año de nacimiento: \n");
					scanf("%d",&nac);
					
					if (nac>2020) {
						printf("DATOS ERRONEOS,INTENTE DE NUEVO\n");
							printf("Año de nacimiento: \n");
							scanf("%d",&nac);
					}

					printf("Dia de nacimiento:\n");
					scanf("%d", &dia);
					printf("Mes de nacimiento:\n");
					scanf("%s", mes);
					printf("Edad:\n");
					scanf("%d", &edd);
					printf("Escuela bachillerato de proveniencia:\n");
					scanf("%s", esc);
					printf("Promedio:\n");
					scanf("%d", &prom);
					printf("Direccion de domicilio:\n");
					scanf("%s", dicc);
					printf("Carrera a ingresar:\n");
					scanf("%s", fac);
					
					printf("\n");
					printf("Tus datos se han guardado correctamente\n\n");	
					fprintf(fp, "Nombre: %s. \n Nacimiento = Dia: %d, Mes: %s, Año: %d\n Edad: %d\n Colegio de procedencia: %s \n Promedio: %d\n Carrera: %s \n\n", nom, dia, mes, nac, edd, esc,prom, fac);
				}
				fclose(fp);

			break;	
			case 4:
				printf("PORTAL DOCENTE\n\n");
				intento=1;
				correcto=0;
			
				printf("Introduzca la contrasena:"); 
				scanf("%s", pass);

				if (strcmp(pass,contrasena)==0) correcto=1;
				while ((correcto==0)&&(intento<3)) {
					intento++;
					printf("Contrasena incorrecta. %i intento: ", intento); printf("\n");
					scanf("%s", pass);
					if (strcmp(pass,contrasena)==0) correcto=1;
				}
			
				if (correcto==0) printf("Se han excedido el numero de intentos.\n");
				else {
					printf("Bienvenido profesor\n\n");
					printf("1)Ver nuevos Ingresos\n\n");
					printf("2)Ingenieria Electrica\n\n");
					printf("3)Ingenieria Industrial\n\n");
					printf("4)Ingenieria En Sistemas\n\n");
					printf( "Presione su opcion para continuar: ");
					scanf("%d",&b);
								
					switch(b){
					case 1:
					printf("*****Nuevos ingresos*****\n\n");
					FILE *fp;
					fp = fopen ( "nuevosIngresos.txt", "r" );   
					char linea[256];

					while(fgets(linea, sizeof(linea), fp)){
						printf("%s", linea);
					}

					fclose ( fp );
					}
				}
			break;

		case 5:
			num=0;
			break;
		default:
			printf("ESTA OPCION ES DESCONOCIDA\n\n");
			break;
    	}
    }while (num !=0);

    return 0;
}
