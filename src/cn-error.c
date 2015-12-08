#include <cn-cbor/cn-cbor.h>

#define ARRAY_SIZE(A) (sizeof (A)/sizeof (A)[0])

const char *cn_cbor_strerror(cn_cbor_error e)
{
    static const char *str[] = {
     "CN_CBOR_NO_ERROR",
     "CN_CBOR_ERR_OUT_OF_DATA",
     "CN_CBOR_ERR_NOT_ALL_DATA_CONSUMED",
     "CN_CBOR_ERR_ODD_SIZE_INDEF_MAP",
     "CN_CBOR_ERR_BREAK_OUTSIDE_INDEF",
     "CN_CBOR_ERR_MT_UNDEF_FOR_INDEF",
     "CN_CBOR_ERR_RESERVED_AI",
     "CN_CBOR_ERR_WRONG_NESTING_IN_INDEF_STRING",
     "CN_CBOR_ERR_INVALID_PARAMETER",
     "CN_CBOR_ERR_OUT_OF_MEMORY",
     "CN_CBOR_ERR_FLOAT_NOT_SUPPORTED"
    };
    
    if (0 <= e && e < ARRAY_SIZE(str))
        return str[e];
        
    return "CN_CBOR_ERR_INVALID_ERR_CODE";
};