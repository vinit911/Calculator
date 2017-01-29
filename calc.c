#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<time.h>
#define MAX 100
#define pi 3.14159265359
#define e 2.71828

typedef struct stack
{
 float data[MAX];
 int top;
}stack;

void user_manual()
{
printf("\n\nUser Manual:\nAll copyrights reserved with VINIT KUMAR SINGH (vinitsingh@gmail.com) \n\nThis is a scientific calcultor which can easily compute value of an entered expression and also implements BODMAS rule i.e. it can also manage brackets. One can use numerous functionality present in it like mathematical functions, performing marix operation, solving quadratic equation and a system of linear equations. It also has a convertor that converts among decimal, hexadecimal, binary and octal numbers and converts among a number of physical quantities.");
}
int display()
{
	int ch;

	printf("\n\n                         Home Page                   \n");
	printf("1. User Manual                   2. Basic Computation    \n");
	printf("3. Trigonometry                  4. Mathematical Functions\n");
	printf("5. Matrix                        6. Equations            \n");
	printf("7. Convertor                     8. Complex Numbers      \n");
	printf("9. Permuatation and Combination\n");
	printf("0. Exit\n");
	scanf("%d",&ch);
	return(ch);
}
//---------------------------------------------------------------------------------------------------------------------------------TRIGO
float trigo()
{
	int ch;float num;
	printf("Trigonometry:\n");
	printf("1. sin		2. cos		3. tan\n");
	printf("4. asin		5. acos		6. atan\n");
	printf("7. sinh		8. cosh		9. tanh\n");
	printf("10. asinh	11. acosh	12. atanh\n");
	printf("0. Back\n");
	scanf("%d",&ch);
printf("Enter a number");
scanf("%f",&num);
switch(ch)
{
case 1 :printf("sin(%f) = %f\n",num,sin(num));
break;
case 2 :printf("cos(%f) = %f\n",num,cos(num));
break;
case 3 :printf("tan(%f) = %f\n",num,tan(num));
break;
case 4 :printf("asin(%f) = %f\n",num,asin(num));
break;
case 5 :printf("acos(%f) = %f\n",num,acos(num));
break;
case 6 :printf("atan(%f) = %f\n",num,atan(num));
break;
case 7 :printf("sinh(%f) = %f\n",num,sinh(num));
break;
case 8 :printf("cosh(%f) = %f\n",num,cosh(num));
break;
case 9 :printf("tanh(%f) = %f\n",num,tanh(num));
break;
case 10 :printf("asinh(%f) = %f\n",num,asinh(num));
break;
case 11:printf("acosh(%f) = %f\n",num,acosh(num));
break;
case 12:printf("atanh(%f) = %f\n",num,atanh(num));
break;
case 0:
printf("\n\n");
display();
break;
default : printf("Sorry! Invalid choice\n");
}
}

//--------------------------------------------------------------------------------------------------------------------------------MATH_FUNC

float math_func()
{
	int ch;float num;
	printf("Mathematical Fucntions :\n");
	printf("1. exp		2. log		3. log10\n");
	printf("4. log2		5. fabs		6. ceil\n");
	printf("7. trunc	8. floor	9. round\n");
	printf("10. rand\n");
	printf("0. Back\n");
	scanf("%d",&ch);
printf("Enter a number");
scanf("%f",&num);
switch(ch)
{
case 1 :printf("exp(%f) = %f\n",num,exp(num));
break;
case 2 :printf("log(%f) = %f\n",num,log(num));
break;
case 3 :printf("log10(%f) = %f\n",num,log10(num));
break;
case 4 :printf("log2(%f) = %f\n",num,log2(num));
break;
case 5 :printf("fabs(%f) = %f\n",num,fabs(num));
break;
case 6 :printf("ceil(%f) = %f\n",num,ceil(num));
break;
case 7 :printf("trunc(%f) = %f\n",num,trunc(num));
break;
case 8 :printf("floor(%f) = %f\n",num,floor(num));
break;
case 9 :printf("round(%f) = %f\n",num,round(num));
break;
/*case 10 :
time_t t;
srand((unsigned time(&t)); 
printf("rand(%f) = %f\n",num,rand()%num);
break;*/
case 0:
printf("\n\n");
display();
break;
default : printf("Sorry! Invalid choice\n");
}
}
//------------------------------------------------------------------------------------------------------------------PERMUTATION & COMBINATION

int factorial(int n)
{
int f=1;
for(int i=1;i<=n;i++)
f=f*i;
return(f);
}

float pnc()
{
	int ch,num,i,n,r;
	printf("Permuatation and Combination :\n");
	printf("1. permuatation	2. combination	3. factorial\n");
	printf("0. Back\n");
	scanf("%d",&ch);
switch(ch)
{
case 1 :
printf("Enter n and r corresponding to nPr");
scanf("%d %d",&n,&r);
if(n>=r)
printf("%dP%d = %d\n",n,r,factorial(n)/factorial(n-r));
else
printf("Math Error!");
break;
case 2 :
printf("Enter n and r corresponding to nCr");
scanf("%d %d",&n,&r);
if(n>=r)
printf("%dP%d = %d\n",n,r,factorial(n)/(factorial(n-r)*factorial(r)));
else
printf("Math Error!");
break;
case 3 :
printf("Enter a number");
scanf("%d",&num);
printf("%d! = %d\n",num,factorial(num));
break;
case 0:;
break;
default : printf("Sorry! Invalid choice\n");
}
}
//---------------------------------------------------------------------------------------------------------------------MATRIX


