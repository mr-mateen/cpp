/**
 * Name: Abdul Mateen
 * StudentId: bc230202833
*/
#include <iostream>
#include <string>
#include <limits>
using namespace std;

class ShoppingList
{
private:
    string items[100];
    int itemCount;

    void stringInit()
    {
        for (int i = 0; i < 100; i++)
        {
            items[i] = "";
        }
    }

public:
    ShoppingList()
    {
        itemCount = 0;
    }

    void addItem()
    {
        if (itemCount < 100)
        {
            char item[100];
            cout << "Enter an item to add: ";
            cin.ignore();
            if (!(cin >> item))
            {
                cout << "Invalid input! Please enter a valid string.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return;
            }
            items[itemCount++] = item;
            cout << "\n"
                 << endl;
        }
        else
        {
            cout << "Shopping List is full!\n"
                 << endl;
        }
    }

    void removeItem()
    {
        viewList();
        int index;
        cout << "Enter number of item to remove: ";
        if (!(cin >> index))
        {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return;
        }

        if (index < 1 || index > itemCount)
        {
            cout << "Invalid Operation!\nIndex out of range!\n"
                 << endl;
            return;
        }

        for (int i = index - 1; i < itemCount - 1; i++)
        {
            items[i] = items[i + 1];
        }
        itemCount--;
    }
    void viewList()
    {
        if (itemCount == 0)
        {
            cout << "Shopping List is empty!\n"
                 << endl;
            return;
        }

        cout << "Your Shopping List: " << endl;

        for (int i = 0; i < itemCount; i++)
        {
            cout << i + 1 << ". " << items[i] << endl;
        }
        cout << "\n"
             << endl;
    }

    void clearList()
    {
        stringInit();
        itemCount = 0;
    }
};

int main()
{
    ShoppingList sl;

    cout << "Welcome to the Shopping List Manager\n"
         << endl;

    while (true)
    {
        cout << "1. Add Item" << endl;
        cout << "2. Remove Item" << endl;
        cout << "3. View Shopping LIst" << endl;
        cout << "4. Clear Shopping List" << endl;
        cout << "5. Exit \n"
             << endl;
        cout << "Enter your choice: ";

        int op;
        if (!(cin >> op))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number from 1 to 5.\n";
            continue;
        }

        if (op < 1 || op > 5)
        {
            cout << "Invalid Option!\nPlease choose 1 to 5 only!";
            continue;
        }

        if (op == 1)
        {
            sl.addItem();
        }
        else if (op == 2)
        {
            sl.removeItem();
        }
        else if (op == 3)
        {
            sl.viewList();
        }
        else if (op == 4)
        {
            sl.clearList();
        }
        else if (op == 5)
        {
            cout << "Bye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Option!\nPlease choose 1 to 5 only!";
        }
    }

    return 0;
}