#include<iostream>
#include<thread>
#include<functional>

void mf(int &data){
    std::cout<< data <<"\n";
}

void run(std::function<void(int&)> fn, int &data){
    fn(data);
}

int main(){

    int data=23456;

    std::thread t1(run, std::ref(mf),std::ref(data));

    t1.join();
    
    return 0;
}