#pragma once
#include <vector>

class sortstrategy {
    public:
        // sortstrategy(){}
        virtual ~sortstrategy();
        virtual void sort(std::vector<int>& vector)=0;
       // virtual void sort(template <typename T> T& container)=0;
        void Print(const std::vector<int>& vector) const;
};

class bubblesortstrategy : public sortstrategy{
    public : 
        virtual void sort(std::vector<int>& vector) override;
};

class selectionsortstrategy : public sortstrategy{
    public : 
        virtual void sort(std::vector<int>& vector) override;
};

class quicksortstrategy : public sortstrategy {
public:
    virtual void sort(std::vector<int>& vector) override;
};


