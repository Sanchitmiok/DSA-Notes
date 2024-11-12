# Custom comparator

## Comparator for priority_queue
isse tab use karna hai jab {a , b} me min value ( i.e a ) top pe ho aur max value bottom , here b is just mapping of a or value stored wrt a

```
struct comp{
    public:
    bool operator() (pair<int , int> &a  , pair<int,int> &b){
        return a.first < b.first;
    }
};
```