#ifndef TODO_HPP
#define TODO_HPP

#include <string>
#include <vector>

struct Task {
    std::string description;
    bool isCompleted;

    Task(std::string desc) : description(desc), isCompleted(false) {}
};

class TodoList {
public:
    void addTask(const std::string& task);
    void viewTasks() const;
    void markAsDone(int index);
    void deleteTask(int index);
    
private:
    std::vector<Task> tasks;
};

#endif
