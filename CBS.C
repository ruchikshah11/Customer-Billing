#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
void manchurian();
void noodles();
void rice();
void soup();
void bill();
void dateTime();
void search();
void jain();
void regular();
void output();
void searchData();
struct customer
{
	char name[30],mob[10];
	int billno;
}c;

int ch;	// ch = choice

//total = Manchurian Dishes * Price Total
//ntotal = Noodles Dishes * price Total
//rtotal = Rice Dishes * price Total
//stotal = Soup Dishes * price Total
int total=0,ntotal=0,gtotal=0,rtotal=0,stotal=0;

//	mdish,mdish1 = Manchurian Dishes
int mdish,mdish1;
//	ndish,ndish1,ndish2 = Noodles Dishes
int ndish,ndish1,ndish2;
//	rdish,rdish1,rdish2,rdish3 = Rice Dishes
int rdish,rdish1,rdish2,rdish3;
//	sdish,sdish1,sdish2,sdish3 = Soup Dishes
int sdish,sdish1,sdish2,sdish3;
void  main()
{
	clrscr();
	printf("\n\t\t--------Welcome to Chinese Restaurant----------\n");
	printf("\n\n\t\t _____Food Type_____");
	printf("\n\n\t\t1) Jain");
	printf("\n\n\t\t2) Regular");
	printf("\n\n\t\tChoose Food Type :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:jain();
				break;
		case 2:regular();
				break;
		default:printf("\nOops Invalid Choice");
				break;
	}
	getch();
}
void jain()
{
	int c;
	clrscr();
	do
	{
		printf("\n\t\t--------Welcome to Chinese Restaurant----------\n");
		printf("\n\n\t\t ________MENU________ ");
		printf("\n\n\t\t1) Manchurian");
		printf("\n\n\t\t2) Noodles");
		printf("\n\n\t\t3) Rice");
		printf("\n\n\t\t4) Soup");
		printf("\n\n\t\t5) Search");
		printf("\n\n\t\t6) Bill");
		printf("\n\n\t\t7) Exit");
		printf("\n\n\t\tEnter Your Choice :");
		scanf("%d",&c);
		switch(c)
		{
			case 1:manchurian();
					break;
			case 2:noodles();
					break;
			case 3:rice();
					break;
			case 4:soup();
					break;
			case 5:search();
					break;
			case 6:bill();
					break;
			case 7:clrscr();
					delay(700);
					gotoxy(25,25);
					printf("\n\t\tA PROJECT BY RUCHIK");
					delay(2000);
					exit(1);
						break;
			default:printf("\nOops Invalid Choice :");
					scanf("%d",&c);
					break;
		}
		getch();	
	}while(c >0 && c < 7);

}
void regular()
{
	int r;
	clrscr();
	do
	{
		printf("\n\n\t\t--------Welcome to Chinese Restaurant----------");
		printf("\n\n\t\t ________MENU________ ");
		printf("\n\n\t\t1) Manchurian");
		printf("\n\n\t\t2) Noodles");
		printf("\n\n\t\t3) Rice");
		printf("\n\n\t\t4) Soup");
		printf("\n\n\t\t5) Search");
		printf("\n\n\t\t6) Bill");
		printf("\n\n\t\t7) Exit");
		printf("\n\n\t\tEnter Your Choice :");
		scanf("%d",&r);
		switch(r)
		{
			case 1:manchurian();
					break;
			case 2:noodles();
					break;
			case 3:rice();
					break;
			case 4:soup();
					break;
			case 5:search();
					break;
			case 6:bill();
					break;
			case 7:clrscr();
					delay(700);
					//textcolor(RED);
					gotoxy(25,25);
					printf("\n\t\t A PROJECT BY RUCHIK");
					delay(2000);
					exit(1);
						break;
			default:printf("\nOops Invalid Choice :");
					scanf("%d",&r);
					break;
		}
		getch();	
	}while(r >0 && r < 7);
	
} 
void manchurian()
{
	int i;
	clrscr();
	do{
		printf("\n\n\t\t ---------ITEMS---------\t\t PRICE \n\n");
		printf("\n\n\t\t1) Dry Manchurian \t\t\t  200");
		printf("\n\n\t\t2) Gravy Manchurian \t\t\t  180");
		printf("\n\n\t\t3) Back to Previous Menu");
		printf("\n\n\t\tEnter Your Choice :");
		scanf("%d",&i);

		switch(i)
		{
			case 1:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&mdish);
					total += mdish * 200;
					break;
			case 2: printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&mdish1);
					total += mdish1 * 180;
					break;
			case 3:
					break;
			default:printf("\n\n\t\tOops Invalid Choice!! \nsss\t\tEnter Again :");
					scanf("%d",&i);
					break;
		}

	}while(i >0 && i <3);
}
void noodles()
{
	int j;
	clrscr();
	do{
		printf("\n\n\t\t ---------ITEMS---------\t\t PRICE \n\n");
		printf("\n\n\t\t1) Noodles \t\t\t\t  100");
		printf("\n\n\t\t2) Manchurian With Noodles \t\t  200");
		printf("\n\n\t\t3) Hakka Noodles \t\t\t  150");
		printf("\n\n\t\t4) Back to Previous Menu");
		printf("\n\n\t\tEnter Your Choice :");
		scanf("%d",&j);

		switch(j)
		{
			case 1:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&ndish);
					ntotal = ndish * 100;
					break;
			case 2:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&ndish1);
					ntotal += ndish1 * 200;
					break;
			case 3:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&ndish2);
					ntotal += ndish2 * 150;
					break;
			case 4:
					break;
			default:printf("\n\n\t\tOops Invalid Choice!! \n\t\tEnter Again :");
					scanf("%d",&j);
					break;
		}

	}while(j >0 && j <4);	
}
void rice()
{
	int l;
	clrscr();
	do{
		printf("\n\n\t\t ---------ITEMS---------\t\t PRICE \n\n");
		printf("\n\n\t\t1) Fried Rice \t\t\t\t  215");
		printf("\n\n\t\t2) Schezwan Rice \t\t\t  235");
		printf("\n\n\t\t3) Cheesy & Papery Rice \t\t  285");
		printf("\n\n\t\t4) Back to Previous Menu");
		printf("\n\n\t\tEnter Your Choice :");
		scanf("%d",&l);

		switch(l)
		{
			case 1:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&rdish);
					rtotal += rdish * 215;
					break;
			case 2:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&rdish1);
					rtotal += rdish1 * 235;
					break;
			case 3:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&rdish2);
					rtotal += rdish2 * 285;
					break;
			case 4:
					break;
			
			default:printf("\n\n\t\tOops Invalid Choice!! \n\t\tEnter Again :");
					scanf("%d",&l);
					break;
		}

	}while(l >0 && l <4);	
}
void soup()
{
	int k;
	clrscr();
	do{
		printf("\n\n\t\t ---------ITEMS---------\t\t PRICE \n\n");
		printf("\n\n\t\t1) Manchow Soup \t\t\t  125");
		printf("\n\n\t\t2) Hot 'N' Sour Soup \t\t\t  125");
		printf("\n\n\t\t3) Sweet Corn Soup \t\t\t  150");
		printf("\n\n\t\t4) Burmy Soup \t\t\t\t  150");
		printf("\n\n\t\t5) Back to Previous Menu");
		printf("\n\n\t\tEnter Your Choice :");
		scanf("%d",&k);

		switch(k)
		{
			case 1:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&sdish);
					stotal += sdish * 125;
					break;
			case 2:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&sdish1);
					stotal += sdish1 * 125;
					break;
			case 3:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&sdish2);
					stotal += sdish2 * 150;
					break;
			case 4:printf("\n\n\t\tEnter Dishes:");
					scanf("%d",&sdish3);
					stotal = sdish3 * 150;
					break;
			case 5:
					break;
			default:printf("\n\n\t\tOops Invalid Choice!! \n\t\tEnter Again :");
					scanf("%d",&k);
					break;
		}

	}while(k >0 && k <5);	
}
void bill()
{
	FILE *fp;
	clrscr();
	fp = fopen("chinese.txt","a+");
	//printf("\nDate :%d/%d/%d",t.da_day,t.da_mon,t.da_year);
	printf("\n\n\t\t-------------------- BILL --------------------  ");
	dateTime();
	printf("\t\t----------------------------------------------  ");
	printf("\n\n\t\tEnter Bill No :");
	scanf("%d",&c.billno);
	fprintf(fp,"\nBill No : %d",c.billno);
	printf("\n\n\t\tEnter Your Name :");
	flushall();
	gets(c.name);
	fprintf(fp,"\nName : %s",c.name);

	printf("\n\n\t\tEnter Your Mobile Number :");
	flushall();
	gets(c.mob);
	fprintf(fp,"\nMobile No : %s",c.mob);

	if(ch == 1)
	{
			fprintf(fp, "\nFood Type : Jain");
	}

	if(ch ==2)
	{
		fprintf(fp, "\nFood Type : Regular" );
	}


	if(mdish >0)
	{
		fprintf(fp,"\nDry Manchurian : %d * %d = %d",mdish,200,(mdish*200));
	}

	if(mdish1 > 0) 
	{
		fprintf(fp,"\nGravy Manchurian : %d * %d = %d",mdish1,180,(mdish1*180));
	}

	if (ndish > 0)
	{
		fprintf(fp,"\nNoodles : %d * %d = %d",ndish,100,(ndish*100));
	}


	if(ndish1 > 0)
	{
		fprintf(fp,"\nManchrian With Noodles : %d * %d = %d",ndish1,200,(ndish1*200));
	}

	if(ndish2 > 0)
	{
		fprintf(fp,"\nHakka Noodles : %d * %d = %d",ndish2,150,(ndish2*150));
	}

	if(sdish > 0)
	{
		fprintf(fp,"\nManchow Soup : %d * %d = %d",sdish,125,(sdish*125));
	}

	if(sdish1 > 0)
	{
		fprintf(fp,"\nHot 'N' Sour Soup : %d * %d = %d",sdish1,125,(sdish1*125));
	}

	if(sdish2 > 0)
	{
		fprintf(fp,"\nSweet Corn Soup : %d * %d = %d",sdish2,150,(sdish2*150));
	}

	if(sdish3 > 0)
	{
		fprintf(fp,"\nBurmy Soup : %d * %d = %d",sdish3,150,(sdish3*150));
	}

	if(rdish > 0)
	{
		fprintf(fp,"\nFried Rice : %d * %d = %d",rdish,215,(rdish*215));
	}

	if(rdish1 > 0)
	{
		fprintf(fp,"\nSchezwan Rice : %d * %d = %d",rdish1,235,(rdish1*235));
	}

	if(rdish2 > 0)
	{
		fprintf(fp,"\nCheesy & Papery Rice : %d * %d = %d",rdish2,285,(rdish2*285));
	}

	if(rdish3 > 0)
	{

		fprintf(fp,"\nChilli Garlic Rice : %d * %d = %d",rdish3,235,(rdish3*235));
	}
	gtotal = total + ntotal + stotal + rtotal;

	output();
	fprintf(fp,"\nTotal Bill : %d",gtotal);
	fprintf(fp, "\n---------------------------------");

}

