#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include </Users/user/source/data.h>

using namespace std;
std::vector<int> sortedinteger ::createvector(int size){
    time_t t1;
    std::vector<int> v(size,0);
    srand ( (unsigned) time (&t1)); 
    generate(v.begin(), v.end(), rand);
    sort(v.begin(),v.end());
    return v;
}
std::vector<int> unsortedinteger:: createvector(int size){
    time_t t1;
    std::vector<int> v(size,0);
    srand ( (unsigned) time (&t1)); 
    generate(v.begin(), v.end(), rand);
    return v;
}
        
std::vector<int> reversesortedinteger:: createvector(int size){
    time_t t1;
    std::vector<int> v(size,0);
    srand ( (unsigned) time (&t1)); 
    generate(v.begin(), v.end(), rand);
    sort(v.begin(), v.end(), greater<int>()); 
    return v;
}

std::vector<double> sorteddouble :: createvector(int size){
    time_t t1;
    //std::vector<double> v(size,0);
    //srand ( (unsigned) time (&t1)); 
    //generate(v.begin(), v.end(), rand);
    std::vector<double> randomDoubles;
    for (int i = 0; i < size; ++i) {
        double randomDouble = static_cast<double>(rand()) / RAND_MAX;
        randomDoubles.push_back(randomDouble);
    }
    sort(randomDoubles.begin(),randomDoubles.end());
    return randomDoubles;
}

std::vector<double> unsorteddouble:: createvector(int size){
    time_t t1;
    //std::vector<double> v(size,0);
    //srand ( (unsigned) time (&t1)); 
    //generate(v.begin(), v.end(), rand);
    std::vector<double> randomDoubles;
    for (int i = 0; i < size; ++i) {
        double randomDouble = static_cast<double>(rand()) / RAND_MAX;
        randomDoubles.push_back(randomDouble);
    }
    //sort(randomDoubles.begin(),randomDoubles.end());
    return randomDoubles;
}
        
std::vector<double> reversesorteddouble :: createvector(int size){
    time_t t1;
    std::vector<double> randomDoubles;
    for (int i = 0; i < size; ++i) {
        double randomDouble = static_cast<double>(rand()) / RAND_MAX;
        randomDoubles.push_back(randomDouble);
    }
    sort(randomDoubles.begin(),randomDoubles.end(),greater<double>());
    return randomDoubles;
}

integer* sortedfactory:: createinteger(){
    return new sortedinteger();
}
        
doubled*  sortedfactory :: createdouble(){
    return new sorteddouble();
}

integer* unsortedfactory:: createinteger(){
    return new unsortedinteger();
}
        
doubled* unsortedfactory :: createdouble(){
    return new unsorteddouble();
}


integer* reversesortedfactory :: createinteger(){
    return new reversesortedinteger();
}

doubled* reversesortedfactory :: createdouble(){
    return new reversesorteddouble();
}



num_factory*  datafactory :: createfactory(characteristic c){
switch (c)
{
    case characteristic::sorted:
        return new sortedfactory();
        break;
    case characteristic::unsorted:
        return new unsortedfactory();
        break;
    case characteristic::reversesorted:
        return new reversesortedfactory();
        break;
    default:
        break;
}
}
