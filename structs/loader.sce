// ----------------------------------------------------------------------------
//  This file was automatically generated by SWIG (http://www.swig.org).
//  Version 3.0.13
// 
//  Do not make changes to this file unless you know what you are doing--modify
//  the SWIG interface file instead.
// ----------------------------------------------------------------------------- */

libstructs_path = get_absolute_file_path('loader.sce');
[bOK, ilib] = c_link('libstructs');
if bOK then
  ulink(ilib);
end
list_functions = [..
  'structs_Init'; ..
  'SWIG_this'; ..
  'SWIG_ptr'; ..
  'Foo_x_set'; ..
  'Foo_x_get'; ..
  'Foo_arr_set'; ..
  'Foo_arr_get'; ..
  'new_Foo'; ..
  'delete_Foo'; ..
];
addinter(fullfile(libstructs_path, 'libstructs' + getdynlibext()), 'libstructs', list_functions);
clear libstructs_path;
clear bOK;
clear ilib;
clear list_functions;
