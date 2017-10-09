#include <iostream>
#include <vector>

using namespace std;
const int MAX = 12;
int main()
{
    vector<vector < int > > table ;
    table.resize(MAX + 1);
    for( int i = 0; i < table.size() ; i++)
    {
        table[i].resize(MAX + 1);
    }
    for ( int i = 0 ; i< table.size() ; i++)
    {
        for ( int x = 0 ; x< table[0].size() ; x++)
        {
            if ( x == 0 && i == 0)
            {
                table[0][0]= 0;
            }
            else if ( i == 0)
            {
                table[i][x] = x;
            }
            else if ( x == 0)
            {
                table[i][x]= i;
            }
            else 
            {
                table[i][x] = i*x;
            }
         
        }
        
            
        
    }
    for ( int i = 0 ; i< table.size(); i++)
    {
        for ( int x = 0 ; x< table[0].size(); x++)
        {
            cout << table[i][x] << "  ";
        }
        cout << endl;
    }

return 0;
}
