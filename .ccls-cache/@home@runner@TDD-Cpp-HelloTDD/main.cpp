#include <iostream>
#include <fstream>
#include <string>
#include <list>


using namespace std;

string fb(int num){
  string result= to_string(num);
  bool fizzFlag = false;
  if(num%3==0) {
    result = "Fizz";
    fizzFlag = true;
  }
  if(num%5==0) {
    if (fizzFlag) { return string("FizzBuzz"); }
    result = "Buzz";
  }
  return result;
}

int main() {
  //std::cout << "Hello World!" << std::endl;
  
  //read data
  //read input file and return a data structure
  ifstream inputFile;
  string line=" ";
  list<string>strList;
  inputFile.open("input.txt");
  do{
    getline(inputFile,line);
      strList.push_back(line);    
  }while(!inputFile.eof()); 
  inputFile.close();
  strList.pop_front();
  
  
  //compute results
  //iterate over the data structure
  string result="";
  //int num=0;

  
  for (const auto&  str: strList){     
    //cout << str << " " << fb(stoi(str))<< endl;
    result += str + " " + fb(stoi(str)) + "\n";
  }

  /*
  for (size_t pos=1; pos<strVector.size(); ++pos){
    num = stoi(strVector[pos]);
    //result = fb(num);
    cout << num << " " << result << endl;
    //<< fb(num) ;
    //compute each FB
    // result = result + strVector[pos] + " " + fb(num) + "\n";
  }
  */
  
  
  //print results
  cout << result;
  //for in range loop
  /*
  for (const auto& element : strVector){
    cout << element << endl;
  }
*/
  
  
  
  return 0;
}