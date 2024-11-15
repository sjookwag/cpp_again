#include <iostream>
#include <string>
#include <regex>

using std::string, std::cout;
using std::regex, std::regex_replace;

string trim(string s,const string& drop = " ")
{
  string r=s.erase(s.find_last_not_of(drop)+1);
  return r.erase(0,r.find_first_not_of(drop));
}

string rtrim(string s,const string& drop = " ")
{
  string r=s.erase(s.find_last_not_of(drop)+1); 
  return r;
}

string ltrim(string s,const string& drop = " ")
{ 
  string r=s.erase(0,s.find_first_not_of(drop)); 
  return r;
}

int main()
{
  const string untrimmed = "    abcd    " ;
  cout << '|' << untrimmed << '|' << '\n' ; // |    abcd    |

  const string nothing = "" ;
  
  const auto trimmed = trim( untrimmed ) ;
  cout << '|' << trimmed << '|' << '\n' ; // |abcd|

  const auto ltrimmed = regex_replace( untrimmed, regex( "^\\s+" ), nothing ) ;
  cout << '|' << ltrimmed << '|' << '\n' ; // |abcd    |
  
  const auto ltrimvba = ltrim( untrimmed ) ;
  cout << '|' << ltrimvba << '|' << '\n' ; // |abcd    |

  const auto rtrimmed = regex_replace( untrimmed, regex( "\\s+$" ), nothing ) ;
  cout << '|' << rtrimmed << '|' << '\n' ; // |    abcd|
  
  const auto rtrimvba = rtrim( untrimmed ) ;
  cout << '|' << rtrimvba << '|' << '\n' ; // |    abcd|
}
