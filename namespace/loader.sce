// ----------------------------------------------------------------------------
//  This file was automatically generated by SWIG (http://www.swig.org).
//  Version 4.0.0
// 
//  Do not make changes to this file unless you know what you are doing--modify
//  the SWIG interface file instead.
// ----------------------------------------------------------------------------- */

libpairing_path = get_absolute_file_path('loader.sce');
[bOK, ilib] = c_link('libpairing');
if bOK then
  ulink(ilib);
end
list_functions = [..
  'pairing_Init'; ..
  'SWIG_this'; ..
  'SWIG_ptr'; ..
  'std_get'; ..
  'std_set'; ..
];
addinter(fullfile(libpairing_path, 'libpairing' + getdynlibext()), 'libpairing', list_functions);
clear libpairing_path;
clear bOK;
clear ilib;
clear list_functions;