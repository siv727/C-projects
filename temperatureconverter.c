#include <stdio.h>
#define KELVIN 273.15

float fahrenheitToKelvin(float temp);
float fahrenheitToCelsius(float temp);
float celsiusToKelvin(float temp);
float celsiusToFahrenheit(float temp);
float kelvinToCelsius(float temp);
float kelvinToFahrenheit(float temp);

int main(){
    float cTemp, fTemp, kTemp, temp;
    int tempconvertfrom = 0, tempconvertto = 0;
    int count = 0;

    printf("TEMPERATURE CONVERTER\n\n");
    printf("Convert Temperature From\n1:\tKelvin\n2:\tCelsius\n3:\tFahrenheit\n\n");
// USER INPUT TEMPERATURE CONVERT FROM X     
    while(count = 1){
        printf("\nConversion Mode: ");
        scanf("%d", &tempconvertfrom);
        if(tempconvertfrom <= 3 && tempconvertfrom >= 1){
        printf("\n");
        break;
        }
        else{
        count = 0;
        printf("INVALID INPUT!! TRY AGAIN\n");
        }
    }
    
    printf("Convert Temperature To\n4:\tKelvin\n5:\tCelsius\n6:\tFahrenheit\n\n");
// USER INPUT TEMPERATURE CONVERT TO X
    while(count = 1){
        printf("\nConversion Mode: ");
        scanf("%d", &tempconvertto);
        if(tempconvertfrom + 3 == tempconvertto){
        count = 0;
        printf("INVALID INPUT!! TRY AGAIN\n");
        }
        else if(tempconvertto <= 6 && tempconvertto >= 4){
        printf("\n");
        break;
        }
        else{
        count = 0;
        printf("INVALID INPUT!! TRY AGAIN\n");
		}
    }

//CONVERSION
    switch(tempconvertfrom){ 
        case 1: // KELVIN 
            switch(tempconvertto){
        		case 5:
        			printf("\nThe temperature is %.2f°C", kelvinToCelsius(temp));
            		break;
            	case 6:
        			printf("\nThe temperature is %.2f°C", kelvinToFahrenheit(temp));
            		break;
			} 
        case 2: // CELSIUS
        	switch(tempconvertto){
        		case 4:
        			printf("\nThe temperature is %.2f°C", celsiusToKelvin(temp));
            		break;
            	case 6:
        			printf("\nThe temperature is %.2f°C", celsiusToFahrenheit(temp));
            		break;
			} 
        case 3: //FAHRENHEIT
        	switch(tempconvertto){
        		case 4:
        			printf("\nThe temperature is %.2f°C", fahrenheitToKelvin(temp));
            		break;
            	case 5:
        			printf("\nThe temperature is %.2f°C", fahrenheitToCelsius(temp));
            		break;
			} 
    }

    return 0;
}


//FUNCTION SPECIFICATIONS
float fahrenheitToKelvin(float temp){
	printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temp);
    float kTemp = ((temp - 32)*5)/9 + KELVIN;
    return kTemp;
}

float fahrenheitToCelsius(float temp){
	printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temp);
    float cTemp = ((temp - 32)*5)/9;
    return cTemp;
}

float celsiusToKelvin(float temp){
	printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);
    float kTemp = temp + KELVIN;
    return kTemp;
}

float celsiusToFahrenheit(float temp){
	printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);
    float fTemp = (temp * 9/5) + 32;
    return fTemp;
}

float kelvinToCelsius(float temp){
	printf("Enter the temperature in Kelvin: ");
    scanf("%f", &temp);
    float cTemp = temp - KELVIN;
    return cTemp;
}

float kelvinToFahrenheit(float temp){
	printf("Enter the temperature in Kelvin: ");
    scanf("%f", &temp);
    float cTemp = ((temp - KELVIN)*9)/5 + 32;
    return cTemp;
}