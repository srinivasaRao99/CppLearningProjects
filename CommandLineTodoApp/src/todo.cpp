#include "../include/todo.hpp"
#include <iostream>

void TodoList::addTask(const std::string& task) {
    tasks.push_back(Task(task));
}

void TodoList::viewTasks() const {
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i].description
                  << (tasks[i].isCompleted ? " [Completed]" : "") << std::endl;
    }
}

void TodoList::markAsDone(int index) {
    if (index > 0 && index <= tasks.size()) {
        tasks[index - 1].isCompleted = true;
    }
}

void TodoList::deleteTask(int index) {
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
    }
}