float operation(float a,float b,char optr)
{
if(optr=='+')
return a+b;
else if(optr=='-')
return b-a;
else if(optr=='*')
return b*a;
else if(optr=='/')
return b/a;
else if(optr=='^')
return pow(b,a);
else if(optr=='%')
return fmod(b,a);
}




//---------------------------------------------
int priority(char x)
{
   if(x == '(')
 return(0);
   if(x == '+' || x == '-')
 return(1);
   if(x == '*' || x == '/' || x == '%')
 return(2);
   if(x == '^')
   return(3);
}
//---------------------------------------------
void inits(stack *s)
{
   s->top=-1;
}
//---------------------------------------------
int emptys(stack *s)
{
    if(s->top==-1)
 return(1);
    else 
 return(0);
}
//---------------------------------------------
int fulls(stack *s)
{
    if(s->top==MAX-1)
 return(1);
    else 
 return(0);
}
//---------------------------------------------
void pushs(stack *s,char x)
{
  s->top=s->top+1;
  s->data[s->top]=x;
}
//---------------------------------------------
char pops(stack *s)
{
   int x;
   x=s->data[s->top];
   s->top=s->top-1;
   return(x);
}
//---------------------------------------------
char tops(stack * s)
{
   return(s->data[s->top]);
}
//---------------------------------------------

//---------------------------------------------
void initt(stack *t)
{
   t->top=-1;
}
//---------------------------------------------
int emptyt(stack *t)
{
    if(t->top==-1)
 return(1);
    else 
 return(0);
}
//---------------------------------------------
int fullt(stack *t)
{
    if(t->top==MAX-1)
 return(1);
    else 
 return(0);
}
//---------------------------------------------
void pusht(stack *t,float x)
{
  t->top=t->top+1;
  t->data[t->top]=x;
}
//---------------------------------------------
float popt(stack *t)
{
   float x;
   x=t->data[t->top];
   t->top=t->top-1;
   return(x);
}
//---------------------------------------------
float topt(stack * t)
{
   return(t->data[t->top]);
}
//---------------------------------------------



void compute()
{
stack s,t;
float y,z;
char x,token='q',prevtok;
float num=0.0,deci=1.0;

inits(&s);
initt(&t);

printf("\nEnter expression:");

  while(1)
  {
	prevtok=token;
	token=getchar();
	if(token=='\n')	
	{
		if(prevtok==')')
		break;
		else if(prevtok<='9' && prevtok>='0')
		{
		pusht(&t,num);
		break;
		}
		else if(prevtok!='q')
		printf("Syntax Error");
	}
	
	if((token<='9' && token>='0')||(token=='.'))
	{
		if(token=='.')
		{
			deci=deci/10;
			continue;
		}
		if(deci<0.9)
		{
			num=num+(token-'0')*deci;
			deci=deci/10;
		}
		else
		num=num*10+(token-'0');	
	
	}

	else if(token=='(')
	{
		pushs(&s,'(');
	}	
	else if(token=='+' || token=='-' || token=='*' || token=='/'|| token=='^' || token=='%' || token==')')
	{
	
		if(prevtok!=')')
		{
			pusht(&t,num);
			num=0.0;
			deci=1.0;
		}
		if(token==')')
		{
			while((x=pops(&s))!='(')
			{
				y=popt(&t);
				z=popt(&t);
				pusht(&t,operation(y,z,x));
			}
		}
		else
		{
		while(priority(token)<=priority(tops(&s)) && !emptys(&s))
		{
			x=pops(&s);
			y=popt(&t);
			z=popt(&t);
			pusht(&t,operation(y,z,x));
		}
		pushs(&s,token);
		}
	}



  }
  while(!emptys(&s))
  {
	x=pops(&s);
	if(x=='(')
	continue;
	y=popt(&t);
	z=popt(&t);
	
	pusht(&t,operation(y,z,x));

  }
printf("%f", topt(&t));

}

int main()
{
int ch;

printf("---------------------------------------------------------\n");
printf("                      SCIENTIFIC CALCULATOR              \n");
printf("---------------------------------------------------------\n");

ch=display();
switch(ch)
{
case 1 :user_manual();
break;
case 2 :compute();
break;
case 3 :trigo();
break;
case 4 :math_func();
break;
/*case 5 :matrix();
break;
case 6 :equation();
break;
case 7 :convertor();
break;
case 8 :complex();
break;*/
case 9 :pnc();
break;
case 0 :printf(".......Bye!");
break;
default : printf("Sorry! Invalid choice\n");
}
}

