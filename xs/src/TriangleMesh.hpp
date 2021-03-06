#ifndef slic3r_TriangleMesh_hpp_
#define slic3r_TriangleMesh_hpp_

#include <myinit.h>
#include <admesh/stl.h>
#include "Point.hpp"

namespace Slic3r {

class TriangleMesh
{
    public:
    TriangleMesh();
    ~TriangleMesh();
    void ReadSTLFile(char* input_file);
    void ReadFromPerl(SV* vertices, SV* facets);
    void Repair();
    void WriteOBJFile(char* output_file);
    void scale(float factor);
    void translate(float x, float y, float z);
    void align_to_origin();
    void rotate(double angle, Point* center);
    stl_file stl;
};

}

#endif
