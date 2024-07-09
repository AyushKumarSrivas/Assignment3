/*1.To check whether a given number is positive or non positive

main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is positive number",n);
    }
    else
    {
        printf("%d is non positive number",n);
    }
}
*/

/*2.To check whether a given number is divisible by 5 or not

main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%5==0)
        printf("%d is divisible by 5",n);
    else
        printf("%d is not divisible by 5",n);
}
*/

/*3.To check whether a given number is an even number or an odd number

main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is an even number",n);
    else
        printf("%d is an odd number",n);
}
*/

/*4.To check whether a given number is an even number or an odd number without using % operator

main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n&1)
        printf("%d is an odd number",n);
    else
        printf("%d is an even number",n);
}
*/

/*5.To check whether a given number is a three-digit number or not

main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>99 && n<1000)
        printf("%d is a three digit number",n);
    else
        printf("%d is not a three digit number",n);
}
*/

/*6.To print greater between two numbers. Print one number of both are the same.

main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is greater",a);
    else if(b>a)
        printf("%d is greater",b);
    else
        printf("Both are same");
}
*/

/*8.To check whether a given year is a leap year or not.

main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);

    //Year is a leap year if perfectly divisible by 400
    if(year%400==0)
        printf("%d is a leap year",year);

    //Year is not a leap year if it is divisible by 100 but not divisible by 400
    else if(year%100==0)
        printf("%d is not a leap year",year);

    //Year is a leap year if it is not divisible by 100 but divisible by 4
    else if(year%4==0)
        printf("%d is a leap year",year);

    //All others are not a leap year
    else
        printf("%d is not a leap year",year);
}
*/

/*9.To find the greatest among three numbers. Print number once if the greatest number appears two or three times.

main()
{
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
        printf("%d is greater number",a);

    else if(b>c)
        printf("%d is greater number",b);

    else
        printf("%d is greater number",c);
}
*/

/*10.Write a program which takes the cost price and selling price of a product from the user. Now calculate the profit and loss percentage.

main()
{
    int cp,sp;
    printf("Enter cost price and selling price:");
    scanf("%d%d",&cp,&sp);

    if(cp>sp)
        printf("Loss = %d",cp - sp);

    else if(sp>cp)
        printf("Profit = %d",sp - cp);

    else
        printf("No Profit and No Loss");
}
*/

/*11.Write a program to take marks of 5 subjects from the user.Assume marks are given out of 100 and passing marks is 33.
     Now display whether the candidate passed the exam or failed.

main()
{
    int M,S,E,SS,H;
    printf("Enter the marks of Maths:");
    scanf("%d",&M);

    printf("Enter the marks of Science:");
    scanf("%d",&S);

    printf("Enter the marks of English:");
    scanf("%d",&E);

    printf("Enter the marks of Social Science:");
    scanf("%d",&SS);

    printf("Enter the marks of Hindi:");
    scanf("%d",&H);

    int Total;
    float Percentage;

    Total = M+S+E+SS+H;
    printf("\nTotal = %d",Total);

    Percentage = Total/5;
    printf("\nPercentage = %.2f",Percentage);

    if(M>=33 && S>=33 && E>=33 && SS>=33 && H>=33 && Percentage>=33)
        printf("\nPass");
    else
        printf("\nFail");
}
*/

/*12.To check whether a given alphabet is in uppercase or lowercase.
main()
{
    char c;
    printf("Enter an alphabet:");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
        printf("%c is Uppercase",c);
    else if(c>='a' && c<='z')
        printf("%c is lowercase",c);
    else
        printf("Other case");
}
*/

/*13.To check whether a given number is divisible by 3 or 2.
main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%3==0 && n%2==0)
        printf("%d is divisible by both 3 or 2",n);
    else if(n%2==0)
        printf("%d is divisible by 2",n);
    else if(n%3==0)
        printf("%d is divisible by 3",n);
    else
        printf("%d is not divisible by both 3 or 2",n);
}
*/

/*14.To check whether a given number is divisible by 7 or 3.
main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%7==0 && n%3==0)
        printf("%d is divisible by both 7 or 3",n);
    else if(n%7==0)
        printf("%d is divisible by 7",n);
    else if(n%3==0)
        printf("%d is divisible by 3",n);
    else
        printf("%d is not divisible by both 7 or 3",n);
}
*/

/*15.To check whether a given number is positive,negative or zero.
main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0)
        printf("%d is positive number",n);
    else if(n<0)
        printf("%d is negative number",n);
    else
        printf("%d is zero",n);
}
*/

/*16.To check whether a given character is uppercase,lowercase,a digit or a special character.
main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c>='a' && c<='z')
        printf("%c is lowercase",c);
    else if(c>='A' && c<='Z')
        printf("%c is uppercase",c);
    else if(c>='0' && c<='9')
        printf("%c is digit",c);
    else
        printf("%c is a special character",c);
}
*/

/*17.Write a program which takes the length of the sides of a triangle as an input.
     Display whether the triangle is valid or not.
main()
{
    int s1,s2,s3;
    printf("Enter the three sides of triangle:");
    scanf("%d%d%d",&s1,&s2,&s3);
    if((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1))
        printf("It is a valid triangle");
    else
        printf("It is not a valid triangle");
}
*/

//18.Write a program which takes the month number as an input and display number of days in that month.
main()
{
    int n;
    printf("Enter the month number:");
    scanf("%d",&n);
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
        printf("31 days");
    else if(n==4 || n==6 || n==9 || n==11)
        printf("30 days");
    else if(n==2)
        printf("28 or 29 days");
    else
        printf("Invalid month number");
}
