/*
 * multiword_types.h
 *
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * Code generation for model "TP_3tanks_sim".
 *
 * Model version              : 1.19
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Fri Mar 29 11:18:57 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MULTIWORD_TYPES_H
#define MULTIWORD_TYPES_H
#include "rtwtypes.h"

/*
 * MultiWord supporting definitions
 */
typedef long int long_T;

/*
 * MultiWord types
 */
typedef struct {
  uint64_T chunks[2];
} int128m_T;

typedef struct {
  int128m_T re;
  int128m_T im;
} cint128m_T;

typedef struct {
  uint64_T chunks[2];
} uint128m_T;

typedef struct {
  uint128m_T re;
  uint128m_T im;
} cuint128m_T;

typedef struct {
  uint64_T chunks[3];
} int192m_T;

typedef struct {
  int192m_T re;
  int192m_T im;
} cint192m_T;

typedef struct {
  uint64_T chunks[3];
} uint192m_T;

typedef struct {
  uint192m_T re;
  uint192m_T im;
} cuint192m_T;

typedef struct {
  uint64_T chunks[4];
} int256m_T;

typedef struct {
  int256m_T re;
  int256m_T im;
} cint256m_T;

typedef struct {
  uint64_T chunks[4];
} uint256m_T;

typedef struct {
  uint256m_T re;
  uint256m_T im;
} cuint256m_T;

#endif                                 /* MULTIWORD_TYPES_H */
