// ----------------------------------------------------------------------------
//  This file was automatically generated by SWIG (http://www.swig.org).
//  Version 4.0.0
// 
//  Do not make changes to this file unless you know what you are doing--modify
//  the SWIG interface file instead.
// ----------------------------------------------------------------------------- */

libsortit_path = get_absolute_file_path('loader.sce');
[bOK, ilib] = c_link('libsortit');
if bOK then
  ulink(ilib);
end
list_functions = [..
  'sortit_Init'; ..
  'SWIG_this'; ..
  'SWIG_ptr'; ..
  'sortit'; ..
];
addinter(fullfile(libsortit_path, 'libsortit' + getdynlibext()), 'libsortit', list_functions);
clear libsortit_path;
clear bOK;
clear ilib;
clear list_functions;
