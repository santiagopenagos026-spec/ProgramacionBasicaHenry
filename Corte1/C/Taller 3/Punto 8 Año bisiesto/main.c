int main() {
    int ano;
    int leido = 0;
    
    printf ("Ingrese el ano que desea verificar");
    scanf("%d", &ano);

	if (ano % 4 == 0) {
		
		printf("El ano es bisiesto");
	}
		
		
		else if (ano % 4 !=0){
		
			
			printf("El ano no es bisiesto");
		}
	
	
}
