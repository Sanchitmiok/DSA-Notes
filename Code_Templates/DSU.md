# Disjoint Set Union

```cpp

class DisjointSetUnion{
    private:
    vector<int> parent , Size , rank;
    public:
     DisjointSetUnion(int size){
        parent.resize(size);
        Size.resize(size , 1);
        rank.resize(size , 0);

        for(int i = 0  ; i < size ; i++){
            parent[i] = i;
        }
    }
    int find(int i){
        if(parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }

    void UnionByRank(int x , int y){
        int xRoot = find(x);
        int yRoot = find(y);
        if(xRoot == yRoot) return;
        if(rank[xRoot] < rank[yRoot]){
            parent[xRoot] = yRoot;
        }else if(rank[xRoot] > rank[yRoot]){
            parent[yRoot] = xRoot;
        }else{
            parent[xRoot] = yRoot;
            rank[yRoot]++;
        }
    }

    void UnionBySize(int x , int y){
        int xRoot = find(x);
        int yRoot = find(y);

        if(xRoot == yRoot) return;
        
        int xSize = Size[xRoot];
        int ySize = Size[yRoot];

        if(xSize < ySize){
            parent[xRoot] = yRoot;
            Size[yRoot] += xSize;
        }else{
            parent[yRoot] = xRoot;
            Size[xRoot] += ySize;
        }
    }

};


```