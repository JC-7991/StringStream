#include <sstream>
#include <vector>
#include <iostream>

/*Input: 1,2,3,4,5
Output:
1
2
3
4
5
*/

std::vector<int> parseInts(std::string str){

  std::stringstream ss(str);
  std::vector<int> result;
  
  char ch;
  int tmp;

  while(ss >> tmp){
    result.push_back(tmp);
    ss >> ch;
  }

  return result;

}

int main(){

  std::string str;
  std::cin >> str;
  
  std::vector<int> integers = parseInts(str);
  
  for(int i = 0; i < integers.size(); i++){
    std::cout << integers[i] << "\n";
  }
    
  return 0;

}