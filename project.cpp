/*This is a Bank Management system which is used to handle a student and performs all the 
  functions which all modern library management system does. This will be beneficial to
  all the librarians. 
  
  In this Software, I used the concepts such as Procedure oriented programming, Object oriented 
  programming, Concepts of C language and also the concepts of OOP such as Polymorphism, 
  Inheritance. 
  
  This is only a prototype, this project is under progress and is tried to make more effective.
  
  Thank you,
  Rishabh A Raval
  (From Gujarat,India) 
*/
#include <iostream>
#include <cstring>
using namespace std;
class first
{
    public:
        first()
        {
            cout << "\n\t\t\tWELCOME TO LIBRARY MANAGEMENT SYSTEM WHERE YOU CAN ADD NEW BOOKS, ";
            cout << "\n\t\t\tRETRIEVE BOOKS, ADD DETAILS OF A STUDENTS AND ISSUE A BOOK TO THE STUDENTS";
            cout << "\n\t\t\tTO YOUR LIBRARY JUDT BY USING THIS SOFTWARE.\n\n\n";
        }
};
class record
{
public:
    char title[20];
    char author[20];
    long pub_year[20];
    long isbn[20];
    long qbooks, i;
    long ret_data;
    void addingbooks()
    {
        cout << "\n\t\t\t\tENTER ALL THE DETAILS OF THE BOOK :-- ";
        cout << "\n\n\tEnter quantity of the books you want to add in your library(number e.g 1,2,3,..) : ";
        cin >> qbooks;
        for (i = 0; i < qbooks; i++)
        {
            cout << "\n\t\t\t\t     Add the details here:-";
            cout << "\n\n\t\t\tTitle of the Book(no spaces) : ";
            cin >> title;
            cout << "\n\t\t\tAuthor of the Book(no spaces) : ";
            cin >> author;
            cout << "\n\t\t\tPublication Year : ";
            cin >> pub_year[i];
            cout << "\n\t\t\tISBN Number(no hyphens) : ";
            cin >> isbn[i];
        }
    }
    void showbooks()
    {
    thirtyfour:
        cout << "\n\n\n\tWANT TO RETRIEVE DETAILS OF ALL THE BOOKS ?(PRESS 1 FOR YES AND 0 FOR NO) ";
        cin >> ret_data;
        if (ret_data == 1)
        {
            cout << "\n\t\t\tBook details (Publication year and ISBN Number) are here :--";
        fourtytwo:
            for (i = 0; i < qbooks; i++)
            {
                /*cout << "\n\n\t\t\tTitle of the Book : " << title;
                cout << "\n\t\t\tAuthor of the Book :  " << author;*/
                cout << "\n\n\t\t\tPublication Year : " << pub_year[i];
                cout << "\n\t\t\tISBN Number : " << isbn[i];
            }
        }
        else if (ret_data > 1)
        {
            cout << "\n\t\tPLEASE ENTER EITHER 1 OR 0";
            goto thirtyfour;
        }
    }
};
class studinfo
{
public:
    long i;
    long que2;
    char studname[100];
    void getdata()
    {
    sixtythree:
        cout << "\n\n\n\tWANT TO ENTER DETAILS OF THE STUDENT ?(PRESS 1 FOR YES AND 0 FOR NO)";
        cin >> que2;
        if (que2 == 1)
        {
            cout << "\n\t\t\tEnter NAME of the Student : ";
            cin >> studname;
            cout << "\n\t\t\tEnrollment Number will asked only if you want to issue a book.";
        }
        else if (que2 > 1)
        {
            cout << "\n\t\tPLEASE ENTER EITHER 1 OR 0";
            goto sixtythree;
        }
    }
};

