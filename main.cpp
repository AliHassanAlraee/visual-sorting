#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //system("color fc");
    int A[5] = {8,9,7,6,5};
    int flag = -1; // no change detection
    char choice, inner_choice;

    while(1)
    {
        system("cls");
        cout << endl;
        cout << "\t++++++++++++++++++++++++++++++++++\n";
        cout << "\t+++|  Visual Representation   |+++\n";
        cout << "\t++++++++++++++++++++++++++++++++++\n";
        cout << "\t+++| press 1  -  Learn        |+++\n";
        cout << "\t+++| press 2  -  About Us     |+++\n";
        cout << "\t+++| press 0  -  exit         |+++\n";
        cout << "\t++++++++++++++++++++++++++++++++++\n";
        cout << "\t+++| Response:                |+++\n";
        cout << "\t+++|                          |+++\n";
        cout << "\t+++|                          |+++\n";
        cout << "\t++++++++++++++++++++++++++++++++++\n\t";
        choice = getch();
        //cin >> choice;
        system("cls");

        switch(choice)
        {
        case'1':
            cout << endl;
            cout << "\t++++++++++++++++++++++++++++++++++\n";
            cout << "\t+++|       Bubble Sort        |+++\n";
            cout << "\t++++++++++++++++++++++++++++++++++\n";
            cout << "\t+++| press 1  -  Begin        |+++\n";
            cout << "\t+++| press 3  -  Go Back      |+++\n";
            cout << "\t++++++++++++++++++++++++++++++++++\n";
            cout << "\t+++| Response:                |+++\n";
            cout << "\t+++|                          |+++\n";
            cout << "\t+++|                          |+++\n";
            cout << "\t++++++++++++++++++++++++++++++++++\n\t";
            //cin >> inner_choice;
            inner_choice = getch();
            system("cls");
            switch(inner_choice)
            {
                case'1':
                cout << "\n\t Array Before Bubble Sort\n\t";

                for(int a = 0; a < 5; a++)
                    cout <<"|" << A[a] << "|" << '\t';

                Sleep(3000);
                cout << endl << endl;

                for(int i = 0; i < 4; i++)          // Outer Loop
                {
                    flag = -1;

                    system("cls");

                    for(int j = 0;j < 4-i; j++)            // Inner Loop
                    {
                        cout << "\n\t(Iteration  " << i+1 << ")" << endl;
                        cout << "\n\t'" << A[j] << "' and '" << A[j+1] << "' are getting compared\n\n\t\t";

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                        for(int a = 0;  a < 5; a++)
                        {
                            if(a == j || a == j+1)      // upper line
                        {
                            cout << " " << A[a] << " \t";        /////   Printing values in and above brackets
                        }
                        else
                            cout << "\t";
                        }
                        cout << "\n\t\t";

                        for(int a = 0;  a < 5; a++)      // center line
                        {
                            if(a == j || a == j+1)
                            {
                                cout << "| |\t";
                            }
                            else
                            cout << "|" << A[a] << "|\t";

                        }

                        Sleep(3000);

                        cout << endl << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                        if(A[j] > A[j+1])  // Comparing values
                        {
                            flag++;
                            int temp;
                            temp = A[j];
                            A[j] = A[j+1];
                            A[j+1] = temp;
                        }
                        cout << "\n\tRemarks\n";
                        if(flag == -1)
                        {
                            cout << "\tAs '" << A[j] << "' !> '" << A[j+1] << "' , So no swap needed\n";
                            Sleep(2000);
                            system("cls");
                        }

                        else if(flag != -1)
                        {
                            cout << "\n\tAs '" << A[j+1] << "' > '" << A[j] << "' , So It's time to swap \n";
                            Sleep(3000);
///////////////////////////////////===| Shifting Values |===///////////////////////////////////////////
                        for(int out = 1; out <= 10; out++)
                        {
                            system("cls");
                            if(out == 10)
                            {
                                cout << "\n\n\t\tSwapped\n\n\t\t";
                                for(int a = 0;  a < 5; a++)
                                {
                                    cout << "|" << A[a] << "|\t";
                                }
                                Sleep(3000);
                                system("cls");
                                continue;
                            }
                            cout << "\n\tSwapping... (" << A[j] << " & " << A[j+1] << ")" << endl;
                            cout << "\n\t\t";
                            for(int a = 0;  a < 5; a++)
                            {
                                if(a == j)
                                {
                                    if(out == 1)
                                    cout << "        ";
                                    else if(out == 2)
                                    cout << "        ";
                                    else if(out == 3)
                                    cout << "       ";
                                    else if(out == 4)
                                    cout << "      ";
                                    else if(out == 5)
                                    cout << "     ";
                                    else if(out == 6)
                                    cout << "    ";
                                    else if(out == 7)
                                    cout << "   ";
                                    else if(out == 8)
                                    cout << "  ";
                                    else if(out == 9)
                                    cout << " ";
                                }
                                else if(a == j+1)
                                {
                                    if(out == 1)
                                    cout << " " << A[j] << " ";
                                    else if(out == 2)
                                    cout  << A[j] << " ";
                                    else if(out == 3)
                                    cout << A[j] << " ";
                                    else if(out == 4)
                                    cout << A[j] << " ";
                                    else if(out == 5)
                                    cout << A[j] << " ";
                                    else if(out == 6)
                                    cout << A[j] << " ";
                                    else if(out == 7)
                                    cout << A[j] << " ";
                                    else if(out == 8)
                                    cout << A[j] << " ";
                                    else if(out == 9)
                                    cout << A[j] << " ";
                                }
                                else
                                    cout << "\t";
                            }
                            cout << "\n\t\t";

                            for(int a = 0;  a < 5; a++)
                            {
                                if(a == j || a == j+1)
                                {
                                    cout << "| |\t";
                                }
                                else if(a != j && a != j+1)
                                    cout << "|" << A[a] << "|\t";
                            }
                            cout << "\n\t\t";

                            for(int a = 0;  a < 5; a++)
                            {
                                if(a == j)
                                {
                                    if(out == 1)
                                    cout << " " << A[j+1] << " ";
                                    else if(out == 2)
                                    cout << "  " << A[j+1] << " ";
                                    else if(out == 3)
                                    cout << "   " << A[j+1] << " ";
                                    else if(out == 4)
                                    cout << "    " << A[j+1] << " ";
                                    else if(out == 5)
                                    cout << "     " << A[j+1] << " ";
                                    else if(out == 6)
                                    cout << "      " << A[j+1] << " ";
                                    else if(out == 7)
                                    cout << "       " << A[j+1] << " ";
                                    else if(out == 8)
                                    cout << "        " << A[j+1] << " ";
                                    else if(out == 9)
                                    cout << "         " << A[j+1] << " ";
                                }
                                else
                                    cout << "\t";
                            }
                            cout << '\n';

                            Sleep(400);
                            system("cls");

                            cout << endl << endl;

                        }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                        }
                    }

                    cout  << "\n\tStep " << i+1 << " is completed in which we made " << flag+1 << " changes\n\t";
                    system("pause");
                }

            cout << endl;

            system("cls");
            cout << "\n\tSorted array\n\t[ ";

            for(int a = 0; a < 5; a++)
            {
                cout  << A[a];
                if(a != 4)
                {
                    cout << " ,\t";
                }
            }
            cout << " ]\n";
            break;


            case'3':
                break;

            default:
                cout << "\n\tInvalid choice\n";
                }
                break;
            //Case '1' Ends here

            case'2':
                cout << endl;
                cout << "\t++++++++++++++++++++++++++++++++++\n";
                cout << "\t+++|  Visual Representation   |+++\n";
                cout << "\t++++++++++++++++++++++++++++++++++\n";
                cout << "\t+++| press 1  -  Learn        |+++\n";
                cout << "\t+++| press 2  -  About Us     |+++\n";
                cout << "\t+++| press 0  -  exit         |+++\n";
                cout << "\t++++++++++++++++++++++++++++++++++\n";
                cout << "\t+++| Response:                |+++\n";
                cout << "\t+++|         We help Beginners|+++\n";
                cout << "\t+++| to understand basics.    |+++\n";
                cout << "\t++++++++++++++++++++++++++++++++++\n\t";
                Sleep(2000);
                //cout << "\n\tWe help others to understand basic concepts\n";
                break;


            case'0':
                cout << endl;
                cout << "\t++++++++++++++++++++++++++++++++++\n";
                cout << "\t+++|  Visual Representation   |+++\n";
                cout << "\t++++++++++++++++++++++++++++++++++\n";
                cout << "\t+++| press 1  -  Learn        |+++\n";
                cout << "\t+++| press 2  -  About Us     |+++\n";
                cout << "\t+++| press 0  -  exit         |+++\n";
                cout << "\t++++++++++++++++++++++++++++++++++\n";
                cout << "\t+++| Response:                |+++\n";
                cout << "\t+++|           Exiting...     |+++\n";
                cout << "\t+++|                          |+++\n";
                cout << "\t++++++++++++++++++++++++++++++++++\n\t";
                Sleep(1000);
                exit(0);


            default:
                cout << endl;
                cout << "\t++++++++++++++++++++++++++++++++++\n";
                cout << "\t+++|  Visual Representation   |+++\n";
                cout << "\t++++++++++++++++++++++++++++++++++\n";
                cout << "\t+++| press 1  -  Learn        |+++\n";
                cout << "\t+++| press 2  -  About Us     |+++\n";
                cout << "\t+++| press 0  -  exit         |+++\n";
                cout << "\t++++++++++++++++++++++++++++++++++\n";
                cout << "\t+++| Response:                |+++\n";
                cout << "\t+++|           Invalid Choice |+++\n";
                cout << "\t+++|                          |+++\n";
                cout << "\t++++++++++++++++++++++++++++++++++\n\t";
                Sleep(1000);
                break;
                //cout << "\n\tInvalid choice\n";

            }
        }


    return 0;
}
