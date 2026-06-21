#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> tasks;
    int choice;
    string task;

    do
    {
        cout << "\n===== TO-DO LIST =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice)
        {
            case 1:
                cout << "Enter task: ";
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task Added Successfully!\n";
                break;

            case 2:
                cout << "\nYour Tasks:\n";
                for(int i = 0; i < tasks.size(); i++)
                {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
                if(tasks.size() == 0)
                    cout << "No tasks available.\n";
                break;

            case 3:
            {
                int num;
                cout << "Enter task number to delete: ";
                cin >> num;

                if(num > 0 && num <= tasks.size())
                {
                    tasks.erase(tasks.begin() + num - 1);
                    cout << "Task Deleted Successfully!\n";
                }
                else
                {
                    cout << "Invalid Task Number!\n";
                }
                break;
            }

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}