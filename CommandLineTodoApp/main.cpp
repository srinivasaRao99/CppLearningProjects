#include "include/todo.hpp"
#include <iostream>

void displayMenu() {
    std::cout << "\n--- Todo List Menu ---" << std::endl;
    std::cout << "1. Add Task" << std::endl;
    std::cout << "2. View Tasks" << std::endl;
    std::cout << "3. Mark Task as Done" << std::endl;
    std::cout << "4. Delete Task" << std::endl;
    std::cout << "5. Exit" << std::endl;
}

int main() {
    TodoList todo;
    int choice;
    
    do {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cin.ignore();
                std::string task;
                std::cout << "Enter task description: ";
                std::getline(std::cin, task);
                todo.addTask(task);
                break;
            }
            case 2:
                todo.viewTasks();
                break;
            case 3: {
                int taskNum;
                std::cout << "Enter task number to mark as done: ";
                std::cin >> taskNum;
                todo.markAsDone(taskNum);
                break;
            }
            case 4: {
                int taskNum;
                std::cout << "Enter task number to delete: ";
                std::cin >> taskNum;
                todo.deleteTask(taskNum);
                break;
            }
            case 5:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}