void dateTime()
{
		struct date today;//Structure variable for today date
		struct time *ptr;
		time_t t;//used for time
		char str[100];
		t = time(NULL);
		ptr = localtime(&t);

		getdate(&today);	//get date from system
		printf("\n\t\tDate = %d/%d/%d\t\t",today.da_day,today.da_mon,today.da_year);

		strftime(str,100,"Time : %H:%M:%S:%p ",ptr);
		puts(str);
}
void search()
{
	
	FILE *fp;		
	char name[20];
	int flag = 0;
	clrscr();
	fp = fopen("chinese.txt","r");
	printf("\n\n\t\t---------Search Record---------");

	printf("\n\n\t\t Enter Name To Search: ");
	scanf("%s",name);
	while(!feof(fp))
	{
		
		fscanf(fp,"%s %s %d", &c.name,&c.mob,&gtotal);
		if(strcmp(c.name,name)==0)
		{
			flag=1;
			clrscr();
			printf("\n\n\t\t-----Search Record Found-----\n\n");
			//printf("\n\n\t\t Name : %s \n\n\t\t Total Bill : %d",c.name,gtotal);
			searchData();
		}
	}
	if(flag == 0)
		printf("\n\n\t\t !!! No Record Found !!! ");
	fclose(fp);
}
void output()
{
	clrscr();
	printf("\n\n\t\t-------------------- BILL --------------------  ");
	dateTime();
	printf("\t\t----------------------------------------------  ");
	printf("\n\n\t\tBill No   : %d",c.billno);
	printf("\n\n\t\tName      : %s",c.name);
	printf("\n\n\t\tMobile No : %s",c.mob);


	if(ch == 1)
	{
		printf("\n\n\t\tFood Type : Jain");
	}

	if(ch ==2)
	{
		printf("\n\n\t\tFood Type : Regular");
	}

	printf("\n\t\t----------------------------------------------  ");
	printf("\n\t\t\t\tOrder Details");
	printf("\n\t\t----------------------------------------------  ");

	if(mdish >0)
	{
		printf("\n\n\t\tDry Manchurian          : %d * %d = %d",mdish,200,(mdish*200));		
	}

	if(mdish1 > 0)
	{
		printf("\n\n\t\tGravy Manchurian        : %d * %d = %d",mdish1,180,(mdish1*180));		
	}

	if (ndish > 0)
	{
		printf("\n\n\t\tNoodles                 : %d * %d = %d",ndish,100,(ndish*100));	
	}


	if(ndish1 > 0)
	{
		printf("\n\n\t\tManchurian With Noodles : %d * %d = %d",ndish1,200,(ndish1*200));
	}

	if(ndish2 > 0)
	{
		printf("\n\n\t\tHakka Noodles           : %d * %d = %d",ndish2,150,(ndish2*150));
	}

	if(sdish > 0)
	{
		printf("\n\n\t\tManchow Soup            : %d * %d = %d",sdish,125,(sdish*125));
	}

	if(sdish1 > 0)
	{
		printf("\n\n\t\tHot 'N' Sour Soup       : %d * %d = %d",sdish1,125,(sdish1*125));
	}

	if(sdish2 > 0)
	{
		printf("\n\n\t\tSweet Corn Soup         : %d * %d = %d",sdish2,150,(sdish2*150));
	}

	if(sdish3 > 0)
	{
		printf("\n\n\t\tBurmy Soup              : %d * %d = %d",sdish3,150,(sdish3*150));
	}

	if(rdish > 0)
	{
		printf("\n\n\t\tFried Rice              : %d * %d = %d",rdish,215,(rdish*215));
	}

	if(rdish1 > 0)
	{
		printf("\n\n\t\tSchezwan Rice           : %d * %d = %d",rdish1,235,(rdish1*235));
	}

	if(rdish2 > 0)
	{
		printf("\n\n\t\tCheesy & Papery Rice    : %d * %d = %d",rdish2,285,(rdish2*285));
	}

	if(rdish3 > 0)
	{
		printf("\n\n\t\tChilli Garlic Rice      : %d * %d = %d",rdish3,235,(rdish3*235));
	}
	printf("\n\t\t----------------------------------------------  ");	
	printf("\n\n\t\tTotal Bill                       = %d",gtotal);
	printf("\n\t\t----------------------------------------------  ");


}void searchData()
{
	clrscr();
	printf("\n\n\t\t--------------SEARCH RECORD-------------");
	printf("\n\n\t\tBill No   : %d",c.billno);
	printf("\n\n\t\tName      : %s",c.name);

	if(ch == 1)
	{
		printf("\n\n\t\tFood Type : Jain");
	}

	if(ch ==2)
	{
		printf("\n\n\t\tFood Type : Regular");
	}

	printf("\n\t\t----------------------------------------------  ");
	printf("\n\t\t\t\tOrder Details");
	printf("\n\t\t----------------------------------------------  ");

	if(mdish >0)
	{
		printf("\n\n\t\tDry Manchurian          : %d * %d = %d",mdish,200,(mdish*200));		
	}

	if(mdish1 > 0)
	{
		printf("\n\n\t\tGravy Manchurian        : %d * %d = %d",mdish1,180,(mdish1*180));		
	}

	if (ndish > 0)
	{
		printf("\n\n\t\tNoodles                 : %d * %d = %d",ndish,100,(ndish*100));	
	}

	if(ndish1 > 0)
	{
		printf("\n\n\t\tManchurian With Noodles : %d * %d = %d",ndish1,200,(ndish1*200));
	}

	if(ndish2 > 0)
	{
		printf("\n\n\t\tHakka Noodles           : %d * %d = %d",ndish2,150,(ndish2*150));
	}

	if(sdish > 0)
	{
		printf("\n\n\t\tManchow Soup            : %d * %d = %d",sdish,125,(sdish*125));
	}

	if(sdish1 > 0)
	{
		printf("\n\n\t\tHot 'N' Sour Soup       : %d * %d = %d",sdish1,125,(sdish1*125));
	}

	if(sdish2 > 0)
	{
		printf("\n\n\t\tSweet Corn Soup         : %d * %d = %d",sdish2,150,(sdish2*150));
	}

	if(sdish3 > 0)
	{
		printf("\n\n\t\tBurmy Soup              : %d * %d = %d",sdish3,150,(sdish3*150));
	}

	if(rdish > 0)
	{
		printf("\n\n\t\tFried Rice              : %d * %d = %d",rdish,215,(rdish*215));
	}

	if(rdish1 > 0)
	{
		printf("\n\n\t\tSchezwan Rice           : %d * %d = %d",rdish1,235,(rdish1*235));
	}

	if(rdish2 > 0)
	{
		printf("\n\n\t\tCheesy & Papery Rice    : %d * %d = %d",rdish2,285,(rdish2*285));
	}

	if(rdish3 > 0)
	{
		printf("\n\n\t\tChilli Garlic Rice      : %d * %d = %d",rdish3,235,(rdish3*235));
	}
	printf("\n\t\t----------------------------------------------  ");	
	printf("\n\n\t\tTotal Bill                        = %d",gtotal);
	printf("\n\t\t----------------------------------------------  ");

}