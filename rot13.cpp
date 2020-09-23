#include <string>
using namespace std;

string rot13(string msg)
{
  string encrypt;
  for (size_t i = 0; i < msg.size(); i++){
    if(isalpha(msg[i])){
      if((tolower(msg[i])) - 'a' < 14){
        encrypt.append(1, msg[i] + 13);
      } else{
        encrypt.append(1, msg[i] - 13);
      }
    } else{
        encrypt.append(1, msg[i]);
    }
  }
  return encrypt;
}
