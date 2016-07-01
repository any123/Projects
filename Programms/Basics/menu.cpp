# include<stdio.h>

int main()
{	char b;
	do
	{		
	printf("Enter day\n");
	int ch,a;
	printf("1: MON 2: TUE 3:WED 4:THURS 5:FRI 6:SAT 7:SUN\n");
	scanf("%d",&ch);
	printf("Now enter as following\n");
	
	switch(ch)
	{
		case 1: printf("1: MOR 2: AFTR 3:EVE 4:NGHT\n");
				scanf("%d",&a);
					switch(a)
					{
						case 1: printf("parathe\n");
							break;
						case 2:printf("Rajma\n");
							break;
						case 3: printf("Samose\n");
							break;
						case 4: printf("Paneer & Halwa\n");	
					}
			break;
				case 2: printf("1: MOR 2: AFTR 3:EVE 4:NGHT\n");
				scanf("%d",&a);
					switch(a)
					{
						case 1: printf("Bread\n");
							break;
						case 2:printf("Daal Rayta\n");
							break;
						case 3: printf("Bread Pakoda\n");
							break;
						case 4: printf("Pasteries Bhindi\n");	
					}
			break;
				case 3: printf("1: MOR 2: AFTR 3:EVE 4:NGHT\n");
				scanf("%d",&a);
					switch(a)
					{
						case 1: printf("   \n");
							break;
						case 2:printf("Simple Daal\n");
							break;
						case 3: printf("Hot Dog\n");
							break;
						case 4: printf("Paneer & Ice Cream hmmmm!!!!!\n");	
					}
			break;
				case 4: printf("1: MOR 2: AFTR 3:EVE 4:NGHT\n");
				scanf("%d",&a);
					switch(a)
					{
						case 1: printf("Paav Bhaji\n");
							break;
						case 2:printf("   \n");
							break;
						case 3: printf("Bread Pakoda\n");
							break;
						case 4: printf("  \n");	
					}
			break;
				case 5: printf("1: MOR 2: AFTR 3:EVE 4:NGHT\n");
				scanf("%d",&a);
					switch(a)
					{
						case 1: printf("Aaloo Parathe\n");
							break;
						case 2:printf("Kadhi\n");
							break;
						case 3: printf("Burger with cofee\n");
							break;
						case 4: printf("Mix Veg & Kalakand!!!!\n");	
					}
			break;
				case 6: printf("1: MOR 2: AFTR 3:EVE 4:NGHT\n");
				scanf("%d",&a);
					switch(a)
					{
						case 1: printf("Dosa Or Utpam\n");
							break;
						case 2:printf("Kadhi\n");
							break;
						case 3: printf("Pakode with coffee\n");
							break;
						case 4: printf("Lockey sabji & Kheer\n");	
					}
			break;
				case 7: printf("1: MOR 2: AFTR 3:EVE 4:NGHT\n");
				scanf("%d",&a);
					switch(a)
					{
						case 1: printf("Butter Naan\n");
							break;
						case 2:printf("Aloo & Soyabeen\n");
							break;
						case 3: printf("Only chaaye\n");
							break;
						case 4: printf("Kofta Sewaatyian !!!\n");	
					}
			break;
	}
		printf("Wish to continue Y/N\n");
		scanf("%s",&b);
			
	}while(b=='y'|| b=='Y');

	return 0;
}
