//
// Created by 张向辉 on 2021/1/20.
//

#ifndef TEST_BOOST_COMPUTE_ALGEBRA_HPP
#define TEST_BOOST_COMPUTE_ALGEBRA_HPP

#include <iostream>
#include <vector>
#include <boost/compute.hpp>

#define BOOST_COMPUTE_DEBUG_KERNEL_COMPILATION
#define BOOST_COMPUTE_HAVE_THREAD_LOCAL
#define BOOST_COMPUTE_THREAD_SAFE
#define BOOST_COMPUTE_USE_OFFLINE_CACHE

namespace DTS{

    template<typename T>
    class Algebra {
    public:
        Algebra();
        void list_device();
        T test_flops();
//        const std::vector<T> vec_add(std::vector<T>&, std::vector<T>&);

    };
}

#endif //TEST_BOOST_COMPUTE_ALGEBRA_HPP
