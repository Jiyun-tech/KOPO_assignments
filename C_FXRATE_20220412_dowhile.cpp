// Exchange Korean Won for foreign currency. (FXRate as of April 11th, 2022)
// foreign currency : USD, JPY, EUR, CNY, GBP
// print out the exchange result (exchanged foreing currency & refunded Korean Won changes)
// print out the Korean Won changes in currency units (1,000won / 500won / 100won/ 50won/ 10won)
// use "if" to select the foreign currency to exchange
// use "do while" to return to select currency process when the user choose the wrong number

#include <stdio.h>

int main () {
	const float FXRATE_USD = 1233.5, FXRATE_JPY = 985.13 /*100JPY*/, FXRATE_EUR = 1342.42, 
				FXRATE_CNY = 193.21, FXRATE_GBP = 1604.97;
	int inputKRW = 0; int inputNumber = 0; int returnKRW = 0; int returnKRWFinal = 0;
	int returnKRWFinal2 = 0, returnKRW1000 = 0, returnKRW500 = 0;
	int returnKRW100 = 0, returnKRW50 = 0, returnKRW10 = 0;
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%d", &inputKRW);
	
	do {
		printf("ȯ���� ���ϴ� ��ȭ ��ȣ�� �����ϼ���. (1:USD, 2:JPY, 3:EURO, 4.CNY, 5:GBP) : ");
		scanf("%d", &inputNumber);
	} while (inputNumber < 1 || inputNumber > 5);
	
	printf("====================\n");
	
	if (inputNumber == 1) {
		// KRW -> USD
		float outputUSD = inputKRW / FXRATE_USD;
		int outputUSDFinal = outputUSD/1;
		returnKRW = inputKRW - outputUSDFinal * FXRATE_USD; 
		returnKRWFinal = returnKRW - returnKRW%10;
		
		returnKRWFinal2 = returnKRWFinal;
		returnKRW1000 = returnKRWFinal2/1000;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW1000 * 1000;
		returnKRW500 = returnKRWFinal2/500;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW500 * 500;
		returnKRW100 = returnKRWFinal2/100;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW100 * 100;
		returnKRW50 = returnKRWFinal2/50;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW50 * 50;
		returnKRW10 =returnKRWFinal2/10;
		printf("USD ���� ȯ�� : %10.2f\n", FXRATE_USD);
		printf("*ȯ�� ���*\n");
		printf("���� : %d �� \n", inputKRW);
		printf("�޷� : %d �޷�\n", outputUSDFinal);
		printf("�Ž����� : %d �� (1000 �� X %d��, 500�� X %d��, 100�� X %d��, 50�� X %d��, 10�� X %d��)\n"
				,returnKRWFinal, returnKRW1000, returnKRW500, returnKRW100, returnKRW50, returnKRW10);
		printf("====================\n");
	} 
	else if (inputNumber == 2) {	
		// KRW -> JPY
		float outputJPY = inputKRW / (FXRATE_JPY / 100);
		int outputJPYFinal = (int)outputJPY / 100 * 100;
		returnKRW = inputKRW - outputJPYFinal * (FXRATE_JPY / 100); 
		returnKRWFinal = returnKRW - returnKRW%10;
		
		returnKRWFinal2 = returnKRWFinal;
		returnKRW1000 = returnKRWFinal2/1000;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW1000 * 1000;
		returnKRW500 = returnKRWFinal2/500;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW500 * 500;
		returnKRW100 = returnKRWFinal2/100;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW100 * 100;
		returnKRW50 = returnKRWFinal2/50;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW50 * 50;
		returnKRW10 =returnKRWFinal2/10;
		printf("JPY ���� ȯ�� : %10.2f\n", FXRATE_JPY);
		printf("*ȯ�� ���*\n");
		printf("���� : %d �� \n", inputKRW);
		printf("�� :  %d ��\n", outputJPYFinal);
		printf("�Ž����� : %d �� (1000 �� X %d��, 500�� X %d��, 100�� X %d��, 50�� X %d��, 10�� X %d��)\n"
				,returnKRWFinal, returnKRW1000, returnKRW500, returnKRW100, returnKRW50, returnKRW10);
		printf("====================\n");
	}
	else if (inputNumber == 3) {
		// KRW -> EUR
		float outputEUR = inputKRW / FXRATE_EUR;
		int outputEURFinal = outputEUR/1;
		returnKRW = inputKRW - outputEURFinal * FXRATE_EUR; 
		returnKRWFinal = returnKRW - returnKRW%10;
		
		returnKRWFinal2 = returnKRWFinal;
		returnKRW1000 = returnKRWFinal2/1000;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW1000 * 1000;
		returnKRW500 = returnKRWFinal2/500;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW500 * 500;
		returnKRW100 = returnKRWFinal2/100;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW100 * 100;
		returnKRW50 = returnKRWFinal2/50;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW50 * 50;
		returnKRW10 =returnKRWFinal2/10;
		printf("EUR ���� ȯ�� : %10.2f\n", FXRATE_EUR);
		printf("*ȯ�� ���*\n");
		printf("���� : %d �� \n", inputKRW);
		printf("���� : %d ����\n", outputEURFinal);
		printf("�Ž����� : %d �� (1000 �� X %d��, 500�� X %d��, 100�� X %d��, 50�� X %d��, 10�� X %d��)\n"
				,returnKRWFinal, returnKRW1000, returnKRW500, returnKRW100, returnKRW50, returnKRW10);
		printf("====================\n");	 
	} 
	else if (inputNumber == 4) {
		// KRW -> CNY
		float outputCNY = inputKRW / FXRATE_CNY;
		int outputCNYFinal = outputCNY/1;
		returnKRW = inputKRW - outputCNYFinal * FXRATE_CNY; 
		returnKRWFinal = returnKRW - returnKRW%10;
		
		returnKRWFinal2 = returnKRWFinal;
		returnKRW1000 = returnKRWFinal2/1000;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW1000 * 1000;
		returnKRW500 = returnKRWFinal2/500;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW500 * 500;
		returnKRW100 = returnKRWFinal2/100;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW100 * 100;
		returnKRW50 = returnKRWFinal2/50;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW50 * 50;
		returnKRW10 =returnKRWFinal2/10;
		printf("CNY ���� ȯ�� : %10.2f\n", FXRATE_CNY);
		printf("*ȯ�� ���*\n");
		printf("���� : %d �� \n", inputKRW);
		printf("���� : %d ����\n", outputCNYFinal);
		printf("�Ž����� : %d �� (1000 �� X %d��, 500�� X %d��, 100�� X %d��, 50�� X %d��, 10�� X %d��)\n"
				,returnKRWFinal, returnKRW1000, returnKRW500, returnKRW100, returnKRW50, returnKRW10);
		printf("====================\n");
	}
	else if (inputNumber == 5) {	 
	// KRW -> GBP
		float outputGBP = inputKRW / FXRATE_GBP;
		int outputGBPFinal = outputGBP/1;
		returnKRW = inputKRW - outputGBPFinal * FXRATE_GBP; 
		returnKRWFinal = returnKRW - returnKRW%10;
		
		returnKRWFinal2 = returnKRWFinal;
		returnKRW1000 = returnKRWFinal2/1000;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW1000 * 1000;
		returnKRW500 = returnKRWFinal2/500;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW500 * 500;
		returnKRW100 = returnKRWFinal2/100;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW100 * 100;
		returnKRW50 = returnKRWFinal2/50;
		returnKRWFinal2 = returnKRWFinal2 - returnKRW50 * 50;
		returnKRW10 =returnKRWFinal2/10;
		printf("GBP ���� ȯ�� : %10.2f\n", FXRATE_GBP);
		printf("*ȯ�� ���*\n");
		printf("���� : %d �� \n", inputKRW);
		printf("�Ŀ�� : %d �Ŀ��\n", outputGBPFinal);
		printf("�Ž����� : %d �� (1000 �� X %d��, 500�� X %d��, 100�� X %d��, 50�� X %d��, 10�� X %d��)\n"
				,returnKRWFinal, returnKRW1000, returnKRW500, returnKRW100, returnKRW50, returnKRW10);
	}
	
	 return 0;
}