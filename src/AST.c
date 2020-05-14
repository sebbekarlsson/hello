#include<stdlib.h>
#include "include/AST.h"

AST_T* init_ast(int type)
{
    AST_T* ast = calloc(1, sizeof(struct AST_STRUCT));
    ast->type = type;

    ast->scope = NULL;

    /* AST_VARIABLE_DEFINITION */
    ast->variable_definition_variable_name = NULL;
    ast->variable_definition_value = NULL;

    /* AST_FUNCTION_DEFINITION */
    ast->function_definition_body = NULL;
    ast->function_definition_name = NULL;
    ast->function_definition_args = NULL;
    ast->function_definition_args_size = 0;

    /* AST_VARIABLE */
    ast->variable_name = NULL;

    /* AST_FUNCTION_CALL */
    ast->function_call_name = NULL;
    ast->function_call_arguments = NULL;
    ast->function_call_arguments_size = 0;

    /* AST_STRING */
    ast->string_value = NULL;

    /* AST_COMPOUND */
    ast->compound_value = NULL;
    ast->compound_size = 0;

    return ast;
}