class issuing : public studinfo, public record
{
public:
    long prev_given;
    long giv_late, penalty, latedays;
    long i, rolln, roll, que4;
    void maintaining()
    {
    eightyseven:
        cout << "\n\n\tWANT TO ISSUE A BOOK TO THE STUDENT ?(PRESS 1 FOR YES AND 0 FOR NO)";
        cin >> que4;
        if (que4 == 1)
        {

            cout << "\n\t\t\tEnter Enrollment Number of the student: ";
            cin >> roll;
        seventyeight:
            cout << "\n\t\t\tEnter Enrollment Number of the concerned student: ";
            cin >> rolln;
            if (rolln == roll)
            {
                goto oneofour;
            }
            else
            {
                cout << "\n\n\t\t\tPLEASE ENTER CORRECT ENROLLMENT NUMBER!!!!";
                goto seventyeight;
            oneotwo:
            oneofour:
                cout << "\n\t\t\tIs he/she submitting the book after due date ?(PRESS 1 FOR YES AND 0 FOR NO)\n\t\t    \t(Due date varies as per particular book)\n\t\t    \t";
                cin >> giv_late;
            }
            if (giv_late == 1)
            {
                cout << "\n\t\t\tDays after due date : ";
                cin >> latedays;
                penalty = (5 * latedays);
                cout << "\n\t\t\tPenalty that will be charged to the student is " << penalty << " INR";
                goto ninetyfour;
            }
            else if (giv_late > 1)
            {
                cout << "\n\t\tPLEASE ENTER EITHER 0 OR 1";
                goto oneotwo;
            }
            else
            {
            ninetyfour:
            onetwotwo:
                cout << "\n\t\t\tHad he/she returned the Previous book ?(PRESS 1 FOR YES AND 0 FOR NO)";
                cin >> prev_given;
                if (prev_given == 1)
                {
                    cout << "\n\n\n\t\t\tHe/She is eligible to take ONE book from the Library.";
                    cout << "\n\n\t\t\tChoose your books from here :--";
                    cout << "\n\n\t\t\tBOOKS ARE ALREADY SHOWN ABOVE. REFER ABOVE.";
                }
                else if (prev_given > 1)
                {
                    cout << "\n\t\tPLEASE ENTER EITHER 0 OR 1.";
                    goto onetwotwo;
                }
                else
                {
                    cout << "\n\n\t\tHE/SHE HAS NOT GIVEN THE PREVIOUS BOOKS AND IS NOT ELIGIBLE TO TAKE A BOOK.RETURN THE PREVIOUS BOOK.";
                }
            }
        }
        else if (que4 > 1)
        {
            cout << "\n\t\tPLEASE ENTER EITHER 1 OR 0.";
            goto eightyseven;
        }
    }
};
class last
{
public:
    ~last()
    {
        long rate;
        cout << "\n\n\n\nTHANKS FOR USING THIS SOFTWARE. WE WOULD LIKE IF YOU GIVE FEEDBACK TO US.";
        cout << "\nYOU CAN RATE US OUT OF 5 : ";
        cin >> rate;
        if (rate >= 0 && rate <= 2)
        {
            cout << "\n\nSorry to hear this from you but you can specify to us by mailing to us at xyz.123@gmail.com";
        }
        else if (rate == 3)
        {
            cout << "\n\nYou can specify the inconveniences to us by mailing to us at xyz.123@gmail.com";
        }
        else if (rate >= 4 && rate <= 5)
        {
            cout << "\n\nThank you for your feedback. It means a lot to us.";
            cout << "\n\nIF YOU REFER THIS TO THE OTHERS, IT WILL BE GOOD :):).";
        }
    }
};
// MAIN FUNCTION//
int main()
{
    first f1;
    char name[100]; // IMPLEMENTED POP APPROACH AND ON 37TH LINE , IMPLEMENTED OOP APPROACH//
    long ps, add_d, fps, choice, que3;

    cout << "\n\t\t\t\tWELCOME TO OUR LIBRARY MANAGEMENT SYSTEM SOFTWARE .";
    cout << "\n\n\tEnter your Account Name : ";
    gets(name);
    cout << "\n\tSet your Account Password(Combination of only numbers: i.e 123,321 etc) : ";
    cin >> ps;

next:
    cout << "\n\tRetype your Password : ";
    cin >> fps;
    if (ps == fps)
    {
        goto there;
    }
    else
    {
        cout << "\n\t\tYou have entered incorrect Password !";
        goto next;
    }

there:
    record r1;
one_three_eight:
    r1.addingbooks();
one_fourty:
    r1.showbooks();

one_fourty_three:
    studinfo s1;
    s1.getdata();

one_fourty_seven:

    issuing i1;
    i1.maintaining();
twoonetwo:
    cout << "\n\n\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<WANT TO STAY MORE IN THIS SYSTEM?>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\t\t\t\t\t(PRESS 1 FOR YES AND 0 FOR NO)";
    cin >> que3;
    if (que3 == 1)
    {
        cout << "\n\n******************************************CHOOSE FROM THE FOLLOWING********************************************";
        cout << "\n\t\t\t\tPRESS 1 TO ENTER DETAILS OF MORE BOOKS.";
        cout << "\n\t\t\t\tPRESS 2 TO RETRIEVE DETAILS OF THE BOOK.";
        cout << "\n\t\t\t\tPRESS 3 TO INPUT DETAILS OF MORE STUDENTS.";
        cout << "\n\t\t\t\tPRESS 4 TO ISSUE BOOKS TO THE STUDENTS.";
        cout << "\n\t\t\t\tPRESS 5 TO LEAVE.";
        cout << "\n\n***************************************************************************************************************";
        cout << "\n\n\t\t\tSPECIFY HERE : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            goto one_three_eight;
            break;

        case 2:
            goto one_fourty;
            break;

        case 3:
            goto one_fourty_three;
            break;

        case 4:
            goto one_fourty_seven;
            break;

        case 5:
            goto end;
            break;

        default:
            cout << "\n\tERROR!!! Please enter the correct number.";
        }
    }
    else if (que3 > 1)
    {
        cout << "\n\t\tPLEASE ENTER EITHER 0 OR 1.";
        goto twoonetwo;
    }
    else
    {
    end:
        last l1;
    }
    
    return 0;
}