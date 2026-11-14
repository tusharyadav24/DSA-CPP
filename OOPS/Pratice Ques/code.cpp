#include <iostream>
#include <string>
using namespace std;

class User {
private:
    int id;
    string password;

public:
    string username;

    User(int id) {
        this->id = id;
    }

    // Getter
    string getPassword() {
        return password;
    }

    // Setter
    void setPassword(string password) {
        this->password = password;
    }
};

int main() {
    // 1. Object create karna (Parameterized constructor call hoga)
    User u1(101);

    // 2. Public member ko directly access aur set karna
    u1.username = "tushar_yadav";

    // 3. Private member 'password' ko Setter ke through set karna
    u1.setPassword("secret123");

    // 4. Values print karna (Private member ke liye Getter use hoga)
    cout << "Username: " << u1.username << endl;
    cout << "Password: " << u1.getPassword() << endl;

    return 0;
}