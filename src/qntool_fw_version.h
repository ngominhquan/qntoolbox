  #ifndef QNTOOL_FW_VERSION_H
  #define QNTOOL_FW_VERSION_H

  #define QNTOOL_FW_VERSION_MAJOR    0
  #define QNTOOL_FW_VERSION_MINOR    0
  #define QNTOOL_FW_VERSION_PATCH    1

  #define QNTOOL_FW_VERSION          ((QNTOOL_FW_VERSION_MAJOR << 16) | \
                                    (QNTOOL_FW_VERSION_MINOR << 8)  | \
                                    (QNTOOL_FW_VERSION_PATCH))

  #define QNTOOL_FW_VERSION_STR      XSTRINGIFY(QNTOOL_FW_VERSION_MAJOR) "." \
                                    XSTRINGIFY(QNTOOL_FW_VERSION_MINOR) "." \
                                    XSTRINGIFY(QNTOOL_FW_VERSION_PATCH)
  #define STRINGIFY(x)              #x
  #define XSTRINGIFY(x)            STRINGIFY(x)

  #endif /* QNTOOL_FW_VERSION_H */
