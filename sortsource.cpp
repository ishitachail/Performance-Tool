#include <iostream>
#include <vector>
#include </Users/user/source/sortstrategy.h>
#include </Users/user/source/data.h>
#include <time.h>


int main(){
    // std::vector<int> vector = {3,8,9,38,65,22,12,43,27};
    // std::cout<<"unsorted:";
    // std::cout<<"3,8,9,38,65,22,12,43,27";
    // std::cout<<std::endl;

    
    // sortstrategy *obj=nullptr;
    // obj = new bubblesortstrategy;
    // obj -> sort(vector);
    // obj -> Print(vector);

    num_factory* fact1=datafactory::createfactory(sorted);
    integer* d1=fact1->createinteger();
    std::vector<int> v1=d1->createvector(1000);
    doubled* d2=fact1->createdouble();
    std::vector<double> v2=d2->createvector(1000);

    num_factory* fact2=datafactory::createfactory(unsorted);
    integer* d3=fact2->createinteger();
    std::vector<int> v3=d3->createvector(1000);
    doubled* d4=fact2->createdouble();
    std::vector<double> v4=d4->createvector(1000);

    num_factory* fact3=datafactory::createfactory(reversesorted);
    integer* d5=fact3->createinteger();
    std::vector<int> v5=d5->createvector(1000);
    doubled* d6=fact3->createdouble();
    std::vector<double> v6=d6->createvector(1000);


    std::cout<<"Performance of Different Sorting Algorithm With Different Datatype in Vectors:\n";
    double timetaken;
    sortstrategy* obj = new bubblesortstrategy();
    sortstrategy* obj1 = new selectionsortstrategy();
    sortstrategy* obj2 = new quicksortstrategy();

    std::cout<<"Sorted Integers : \n";
    time_t start, end;
    time(&start);
    obj->sort(v1);
    time(&end);
    timetaken=double(end-start);
    std::cout<<" Bubblesort Time : "<<timetaken<<" sec \n";
    time(&start);
    obj1->sort(v1);
    time(&end);
    timetaken=double(end-start);
    std::cout<<" Selection Sort Time : "<<timetaken<<" sec \n";
    time(&start);
    obj2->sort(v1);
    time(&end);
    timetaken=double(end-start);
    std::cout<<" Quicksort Time : "<<timetaken<<" sec \n\n";


    std::cout<<"Unsorted Integers : \n";
    time(&start);
    obj->sort(v3);
    time(&end);
    timetaken=double(end-start);
    std::cout<<" Bubblesort Time : "<<timetaken<<" sec \n";
    time(&start);
    obj1->sort(v3);
    time(&end);
    timetaken=double(end-start);
    std::cout<<" Selection Sort Time : "<<timetaken<<" sec \n";
    time(&start);
    obj2->sort(v3);
    time(&end);
    timetaken=double(end-start);
    std::cout<<" Quicksort Time : "<<timetaken<<" sec \n\n";


    std::cout<<"Reverse Sorted Integers : ";
    time(&start);
    obj->sort(v5);
    time(&end);
    timetaken=double(end-start);
    std::cout<<" Bubblesort Time : "<<timetaken<<" sec \n";
    time(&start);
    obj1->sort(v5);
    time(&end);
    timetaken=double(end-start);
    std::cout<<" Selection Sort Time : "<<timetaken<<" sec \n";
    time(&start);
    obj2->sort(v5);
    time(&end);
    timetaken=double(end-start);
    std::cout<<" Quicksort Time : "<<timetaken<<" sec \n";





}