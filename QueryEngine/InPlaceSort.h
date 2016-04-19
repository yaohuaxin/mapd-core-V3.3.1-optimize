/*
 * @file    InPlaceSort.h
 * @author  Alex Suhan <alex@mapd.com>
 *
 * Copyright (c) 2015 MapD Technologies, Inc.  All rights reserved.
 */

#ifndef INPLACESORT_H
#define INPLACESORT_H

#include <cstdint>

void sort_groups_gpu(int64_t* val_buff, int64_t* key_buff, const uint64_t entry_count, const bool desc);
void sort_groups_cpu(int64_t* val_buff, int64_t* key_buff, const uint64_t entry_count, const bool desc);
void apply_permutation_gpu(int64_t* val_buff, int64_t* idx_buff, const uint64_t entry_count, int64_t* tmp_buff);
void apply_permutation_cpu(int64_t* val_buff, int64_t* idx_buff, const uint64_t entry_count, int64_t* tmp_buff);

#endif  // INPLACESORT_H