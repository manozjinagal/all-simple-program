#include<stdio.h>
#include<conio.h>
	
                struct employee
            {
	            int emp_nu;
	            char emp_name[10];
	            float phy,math,chem;
	            float total;
             	float per;
            };
            int day_of_year(int a,int b,int c);
main()
{
	int i;
	for(i=0;i<3;i++)
	{
	int a;
	printf("Enter the password\n");
	scanf("%d",&a);
	if(a==12345)
	{
	int a;
	printf("Choose A Program\n");
	printf("1. C program of check if input character is a vowel using switch case.");
	printf("\n2. C program to read the age of a candidate and determaine whether it is eligible for casting his/her own vote.");
	printf("\n3. C program to accept a coordinate system and determine in which quadrant the coordinate point lies.");
	printf("\n4. C program to find the eligiblity of admission for a professional course based on the criteria.");
	printf("\n5. C program to read name,roll, marks.");
	printf("\n6. C program to find day number in a year.");
	printf("\n7. C program using STRUCT.");
	printf("\n8. C program of PASCAL TRIANGLE.");
	printf("\n9. C program to find character is smaller or capital.\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			{
				char ch;
      	        printf("program of checking input character is vowel or not\n");
      	        scanf("%s",&ch);
     	        switch(ch)
       	        {
	     	        case 'a':
	    	        case 'e':
	    	        case 'i':
	    	        case 'o':
	    	        case 'u':
		            	printf("character is vowel\n");
			            break;
	                default: printf("character is not vowel\n");
	            }
	            break;
	        }
	    case 2:
		    {
		    int a;
		    char v[10];
		    printf("program of read the age of candidate that he is eligibale or not\n");
		    printf("Enter you name\n");
		    scanf("%s",&v);
		    printf("Enter your age\n");
		    scanf("%d",&a);
		    if( a>=18)
		    {
		    	printf("%s is eligiable for vote \n",v);
			}
			else
			{
				printf("you are not eligible for vote\n");
			}
			break ;
		    }
		default:
		{
		  printf("ENter valid choice");
		  break ;
	    }
	    case 3:
	    {
	    	int x,y;
	    	printf("C program of find in which quadrand your coordinates is\n");
	    	printf("enter X coordinates");
	    	scanf("%d",&x);
	    	printf("Enter Y coordinates");
	    	scanf("%d",&y);
	    	if(x>=0 && y>=0)
	    	{
	    		printf("your coordinates is 1st quadrants");
			}
			else if(x>=0 && y<=0)
	    	{
	    		printf("your coordinates is 2nd quadrants");
			}
			else if(x<=0 && y<=0)
	    	{
	    		printf("your coordinates is 3rd quadrants");
			}
			else if(x>=0 && y<=0)
	    	{
	    		printf("your coordinates is 4rth quadrants");
			}
			else
			{
				printf("enter valid coordinates");
			}
			break ;
		}
		case 4:
			{
					int x,y;
                 	int phy,math,chem;
                 	printf("C program of find the eligiblity of admission\n");
                 	printf("enter physics marks\n");
                 	scanf("%d",&phy);
                    printf("Enter math marks\n");
                   	scanf("%d",&math);
                 	printf("Enter math marks\n");
                   	scanf("%d",&chem);
  	
                 	if(phy >= 55 && chem >= 50 && math >= 65)
                 	{
                 		printf("you are eligibale for admission");
                	}
                	else
	                {
	                 	printf("you are not eligible for admission");
                   	}
                   	break ;

			}
		case 5:
			{		
	            int roll;
	            float per,total;
	            char name[10];
	            printf("C program to read name,roll, marksn\n");
	            printf("Enter your name       : ");
             	scanf("%s",&name);
	            printf("Enter Roll number     :");
	            scanf("%d",&roll);
             	int phy,math,chem;
   	            printf("\nenter physics marks   :");
  	            scanf("%d",&phy);
                printf("\nEnter math marks      :");
  	            scanf("%d",&math);
  	            printf("\nEnter math marks      :");
             	scanf("%d",&chem);
            	total = phy +chem+math;
            	per = total/300*100;
	            if(per >= 60)
              	{
               		printf("Name              :%s",name);
	             	printf("\nRoll Number is    :%d",roll);
               		printf(" \nfirst diviosn ");
	            }
	            else if(per >= 50 && per <60)
	           {
	             	printf("\nName              :%s",name);
		            printf("\nRoll Number is    :%d",roll);
            		printf("\nSecond Diviosn");
	           }
	           else if(per >= 35 && per <50)
	           {
	             	printf("\nName              :%s",name);
	             	printf("\nRoll Number is    :%d",roll);
		            printf("\nthird diviosn");
	            }
              	else if(per >= 0 && per <35)
	           {
	              	printf("\nName              :%s",name);
	               	printf("\nRoll Number is    :%d",roll);
		            printf("\nfail");
	            }
	            else
	            {
              		printf("invalid details");
	            }
	            break;
			}
		case 6:
			{
				/*int day_of_year(int a,int b,int c)*/
                {
                	int i,c,b,r=0;
	                for(i=1;i<a;i++)
	                {
	                 	switch(i)
	                	{
			                case 1:
				                r+=31;
				                break;
			                case 2:
				                if(c%4==0)
				      	            r+=29;
				                else
				     	            r+=28;
				                break;
                			case 3:
		            		    r+=31;
			    	            break;
			                case 4:
			          	r+=30;
				         break;
			        case 5:
				        r+=31;
				        break;
	         		case 6:
			         	r+=30;
				        break;
			        case 7:
				       r+=31;
				       break;
			        case 8:
			        	r+=31;
				        break;
			        case 9:
	     		    	r+=30;
		    	    	break;
			        case 10:
    			    	r+=31;
	     		    	break;
		        	case 11:
       			    	r+=30;
		    	    	break;
			        case 12:
			        	r+=31;
				        break;
	         	    }
                    }
     	                r=r+b;
	                    return r;
                }
                /*int ko()*/
                
                  	int m,d,y,value;
                  	printf("Enter Month = ");
	                scanf("%d",&m);
	                printf("Enter day = ");
                   	scanf("%d",&d);
	                printf("Enter Year = ");
	                scanf("%d",&y);
	                value=day_of_year(m,d,y);
	                printf("day: %d",value);
	                return 0;
	                break;
            }
			
		case 7:
			{	
            /*    struct employee
            {
	            int emp_nu;
	            char emp_name[10];
	            float phy,math,chem;
	            float total;
             	float per;
            };
            int p()
            {*/
             	struct employee e[10];
	            int i;
	            for(i=0;i<2;i++)
	            {
		            printf("Roll number                     :");
		            scanf("%d",&e[i].emp_nu);
		            printf("\nEnter student name              :");
		            scanf("%s",e[i].emp_name);
		            printf("\nEnter marks of physics          :");
		            scanf("%f",&e[i].phy);
              		printf("\nEnter marks of chemistry        :");
            		scanf("%f",&e[i].chem);
		            printf("\nEnter marks of math             :");
            		scanf("%f",&e[i].math);
		
	            }
	            for(i=0;i<2;i++)
	            {
			        printf("\nRoll number is    : %d",e[i].emp_nu);
		         	printf("\nName              : %s",e[i].emp_name);
		            e[i].total = e[i].phy+e[i].math+e[i].chem;
		         	printf("\nTotal marks       : %f",e[i].total);
			        e[i].per = e[i].total/300*100;
	          		printf("\nPercentage        : %f\n",e[i].per);
			        if(e[i].per >= 60.00)
			       {
			        	printf("First Division");
		    	   }
			        else if( e[i].per >=50 && e[i].per>60)
			        {
				        printf("Second Division");
			        }
         			else if(e[i].per >=36 && e[i].per >50)
		        	{
			         	printf("Third Division");
			        }
			        else if( e[i].per <=0 && e[i].per>36)
			        {
			        	printf("Fail");
			        }
			        else{
			        	printf("invalid");
			        }
	            }
	            return 0;
	            break;
            }
        case 8:
        	{
        		 int array[15][15], i, j, rows, num = 25, k;
 
                 printf("\n enter the number of rows:");
                 scanf("%d", &rows);
                 for (i = 0; i < rows; i++)
                {
                    for (k = num - 2 * i; k >= 0; k--)
                    printf(" ");
	                for (j = 0; j <= i; j++)
	                {
                        if (j == 0 || i == j)
		                {
                            array[i][j] = 1;
                        }
                        else
                        {
                            array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
		                }
	                	printf("%4d", array[i][j]);
                    }
                    printf("\n");
                }
                break;
			}
		case 9:
			{
				char ch;
	            int i;
	            printf("enter any char\n");
	            scanf("%s",&ch);
	            i=ch;
	            if (i>=65 && i<=90)
	            {
            		printf("character is capital");
	            }
	            else if(i>=97 && i<=122)
	            {
             		printf("character is smaller");
	            }
	            break;
			}
			
   }
   }
   else
   {
	   printf("Password is incorrect\n");
   }
   }
}
