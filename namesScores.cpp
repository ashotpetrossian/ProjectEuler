#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

int main()
{
    std::vector<std::string> names;
    std::string path = "names.txt";
    std::ifstream fin;
    fin.open(path);
    if (!fin.is_open()) {
        throw ("Can't open the file!\n");
    }
    while (!fin.eof()) {
        std::string line;
        std::getline(fin, line);
        std::string tmp;
        int scope_count{0};
        for (size_t i = 0; i < line.size(); i++)
        {
            if (line[i] == '\"') {
                scope_count++;
                continue;
            }
            if (scope_count % 2 != 0 && isalpha(line[i])) {
                tmp.push_back(line[i]);
            }
            if (scope_count % 2 == 0) {
                names.push_back(tmp);
                tmp = "";
            }
        }
    }
    std::sort(names.begin(), names.end());

    for (size_t i = 0; i < names.size(); i++)
    {
        std::cout<<names[i]<<" ";
        if (i % 5 == 0) {
            std::cout<<std::endl;
        }
    }

    int COLIN_index;
    
    std::vector<int> scores;
    int total_score{0};
    for (size_t i = 0; i < names.size(); i++)
    {
        if (names[i] == "COLIN") {COLIN_index = i;}
        int name_scores{0};
        for (size_t j = 0; j < names[i].size(); j++)
        {
            name_scores += names[i][j] - 64;
        }
        scores.push_back(name_scores * (i + 1));
    }

    auto it  = std::find(names.begin(), names.end(), "COLIN");
    for (size_t i = 0; i < scores.size(); i++)
    {
        //std::cout<<scores[i]<<" ";
        if (i % 11 == 0) {
            //std::cout<<std::endl;
        } 
        total_score += scores[i];
    }
    std::cout<<"names size = "<<names.size()<<"  scores.size = "<<scores.size()<<std::endl;
    std::cout<<"Total score = "<<total_score<<std::endl;
    std::cout<<COLIN_index<<" i tak COLIN a u dra tivy: "<<scores[COLIN_index]<<std::endl;
    
}