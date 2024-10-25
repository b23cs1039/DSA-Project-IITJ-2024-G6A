#include <bits/stdc++.h>
using namespace std;

class MBR{
    public:
    double X_low;
    double X_high;
    double Y_low;
    double Y_high;

    MBR(double x1,double y1,double x2,double y2): X_low(x1),Y_low(y1),X_high(x2),Y_high(y2) {}
};

class Node{
    public:
    bool isLeaf;
    vector<Node> children;
    vector<MBR> entries;
    vector<pair<double,double>> locations;

    Node(bool leaf = true): isLeaf(leaf) {};

    void addLocation(double x, double y){
        if(isLeaf){
            locations.emplace_back(x,y);
            MBR box(x,y,x,y);
            entries.push_back(box);
        }
    }

    void makeChild(Node* child, const MBR& box){
        if(!isLeaf){
            children.push_back(child);
            entries.push_back(box);
        }
    }

};

int main(){
    
}