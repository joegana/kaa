/*
 * Copyright 2014 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

# ifndef KAA_DEFAULTS_H_
# define KAA_DEFAULTS_H_

/**
 *
 * DO NOT EDIT THIS FILE. IT IS AUTO-GENERATED.
 *
 */

# include <stdint.h>
# include "kaa_common.h"

# ifdef __cplusplus
extern "C" {
# endif

# define BUILD_VERSION                   "0.6.3-SNAPSHOT"
# define BUILD_COMMIT_HASH               "05737b74fb1c3d583e8c9d66503aa975afb3fc32"

# define APPLICATION_TOKEN               "20271712075770146781"

# define CONFIG_SCHEMA_VERSION           1
# define PROFILE_SCHEMA_VERSION          2
# define SYSTEM_NF_SCHEMA_VERSION        1
# define USER_NF_SCHEMA_VERSION          1
# define LOG_SCHEMA_VERSION              2

# define KAA_SYNC_TIMEOUT                60000L



typedef struct kaa_events_schema_version_ {
    const char *    name;
    uint16_t         version;
} kaa_events_schema_version;

# define KAA_EVENT_SCHEMA_VERSIONS_SIZE    0

static const kaa_events_schema_version KAA_EVENT_SCHEMA_VERSIONS[KAA_EVENT_SCHEMA_VERSIONS_SIZE] = {
};



/**
 * @brief Uses to represent transport-specific connection data to establish
 * connection to Bootstrap servers.
 *
 * @see kaa_transport_protocol_id_t
 * @see kaa_access_point_t
 */
typedef struct {
    kaa_transport_protocol_id_t    protocol_id;
    kaa_access_point_t             access_point;
} kaa_bootstrap_server_connection_data_t;

# define KAA_BOOTSTRAP_ACCESS_POINT_COUNT    2

static const kaa_bootstrap_server_connection_data_t KAA_BOOTSTRAP_ACCESS_POINTS[KAA_BOOTSTRAP_ACCESS_POINT_COUNT] =
{
    {
        { 0xfb9a3cf0, 1 },
        {
            0x95f7e40f,
            316,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -119 , -42 , -91 , 55 , 77 , -45 , -77 , 83 , -64 , -73 , -37 , 14 , -59 , -42 , -76 , -48 , 66 , -7 , 17 , -127 , 17 , 95 , -72 , -51 , 86 , -37 , -73 , 125 , 84 , -6 , -90 , 122 , 124 , 67 , -104 , -70 , 49 , -49 , 36 , -89 , -40 , 118 , -65 , -72 , 31 , 30 , -69 , -61 , -87 , 7 , -15 , 93 , -65 , 46 , -75 , -59 , -102 , -81 , 17 , 116 , 6 , 125 , -108 , -58 , -120 , -113 , -69 , -123 , -17 , -49 , -99 , -76 , 26 , 72 , -29 , -83 , 110 , 45 , -107 , -102 , 6 , 68 , -39 , 51 , 39 , -14 , 96 , -104 , -13 , 121 , -85 , -4 , 91 , 126 , 123 , 96 , -22 , 57 , -122 , 2 , -80 , 0 , -127 , 38 , 6 , -56 , -9 , -86 , 123 , 47 , -65 , 99 , -63 , -127 , 9 , 118 , 58 , 28 , 93 , -1 , 6 , -15 , -98 , -113 , 103 , 70 , -82 , -44 , 127 , 18 , -62 , -31 , -4 , -115 , 78 , 52 , 120 , -116 , 39 , 4 , 78 , 42 , 87 , -128 , 24 , -6 , 76 , -6 , 53 , 63 , -17 , -31 , -37 , 92 , -92 , 4 , 123 , -67 , 91 , 21 , 98 , 4 , -64 , -77 , 36 , 34 , 92 , 50 , 127 , 92 , -109 , -73 , 49 , -98 , -43 , 59 , 38 , -114 , 112 , 42 , -8 , -14 , 62 , 26 , -68 , -70 , -63 , -97 , -28 , 83 , -82 , -51 , -73 , 118 , -121 , 47 , -55 , 55 , 49 , -13 , 112 , -124 , 87 , 11 , 72 , -58 , 2 , -36 , -19 , 51 , 122 , -50 , 76 , 108 , 33 , 112 , -77 , 27 , -126 , 85 , 84 , -102 , 120 , 17 , -97 , -79 , 14 , -94 , 97 , 106 , -9 , 108 , 10 , -69 , 47 , 115 , -98 , -40 , -78 , -99 , -94 , 56 , -60 , -117 , 70 , 95 , 117 , 14 , -27 , 74 , 33 , 94 , 26 , -31 , 27 , 39 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 10 , 49 , 48 , 46 , 50 , 46 , 49 , 46 , 49 , 57 , 51 , 0 , 0 , 38 , -95             }
        }
    },
    {
        { 0x56c8ff92, 1 },
        {
            0x95f7e40f,
            316,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -119 , -42 , -91 , 55 , 77 , -45 , -77 , 83 , -64 , -73 , -37 , 14 , -59 , -42 , -76 , -48 , 66 , -7 , 17 , -127 , 17 , 95 , -72 , -51 , 86 , -37 , -73 , 125 , 84 , -6 , -90 , 122 , 124 , 67 , -104 , -70 , 49 , -49 , 36 , -89 , -40 , 118 , -65 , -72 , 31 , 30 , -69 , -61 , -87 , 7 , -15 , 93 , -65 , 46 , -75 , -59 , -102 , -81 , 17 , 116 , 6 , 125 , -108 , -58 , -120 , -113 , -69 , -123 , -17 , -49 , -99 , -76 , 26 , 72 , -29 , -83 , 110 , 45 , -107 , -102 , 6 , 68 , -39 , 51 , 39 , -14 , 96 , -104 , -13 , 121 , -85 , -4 , 91 , 126 , 123 , 96 , -22 , 57 , -122 , 2 , -80 , 0 , -127 , 38 , 6 , -56 , -9 , -86 , 123 , 47 , -65 , 99 , -63 , -127 , 9 , 118 , 58 , 28 , 93 , -1 , 6 , -15 , -98 , -113 , 103 , 70 , -82 , -44 , 127 , 18 , -62 , -31 , -4 , -115 , 78 , 52 , 120 , -116 , 39 , 4 , 78 , 42 , 87 , -128 , 24 , -6 , 76 , -6 , 53 , 63 , -17 , -31 , -37 , 92 , -92 , 4 , 123 , -67 , 91 , 21 , 98 , 4 , -64 , -77 , 36 , 34 , 92 , 50 , 127 , 92 , -109 , -73 , 49 , -98 , -43 , 59 , 38 , -114 , 112 , 42 , -8 , -14 , 62 , 26 , -68 , -70 , -63 , -97 , -28 , 83 , -82 , -51 , -73 , 118 , -121 , 47 , -55 , 55 , 49 , -13 , 112 , -124 , 87 , 11 , 72 , -58 , 2 , -36 , -19 , 51 , 122 , -50 , 76 , 108 , 33 , 112 , -77 , 27 , -126 , 85 , 84 , -102 , 120 , 17 , -97 , -79 , 14 , -94 , 97 , 106 , -9 , 108 , 10 , -69 , 47 , 115 , -98 , -40 , -78 , -99 , -94 , 56 , -60 , -117 , 70 , 95 , 117 , 14 , -27 , 74 , 33 , 94 , 26 , -31 , 27 , 39 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 10 , 49 , 48 , 46 , 50 , 46 , 49 , 46 , 49 , 57 , 51 , 0 , 0 , 38 , -96             }
        }
    }};

# ifdef __cplusplus
} // extern "C"
# endif

# endif /* KAA_DEFAULTS_H_ */
