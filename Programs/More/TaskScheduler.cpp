#include<iostream>
#include<list>
using namespace std;

struct Task{
    string name;
    int priority;
};

class TaskScheduler{
    public:
        list<struct Task>tasks;
        void addTask(string name,int priority){
            tasks.push_back({name,priority});
        }
        void removeTask(string name){
            for(auto i=tasks.begin();i!=tasks.end();i++){
                if(i->name == name){
                    tasks.erase(i);
                    break;
                }
            }
        }
        void updateTaskPriority(string name,int newPriority){
            for(auto &task : tasks) {
                if(task.name == name) {
                    task.priority = newPriority;
                    sortByPriority();
                    return;
                }
            }
        }
        void displayTasks(){
            cout<<"\n--------- Tasks -----------\n";
            if(tasks.empty()){
                cout<<"\nNo tasks available.";
                return;
            }
            else{
                for(auto task : tasks){
                cout<<task.name<<", Priority: "<<task.priority<<endl;
                }
            }
        }
        static bool comparePriority(const Task &a, const Task &b){
            return a.priority<b.priority;
        }
        void sortByPriority(){
            tasks.sort(comparePriority);
        }
        void clearTasks(){
            tasks.clear();
        }
};

int main(){
    TaskScheduler ts;
    ts.addTask("Complete Assignment",3);
    ts.addTask("Prepare Presentation",1);
    ts.addTask("Prepare Project",2);
    ts.addTask("Submit Assignment",4);

    cout << "Tasks before sorting:\n";
    ts.displayTasks();

    ts.sortByPriority();

    cout <<"\nTasks after sorting:\n";
    ts.displayTasks();

    ts.updateTaskPriority("Complete Assignment",1);
    ts.updateTaskPriority("Submit Assignment",2);
    ts.updateTaskPriority("Prepare Project",3);
    cout<<"\nTasks after updating priority:\n";
    ts.displayTasks();

    ts.removeTask("Prepare Presentation");
    cout << "\nTasks after removing 'Prepare Presentation':\n";
    ts.displayTasks();

    cout << "\nTasks after clearing:\n";
    ts.clearTasks();
    ts.displayTasks();

    return 0;
}
