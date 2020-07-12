#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
	string newTask;
	int count = 0;
	bool exitVal = 1;
	string arrOfTasks[100] = {}; 
	
	cout << "----------- Lista De Tarefas ------------\n";
	cout << "-------- Para sair digite \"exit\" --------\n\n";
	getline(cin, newTask);

	while (exitVal != 0 && count > -1) {
		cout << "Nova tarefa: ";
		getline(cin, newTask);
		
		if (newTask == "exit") {
				exitVal = 0;
		}
		
		arrOfTasks[count] = { newTask };
		count++;
	}
	for (int i = 0; i < count-1; i++) {
		cout << i + 1 << "-[ ] " << arrOfTasks[i] << "\n";
	}
}