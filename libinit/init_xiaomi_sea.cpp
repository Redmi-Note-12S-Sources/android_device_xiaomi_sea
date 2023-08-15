/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

#define FINGERPRINT_SEA "Redmi/sea_global/sea:13/SP1A.210812.016/V14.0.7.0.THZMIXM:user/release-keys"
#define FINGERPRINT_OCEAN "Redmi/ocean_global/ocean:13/SP1A.210812.016/V14.0.7.0.THZMIXM:user/release-keys"

static const variant_info_t sea_info = {
    .hwc_value = "",
    .sku_value = "ksrn",
    .brand = "Redmi",
    .device = "sea",
    .marketname = "Redmi Note 12S",
    .model = "sea",
    .mod_device = "sea_global",
    .build_fingerprint = FINGERPRINT_SEA,
};

static const variant_info_t ocean_info = {
    .hwc_value = "",
    .sku_value = "k7sr",
    .brand = "Redmi",
    .device = "ocean",
    .marketname = "Redmi Note 12S",
    .model = "ocean",
    .mod_device = "ocean_global",
    .build_fingerprint = FINGERPRINT_OCEAN,
};

static const variant_info_t ocean_la_info = {
    .hwc_value = "",
    .sku_value = "kslr",
    .brand = "Redmi",
    .device = "ocean",
    .marketname = "Redmi Note 12S",
    .model = "ocean",
    .mod_device = "ocean_global",
    .build_fingerprint = FINGERPRINT_OCEAN,
};

static const std::vector<variant_info_t> variants = {
    sea_info,
    ocean_info,
};

void vendor_load_properties() {
    set_dalvik_heap();
    search_variant(variants);
}
