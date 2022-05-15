//
//  largestTriangleArea.h
//  812_largestTriangleArea
//
//  Created by 孙永杰 on 2022/5/15.
//

#ifndef largestTriangleArea_h
#define largestTriangleArea_h

#include <vector>
#include <cmath>

class point {
public:
    double x;
    double y;
    bool operator<(const point& p) const {
        bool flag = false;
        if ( x < p.x ) {
            flag = true;
        }
        if ( x > p.x ) {
            return false;
        }
        if ( y < p.y ) {
            return true;
        }
        return flag;
    }
};

class triPoint {
public:
    /*bool operator<(const triPoint& p) const {
      bool flag = false;
      if ( a == p.a && b == p.b && c == p.c ) {
      flag = true;
      }
      return flag;
      }*/
    point a;
    point b;
    point c;
};

class solution_812 {
public:
    double largesttriangleArea( std::vector< std::vector< int > >& points ) {
        double max=0;
        double x1;
        double y1;
        double x2;
        double y2;
        double x3;
        double y3;
        double area;

        std::vector< std::vector< int > >::size_type n = points.size();
        for ( std::vector< std::vector< int > >::size_type i = 0; i < n - 2; ++i ) {
            x1 = points[i][0];
            y1 = points[i][1];
            for ( std::vector< std::vector< int > >::size_type j = 0; j < n - 1; ++j ) {
                x2 = points[j][0];
                y2 = points[j][1];
                for ( std::vector< std::vector< int > >::size_type k = 0; k < n ; ++k ) {
                    x3 = points[k][0];
                    y3 = points[k][1];
                    area = abs( ( x1 * y2 - x1 * y3 + x2 * y3 - x2 * y1 + x3 * y1 - x3 * y2 ) / 2 );
                    if ( area > max ) {
                        max = area;
                    }
                }
            }
        }
        return max;
    }
};

#endif /* largestTriangleArea_h */
