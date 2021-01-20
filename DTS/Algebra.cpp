//
// Created by 张向辉 on 2021/1/20.
//

#include "Algebra.hpp"

template<typename T>
DTS::Algebra<T>::Algebra() = default;

template<typename T>
void DTS::Algebra<T>::list_device(){
    std::vector<boost::compute::device> devices = boost::compute::system::devices();
    for (const auto& i : devices) std::cout<<i.name()<<std::endl;
}

template<typename T>
T DTS::Algebra<T>::test_flops() {
    return 0;
}

template class DTS::Algebra<float>;
template class DTS::Algebra<double>;
