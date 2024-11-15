#include <iostream>
#include <string>

using namespace std;

struct pillow{
    int len;
    string color;
    int weight;
    string soft;
    string name;
};

void func(int sizes, const pillow *massiv){
    int maxx = 0;
    int indexMax = 0;
    for(int i = 0; i < sizes; i++){
        if(maxx < massiv[i].len){
            maxx = massiv[i].len;
            indexMax = i;
        }
    }
    cout << "best pillow: " << massiv[indexMax].name << endl;
    cout << "index: " << indexMax + 1 << endl;
    cout << "len: " << massiv[indexMax].len << endl;
    cout << "color: " << massiv[indexMax].color << endl;
    cout << "weight: " << massiv[indexMax].weight << endl;
    cout << "soft: " << massiv[indexMax].soft << endl;
}

int main()
{
    pillow cat  = {20,"orange",150, "soft","cat" };
    pillow shark  = {30,"white",300, "hard","shark" };
    pillow goose  = {21,"red",250,"soft","goose"};

    int sizes=3;
    pillow *massiv = new pillow [sizes]{cat,shark,goose};

    func(sizes,massiv);

    delete [] massiv;

    return 0;
}
