#include <iostream>
#include <string>

using namespace std;


int main()
{
    int a = 0,e = 0,i = 0,o = 0,u = 0;
    string *punt = new string();


    cout << "Ingrese" << endl;
    getline(cin,*punt);

    for(int i = 0; i < punt->size(); i++)
    {
       if(punt->at(i) == 'a')
       {
           a++;
       } else
            if (punt->at(i) == 'e')
                {
                  e++;
                }
                else
                    if (punt->at(i) == 'i')
                        {
                            i++;
                        }
                        else
                            if(punt->at(i) == 'o')
                                {
                                    o++;
                                }
                                else
                                    if(punt->at(i) == 'u')
                                        {
                                            u++;
                                        }
    }

    cout << "La frase: " << *punt << endl;
    cout << "Tiene: " << endl;
    cout << "A: " << a << endl;
    cout << "E: " << e << endl;
    cout << "I: " << i << endl;
    cout << "O: " << o << endl;
    cout << "U: " << u << endl;

    delete punt;

    return 0;


}
