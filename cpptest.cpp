#include <iostream>
#include <string>
#include <thread>
using namespace std;
using namespace std::chrono_literals;
int main() {
  try {
    while (true) {
     string s;
     cout << "command list:\n1. test - simple test\n2. idk check it - lol\n3. repeater - repeats what you say\nexit. you know what that\'s gonna do lol\nthat\'s it for now!\n\n";
     cin >> s;
      if (s == "1") {
        cout << "this is a nice test.\n\n";
      }
      else if (s == "2") {
        cout << "weird. well, hello!\n\n";
      }
      else if (s == "3") {
        string r;
        cout << "You: ";
        cin >> r;
        size_t pos = 0;
        while ((pos = r.find('%', pos)) != string::npos) {
          r.replace(pos, 1, " ");
          pos += 1;
        }
        cout << "Bot: " << r << "\n\n";
      }
      else if (s == "exit") {
        cout << "exiting...";
        exit(0);
      }
       else {
         cout << "\n\n\n\n:(\nThe program received an error.\nIf you\'re coming to voxj himself, tell him this code:\nINVALID_INPUT\n\n\n\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(5000));
       }
    }
  }
  catch (const std::exception& e) {
    cout << "error: " << e.what() << "\n\n";
  }
}
