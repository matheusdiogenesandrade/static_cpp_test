#include <iostream>

#include "static.hpp"

using namespace std;
using namespace static_namespace;

static void static_namespace::static_function(){
    cout<<"Static"<<endl;
}
static inline void static_namespace::static_inline_function() {
    cout<<"Static inline"<<endl;
}
