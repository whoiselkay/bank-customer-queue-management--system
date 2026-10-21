#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<string> customers;
    int choice;
    string name;

    do
    {
        cout << "\n1. Add Customer\n2. Serve Customer";
        cout << "\n3. Next Customer\n4. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter name: ";
            cin >> name;
            customers.push(name);
            break;

        case 2:
            if (!customers.empty())
            {
                cout << "Serving: " << customers.front() << endl;
                customers.pop();
            }
            else
                cout << "Queue is empty\n";
            break;

        case 3:
            if (!customers.empty())
                cout << "Next: " << customers.front() << endl;
            else
                cout << "Queue is empty\n";
            break;
        }
    } while (choice != 4);

    return 0;
}