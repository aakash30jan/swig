#include <wchar.h>
#include "libinherit.hxx"
extern "C"
{
#include "libinherit.h"
#include "addfunction.h"
}

#define MODULE_NAME L"libinherit"

int libinherit(wchar_t* _pwstFuncName)
{
    if(wcscmp(_pwstFuncName, L"inherit_Init") == 0){ addCStackFunction(L"inherit_Init", &inherit_Init, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"SWIG_this") == 0){ addCStackFunction(L"SWIG_this", &SWIG_this, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"SWIG_ptr") == 0){ addCStackFunction(L"SWIG_ptr", &SWIG_ptr, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Shape_x_set") == 0){ addCStackFunction(L"Shape_x_set", &_wrap_Shape_x_set, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Shape_x_get") == 0){ addCStackFunction(L"Shape_x_get", &_wrap_Shape_x_get, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Shape_y_set") == 0){ addCStackFunction(L"Shape_y_set", &_wrap_Shape_y_set, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Shape_y_get") == 0){ addCStackFunction(L"Shape_y_get", &_wrap_Shape_y_get, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Shape_set_location") == 0){ addCStackFunction(L"Shape_set_location", &_wrap_Shape_set_location, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Shape_get_perimeter") == 0){ addCStackFunction(L"Shape_get_perimeter", &_wrap_Shape_get_perimeter, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"new_Shape") == 0){ addCStackFunction(L"new_Shape", &_wrap_new_Shape, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"delete_Shape") == 0){ addCStackFunction(L"delete_Shape", &_wrap_delete_Shape, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Circle_radius_set") == 0){ addCStackFunction(L"Circle_radius_set", &_wrap_Circle_radius_set, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Circle_radius_get") == 0){ addCStackFunction(L"Circle_radius_get", &_wrap_Circle_radius_get, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"new_Circle") == 0){ addCStackFunction(L"new_Circle", &_wrap_new_Circle, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Circle_get_perimeter") == 0){ addCStackFunction(L"Circle_get_perimeter", &_wrap_Circle_get_perimeter, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"delete_Circle") == 0){ addCStackFunction(L"delete_Circle", &_wrap_delete_Circle, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Square_size_set") == 0){ addCStackFunction(L"Square_size_set", &_wrap_Square_size_set, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Square_size_get") == 0){ addCStackFunction(L"Square_size_get", &_wrap_Square_size_get, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"new_Square") == 0){ addCStackFunction(L"new_Square", &_wrap_new_Square, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"Square_get_perimeter") == 0){ addCStackFunction(L"Square_get_perimeter", &_wrap_Square_get_perimeter, MODULE_NAME); }
    if(wcscmp(_pwstFuncName, L"delete_Square") == 0){ addCStackFunction(L"delete_Square", &_wrap_delete_Square, MODULE_NAME); }

    return 1;
}
