#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Member {
public:
    string name;
    int age;
    string role;

    Member(string name, int age, string role) : name(name), age(age), role(role) {}

    void updateDetails(int newAge, const string& newRole) {
        age = newAge;
        role = newRole;
    }
};

class Node {
public:
    Member member;
    Node* next;

    Node(const Member& member) : member(member), next(NULL) {}
};

class Community {
private:
    Node* head;

    void writeMemberToFile(const Member& member) {
        ofstream outFile("members.txt", ios::app);
        if (outFile.is_open()) {
            outFile << "Name: " << member.name << ", Age: " << member.age << ", Role: " << member.role << endl;
            outFile.close();
            cout << "Member details written to file successfully!" << endl;
        } else {
            cout << "Unable to open file." << endl;
        }
    }

    void swapNodes(Node* a, Node* b) {
        Member temp = a->member;
        a->member = b->member;
        b->member = temp;
    }

public:
    Community() : head(NULL) {}

    ~Community() {
        Node* current = head;
        while (current != NULL) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void addMember(const string& name, int age, const string& role) {
        Member newMember(name, age, role);
        Node* newNode = new Node(newMember);

        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }

        writeMemberToFile(newMember);
        cout << "Member added successfully!" << endl;
    }

    void displayMembers() const {
        if (head == NULL) {
            cout << "No members in the community." << endl;
            return;
        }

        cout << "Community Members:" << endl;
        Node* current = head;
        while (current != NULL) {
            cout << "Name: " << current->member.name << ", Age: " << current->member.age << ", Role: " << current->member.role << endl;
            current = current->next;
        }
    }

    void removeMember(const string& name) {
        if (head == NULL) {
            cout << "No members to remove." << endl;
            return;
        }

        if (head->member.name == name) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Member removed successfully!" << endl;
            return;
        }

        Node* current = head;
        while (current->next != NULL && current->next->member.name != name) {
            current = current->next;
        }

        if (current->next == NULL) {
            cout << "Member not found." << endl;
        } else {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Member removed successfully!" << endl;
        }
    }

    void updateMember(const string& name, int newAge, const string& newRole) {
        Node* current = head;
        bool found = false;
        while (current != NULL) {
            if (current->member.name == name) {
                current->member.updateDetails(newAge, newRole);
                cout << "Member details updated successfully!" << endl;
                found = true;
                break;
            }
            current = current->next;
        }
        if (!found) {
            cout << "No member found with the name " << name << "." << endl;
        }
    }

    void sortByName() {
        if (head == NULL || head->next == NULL) {
            return; // No need to sort if list has 0 or 1 element
        }

        bool swapped;
        Node* ptr;
        Node* last = NULL;

        do {
            swapped = false;
            ptr = head;

            while (ptr->next != last) {
                if (ptr->member.name > ptr->next->member.name) {
                    swapNodes(ptr, ptr->next);
                    swapped = true;
                }
                ptr = ptr->next;
            }
            last = ptr;
        } while (swapped);
    }

    void sortByAge() {
        if (head == NULL || head->next == NULL) {
            return; // No need to sort if list has 0 or 1 element
        }

        bool swapped;
        Node* ptr;
        Node* last = NULL;

        do {
            swapped = false;
            ptr = head;

            while (ptr->next != last) {
                if (ptr->member.age > ptr->next->member.age) {
                    swapNodes(ptr, ptr->next);
                    swapped = true;
                }
                ptr = ptr->next;
            }
            last = ptr;
        } while (swapped);
    }

    void sortByRole() {
        if (head == NULL || head->next == NULL) {
            return; // No need to sort if list has 0 or 1 element
        }

        bool swapped;
        Node* ptr;
        Node* last = NULL;

        do {
            swapped = false;
            ptr = head;

            while (ptr->next != last) {
                if (ptr->member.role > ptr->next->member.role) {
                    swapNodes(ptr, ptr->next);
                    swapped = true;
                }
                ptr = ptr->next;
            }
            last = ptr;
        } while (swapped);
    }

    void randomSearch() const {
        int searchOption = rand() % 3; // Random number between 0 and 2
        string inputStr;
        int inputInt;

        switch (searchOption) {
        case 0:
            cout << "Enter name to search: ";
            cin >> inputStr;
            searchMemberByName(inputStr);
            break;
        case 1:
            cout << "Enter age to search: ";
            cin >> inputInt;
            searchMemberByAge(inputInt);
            break;
        case 2:
            cout << "Enter role to search: ";
            cin >> inputStr;
            searchMemberByRole(inputStr);
            break;
        default:
            cout << "Error in random search selection." << endl;
        }
    }

    void searchMemberByName(const string& name) const {
        Node* current = head;
        bool found = false;
        while (current != NULL) {
            if (current->member.name == name) {
                cout << "Found Member - Name: " << current->member.name << ", Age: " << current->member.age << ", Role: " << current->member.role << endl;
                found = true;
                break;
            }
            current = current->next;
        }
        if (!found) {
            cout << "No member found with the name " << name << "." << endl;
        }
    }

    void searchMemberByAge(int age) const {
        Node* current = head;
        bool found = false;
        while (current != NULL) {
            if (current->member.age == age) {
                cout << "Found Member - Name: " << current->member.name << ", Age: " << current->member.age << ", Role: " << current->member.role << endl;
                found = true;
                break;
            }
            current = current->next;
        }
        if (!found) {
            cout << "No member found with the age " << age << "." << endl;
        }
    }

    void searchMemberByRole(const string& role) const {
        Node* current = head;
        bool found = false;
        while (current != NULL) {
            if (current->member.role == role) {
                cout << "Found Member - Name: " << current->member.name << ", Age: " << current->member.age << ", Role: " << current->member.role << endl;
                found = true;
                break;
            }
            current = current->next;
        }
        if (!found) {
            cout << "No member found with the role " << role << "." << endl;
        }
    }
};

int main() {
    srand(time(0)); // Seed for random number generator
    Community community;
    int choice;
    string name, role;
    int age, newAge;
    string newRole;

    do {
        cout << "1. Add Member\n" << endl;
        cout << "2. Display Members\n" << endl;
        cout << "3. Remove Member\n" << endl;
        cout << "4. Search Member (Random)\n" << endl;
        cout << "5. Update Member Details\n" << endl;
        cout << "6. Sort Members by Name\n" << endl;
        cout << "7. Sort Members by Age\n" << endl;
        cout << "8. Sort Members by Role\n" << endl;
        cout << "9. Exit\n" << endl;
        cout << "Enter your choice: \n";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter role: ";
            cin >> role;
            community.addMember(name, age, role);
            break;
        case 2:
            community.displayMembers();
            break;
        case 3:
            cout << "Enter name of the member to remove: ";
            cin >> name;
            community.removeMember(name);
            break;
        case 4:
            community.randomSearch();
            break;
        case 5:
            cout << "Enter name of the member to update: ";
            cin >> name;
            cout << "Enter new age: ";
            cin >> newAge;
            cout << "Enter new role: ";
            cin >> newRole;
            community.updateMember(name, newAge, newRole);
            break;
        case 6:
            community.sortByName();
            cout << "Members sorted by Name." << endl;
            break;
        case 7:
            community.sortByAge();
            cout << "Members sorted by Age." << endl;
            break;
        case 8:
            community.sortByRole();
            cout << "Members sorted by Role." << endl;
            break;
        case 9:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}
