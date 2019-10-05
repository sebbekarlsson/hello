#ifndef VISITOR_H
#define VISITOR_H
#include "AST.h"


AST_T* visitor_visit(AST_T* node);

AST_T* visitor_visit_variable_definition(AST_T* node);

AST_T* visitor_visit_variable(AST_T* node);

AST_T* visitor_visit_function_call(AST_T* node);

AST_T* visitor_visit_string(AST_T* node);

AST_T* visitor_visit_compound(AST_T* node);
#endif
