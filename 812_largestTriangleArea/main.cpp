//
//  main.cpp
//  812_largestTriangleArea
//
//  Created by 孙永杰 on 2022/5/15.
//

#include <iostream>
#include "largestTriangleArea.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::vector< std::vector< int > > array;
    std::vector< int > a;
    std::vector< int > b;
    std::vector< int > c;
    std::vector< int > d;
    std::vector< int > e;
    a.push_back( 0 );
    a.push_back( 0 );
    b.push_back( 0 );
    b.push_back( 1 );
    c.push_back( 1 );
    c.push_back( 0 );
    d.push_back( 0 );
    d.push_back( 2 );
    e.push_back( 2 );
    e.push_back( 0 );
    array.push_back( a );
    array.push_back( b );
    array.push_back( c );
    array.push_back( d );
    array.push_back( e );
    solution_812 solution;
    std::cout << solution.largesttriangleArea(array) << std::endl;
    return 0;
}
