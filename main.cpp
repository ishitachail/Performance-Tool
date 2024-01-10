#include <iostream>
#include <vector>
#include </Users/user/source/sortstrategy.h>
#include </Users/user/source/data.h>
#include <time.h>
#include <chrono>


int main(){
     /*std::vector<int> vector = {3,8,9,38,65,22,12,43,27};
     std::cout<<"unsorted:";
     std::cout<<"3,8,9,38,65,22,12,43,27";
     std::cout<<std::endl;*/

    
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
    //obj->Print(v1);
    //time(&start);
    auto start1 = std::chrono::high_resolution_clock::now();
    obj->sort(v1);
    auto finish1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1 = finish1 - start1;
    std::cout << "Elapsed time for Bubble sort: " << elapsed1.count() << " s\n";
    //time(&end);
    //obj->Print(v1);
    //obj->Print(vector);
    //timetaken=double(end-start);
    //std::cout<<" Bubblesort Time : "<<timetaken<<" sec \n";
    
    auto start2 = std::chrono::high_resolution_clock::now();
    //time(&start);
    obj1->sort(v1);
    auto finish2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed2 = finish2 - start2;
    std::cout << "Elapsed time for Selection sort: " << elapsed2.count() << " s\n";
    //time(&end);
    //timetaken=double(end-start);
    //std::cout<<" Selection Sort Time : "<<timetaken<<" sec \n";
    
    auto start3 = std::chrono::high_resolution_clock::now();
    obj2->sort(v1);
    auto finish3 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed3 = finish3 - start3;
    std::cout << "Elapsed time for Quicksort : " << elapsed3.count() << " s\n";
    //time(&end);
    //timetaken=double(end-start);
    //std::cout<<" Quicksort Time : "<<timetaken<<" sec \n\n";


    std::cout<<"Unsorted Integers : \n";
    //time(&start);
    start1 = std::chrono::high_resolution_clock::now();
    obj->sort(v3);
    //time(&end);
    finish1 = std::chrono::high_resolution_clock::now();
    //timetaken=double(end-start);
    elapsed1 = finish1 - start1;
    std::cout << "Elapsed time for Bubble sort: " << elapsed1.count() << " s\n";
    //std::cout<<" Bubblesort Time : "<<timetaken<<" sec \n";
    //time(&start);
    start2 = std::chrono::high_resolution_clock::now();
    obj1->sort(v3);
    //time(&end);
    finish2 = std::chrono::high_resolution_clock::now();
    //timetaken=double(end-start);
    //std::cout<<" Selection Sort Time : "<<timetaken<<" sec \n";
    elapsed2 = finish2 - start2;
    std::cout << "Elapsed time for Selection sort: " << elapsed2.count() << " s\n";


    //time(&start);
    start3 = std::chrono::high_resolution_clock::now();
    obj2->sort(v3);
    finish3 = std::chrono::high_resolution_clock::now();
    //time(&end);
    //timetaken=double(end-start);
    elapsed3 = finish3 - start3;
    std::cout << "Elapsed time for Quicksort : " << elapsed3.count() << " s\n";

    //std::cout<<" Quicksort Time : "<<timetaken<<" sec \n\n";


    std::cout<<"Reverse Sorted Integers : \n";
    
    start1 = std::chrono::high_resolution_clock::now();
    //time(&start);
    obj->sort(v5);
    finish1 = std::chrono::high_resolution_clock::now();
    elapsed1 = finish1 - start1;
    std::cout << "Elapsed time for Bubble sort: " << elapsed1.count() << " s\n";
    //time(&end);
    //timetaken=double(end-start);
    //std::cout<<" Bubblesort Time : "<<timetaken<<" sec \n";
    
    //time(&start);
    start2 = std::chrono::high_resolution_clock::now();
    obj1->sort(v5);
    //time(&end);
    finish2 = std::chrono::high_resolution_clock::now();
    elapsed2 = finish2 - start2;
    std::cout << "Elapsed time for Selection sort: " << elapsed2.count() << " s\n";

    //timetaken=double(end-start);
    //std::cout<<" Selection Sort Time : "<<timetaken<<" sec \n";
    
    //time(&start);
    start3 = std::chrono::high_resolution_clock::now();
    obj2->sort(v5);
    finish3 = std::chrono::high_resolution_clock::now();
    elapsed3 = finish3 - start3;
    std::cout << "Elapsed time for Quicksort : " << elapsed3.count() << " s\n";

    //time(&end);
    //timetaken=double(end-start);
    //std::cout<<" Quicksort Time : "<<timetaken<<" sec \n";





}