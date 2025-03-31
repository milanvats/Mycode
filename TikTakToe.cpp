#include <iostream>
#include <vector>
using namespace std;
class TTT //-> class name TTT
{
  public:
    vector<vector<char>> vec = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int n = vec.size(); //--> tell the size of vector
    int No = 0;         //--> the varible that user enter in choose number

    char UserSymbol; //--> user symbol choose

    //--> print Tik tak toe its start to end
    void print()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << vec[i][j] << " ";
                if (j < 2)
                {
                    cout << "|";
                }
            }
            cout << endl;
            if (i < 2)
            {
                cout << "--------";
            }
            cout << endl;
        }
    }
    //--> User choose number
    void User_Symbol()
    {
        cout << "Choose your Symbol (x or o)" << endl;
        cin >> UserSymbol;
    }
    // --> Check Symbol is correct or not
    bool Check_Symbol()
    {
        if (UserSymbol == 'x' || UserSymbol == 'o')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // --> user enter a Number for give a position to (x or o) ,and if its wrong mean its try a give a input that already occupied so its return a message and agin to input
    void Enter_Number()
    {
        cout << "Enter a Number In Between 1 to 9 " << endl;
        cout << "For selecting a position in the game . choose where you want (x or o)" << endl;

        while (true)
        {
            cin >> No;
            if(No<=0 || No>9){
                cout<<"your number is not valid"<<endl;
                continue;
                
            }
            int r = (No - 1) / 3;
            int c = (No - 1) % 3;
            

            if (vec[r][c] == 'x' || vec[r][c] == 'o')
            {
                cout << " Invalid input!,The value is a already occupied" << endl;
                continue;
            }

            break;
        }
    }
    //--> its change a place like user input 4 so its switch the syambol (x or o) with its
    void Change_Place()
    {
        int r = (No - 1) / 3;
        int c = (No - 1) % 3;

        vec[r][c] = UserSymbol;
    }
    //--> its switch the symbol if first user have 'x' to 'o' or 'o' to 'x'
    void Switch_Syambol()
    {
        if (UserSymbol == 'x')
        {
            UserSymbol = 'o';
        }
        else
        {
            UserSymbol = 'x';
        }
    }
    // --> its check Who win like if user have in one row and colum same symbol like its 'ooo' its type or'x' its type  and many comintain but i do in which
    //     like diagonal etc and tell Who win                                                                                               'x'
    //                                                                                                    'x'
    bool Who_Win()
    {
        for (int i = 0; i < 3; i++)
        {
            if (vec[i][1] == UserSymbol && vec[i][2] == UserSymbol && vec[i][0] == UserSymbol)
            {
                return true;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (vec[0][i] == UserSymbol && vec[1][i] == UserSymbol && vec[2][i] == UserSymbol)
            {
                return true;
            }
        }

        if (vec[1][1] == UserSymbol && vec[2][2] == UserSymbol && vec[0][0] == UserSymbol)
        {
            return true;
        }
        else if (vec[0][2] == UserSymbol && vec[1][1] == UserSymbol && vec[2][0] == UserSymbol)
        {
            return true;
        }
        return false;
    }
};
int main()

{
    int i = 0;
    TTT obj;      //-> obj is the object of TTT
    while (i < 9) //--> that loop run 9 time maximum not more
    {
        obj.print(); //--> print tic tak tok

        while (!obj.Check_Symbol()) //-> its check Symbol is correct or not if not so agin to enter
        {
            obj.User_Symbol(); //--> in which we enter value
        }
        while (true) //--> that loop run when Number is correct or mot mean its not char etc
        {
            obj.Enter_Number(); //-> enter a number

            if (cin.fail() || obj.No < 1 || obj.No > 9) /* that fail check its number is 1 to 9 or not and its integer not char like a ,b,v etc*/
            {
                cin.clear();            //--> its stop if wrong number enter enter AND RESET
                cin.ignore(1000, '\n'); //-> IT IGNORE LEFT over input
                cout << "Invalid only number not Character" << endl;
            }
            else
            {
                break;
            }
        }

        obj.Change_Place(); //-> its call change place witch number

        if (obj.Who_Win()) //-> call who win and if its win so return true and stop its while loop and tell who win
        {
            obj.print();
            if (obj.UserSymbol == 'x')
            {
                cout << " x  is win" << endl;
            }
            else
            {
                cout << " o  is win" << endl;
            }
            break;
        }
        obj.Switch_Syambol(); // its switch the syambol with user
        i++;
    }

    if (i == 9)
    {
        obj.print();
        cout << "Sorry , But Draw";
    }

    return 0;
}