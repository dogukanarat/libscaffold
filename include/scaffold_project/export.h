/* export.h - one line definition */

/* All Rights Reserved */

#ifndef INC_SCAFFOLD_PROJECT_EXPORT_H
#define INC_SCAFFOLD_PROJECT_EXPORT_H

/* Includes */


#ifdef __cplusplus
extern "C" {
#endif


/* Configurations */


/* Definitions */

#if defined(_WIN32) || defined(__CYGWIN__)
#ifdef SCAFFOLD_PROJECT_EXPORTS
#define SCAFFOLD_PROJECT_API __declspec(dllexport)
#else
#define SCAFFOLD_PROJECT_API __declspec(dllimport)
#endif
#elif defined(__GNUC__) && __GNUC__ >= 4
#define SCAFFOLD_PROJECT_API __attribute__((visibility("default")))
#else
#define SCAFFOLD_PROJECT_API
#endif

/* Types */


/* External Declarations */


#ifdef __cplusplus
}
#endif

#endif /* INC_SCAFFOLD_PROJECT_EXPORT_H */