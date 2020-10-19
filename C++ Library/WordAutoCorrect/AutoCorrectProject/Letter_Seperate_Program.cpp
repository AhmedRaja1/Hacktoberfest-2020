#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    fstream file;
    string line;
    string check;

    ofstream n[26];

    file.open("words.txt");
    n[0].open("a.txt");
    n[1].open("b.txt");
    n[2].open("c.txt");
    n[3].open("d.txt");
    n[4].open("e.txt");
    n[5].open("f.txt");
    n[6].open("g.txt");
    n[7].open("h.txt");
    n[8].open("i.txt");
    n[9].open("j.txt");
    n[10].open("k.txt");
    n[11].open("l.txt");
    n[12].open("m.txt");
    n[13].open("n.txt");
    n[14].open("o.txt");
    n[15].open("p.txt");
    n[16].open("q.txt");
    n[17].open("r.txt");
    n[18].open("s.txt");
    n[19].open("t.txt");
    n[20].open("u.txt");
    n[21].open("v.txt");
    n[22].open("w.txt");
    n[23].open("x.txt");
    n[24].open("y.txt");
    n[25].open("z.txt");


    if(file.is_open())
    {
        cout<<"File Open"<<endl;

        char s;
        while(getline(file,line))
        {
            s='a';
            check=line;
            for(int i=0; i<26; i++)
            {
                if(check[0]==s)
                {

                    if(n[i].is_open())
                    {
                        n[i]<<check<<endl;
                    }
                    else
                    {
                        cout<<"not work"<<endl;
                    }
                }
                s++;
            }
        }

    }
    else
    {
        cout<<"Error opening file"<<endl;
    }


    return 0;
}
