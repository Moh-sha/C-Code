#include<iostream>

using namespace std;

int main ()
{

    int a;
    cout<<"Entered  value a  : "<<endl;
    cin>>a;




    switch(a)
    {
         case 1:
            printf("31 days");
            break;
        case 2:
            printf("28/29 days");
            break;
        case 3:
            printf("31 days");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days");
            break;
        case 6:
            printf("30 days");
            break;
        case 7:
            printf("31 days");
            break;
        case 8:
            printf("31 days");
            break;
        case 9:
            printf("30 days");
            break;
        case 10:
            printf("31 days");
            break;
        case 11:
            printf("30 days");
            break;
        case 12:
            printf("31 days");
            break;
        default:
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}
Logic to print number of days in a month using switch...case - best approach
Observe the above program carefully for a moment. In the above program we are performing same action on multiple cases. We are printing "31 days" and "30 days" for multiple cases.

Instead of repeating same action on multiple cases, you can group similar cases together and perform single action on group of cases. To group, arrange all similar cases one after other and remove break statement from all cases other than last case. For example to group cases for "31 days" use



switch(month)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days.");
        break;
}
If the above code, if program control switches to any of the case in 1, 3, 5, 7, 8, 10 or 12, it executes all the below statement till break statement is found. So for any cases in 1, 3, 5, 7, 8, 10 or 12 it prints "31 days."

Similarly define all other cases.

Program to find number of days in a month using switch...case - best approach


/**
 * C program to print number of days in a month using switch case
 */

#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        /* Group all 31 days cases together */
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;

        /* Group all 30 days cases together */
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;

        /* Remaining case */
        case 2:
            printf("28/29 days");
            break;

        default:
            printf("Invalid input! Please enter month number between 1-12");
    }

    return 0;
}
Output
Enter month number(1-12): 3
31 days
Happy coding 😉

Recommended posts
Switch case programming exercise index.
C program to create simple Calculator using switch case.
C program to check whether an alphabet is vowel or consonant using switch case
C program to enter week number and print day of week name using switch case
C program to find maximum between two numbers using switch case
C program to check whether a triangle is valid or not if all angles are given.
C program to check whether a triangle is Equilateral, Isosceles or Scalene triangle.
About Pankaj
Pankaj Prakash is the founder, editor and blogger at Codeforwin. He loves to learn new techs and write programming articles especially for beginners. He works at Vasudhaika Software Sols. as a Software Design Engineer and manages Codeforwin. In short Pankaj is Web developer, Blogger, Learner, Tech and Music lover.

Follow on: Twitter | Google | Website or View all posts by Pankaj

Post navigation
←
Previous
Next
→
Comments and discussion
Have a doubt, write here. I will help my best.
Before commenting you must escape your source code before commenting. Paste your source code inside
<pre><code> ----Your Source Code---- </code></pre>
The Codeforwin Guy
Pankaj Prakash
Software developer, Blogger, Learner, Music Lover...
FacebookTwitterLinkedIn





Ezoicreport this ad
C useful resources
C library reference
Learn C programming
The C programming - K&R
The C programming - K&R Pdf
Stack Overflow C
CodeBlocks, Dev C++

Ezoicreport this ad
Ezoicreport this ad
C Programming Exercises
Basic C programming exercises
Bitwise operator exercises
Conditional operator exercises
If else exercises
Switch case exercises
Loop and iteration exercises
Star patterns exercises
Number pattern exercises
Functions and recursion exercises
Array and Matrix exercises
String exercises
Pointer exercises
Files handling exercises

The best way to learn a new programming language is by writing programs in it.
- Dennis Ritchie
Sitelinks
About
Feedback
Testimonials
Write for Us
Privacy policy
Terms of use
Follow us
Facebook
Google
Twitter
Linked In
© 2021 Codeforwin
Created with  by Pankaj Prakash

 case 1:
            printf("31 days");
            break;
        case 2:
            printf("28/29 days");
            break;
        case 3:
            printf("31 days");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days");
            break;
        case 6:
            printf("30 days");
            break;
        case 7:
            printf("31 days");
            break;
        case 8:
            printf("31 days");
            break;
        case 9:
            printf("30 days");
            break;
        case 10:
            printf("31 days");
            break;
        case 11:
            printf("30 days");
            break;
        case 12:
            printf("31 days");
            break;
        default:
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}
Logic to print number of days in a month using switch...case - best approach
Observe the above program carefully for a moment. In the above program we are performing same action on multiple cases. We are printing "31 days" and "30 days" for multiple cases.

Instead of repeating same action on multiple cases, you can group similar cases together and perform single action on group of cases. To group, arrange all similar cases one after other and remove break statement from all cases other than last case. For example to group cases for "31 days" use



switch(month)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days.");
        break;
}
If the above code, if program control switches to any of the case in 1, 3, 5, 7, 8, 10 or 12, it executes all the below statement till break statement is found. So for any cases in 1, 3, 5, 7, 8, 10 or 12 it prints "31 days."

Similarly define all other cases.

Program to find number of days in a month using switch...case - best approach


/**
 * C program to print number of days in a month using switch case
 */

#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        /* Group all 31 days cases together */
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;

        /* Group all 30 days cases together */
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;

        /* Remaining case */
        case 2:
            printf("28/29 days");
            break;




        default :
            cout<<"Error  ! "<<endl;
    }



}


