#pragma once
#include <vector>

class integer{
    public:
        virtual std::vector<int> createvector( int size)=0;
};

class sortedinteger: public integer{
    public:
        virtual std::vector<int> createvector(int size)override;
};

class unsortedinteger: public integer{
    public:
        virtual std::vector<int> createvector(int size)override;
};

class reversesortedinteger: public integer{
    public: 
        virtual std::vector<int> createvector(int size)override;
};

class doubled{
    public:
        virtual std::vector<double> createvector( int size)=0;
};

class sorteddouble: public doubled{
    public:
        virtual std::vector<double> createvector(int size)override;
};

class unsorteddouble: public doubled{
    public:
        virtual std::vector<double> createvector(int size)override;
};

class reversesorteddouble: public doubled{
    public: 
        virtual std::vector<double> createvector(int size)override;
};

class num_factory{
    public:
        virtual integer* createinteger()=0;
        virtual doubled* createdouble()=0;
};

class sortedfactory: public num_factory{
    public:
        integer* createinteger();
        doubled* createdouble();
};

class unsortedfactory: public num_factory{
    public:
        integer* createinteger();
         doubled* createdouble();
};

class reversesortedfactory: public num_factory{
    public:
        integer* createinteger();
        doubled* createdouble();
};

enum characteristic{
    sorted,
    unsorted,
    reversesorted
};

class datafactory{
    public:
        static num_factory* createfactory(characteristic c);
};